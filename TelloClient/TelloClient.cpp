#pragma once
#include <windows.h>
#include <stdio.h> // for swprintf_s()
#include "TelloServer.h"

// global function declarations
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
DWORD WINAPI TelloStateThread(LPVOID);
// int udpConnection();

// global variable declarations
ITello *pITello = NULL;
//WinMain
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
  // variable declarations
  WNDCLASSEX wndclass;
  HWND hwnd;
  MSG msg;
  TCHAR AppName[]=TEXT("Tello ComClient");
  HRESULT hr;
  // code
  // COM Initialization
  hr=CoInitialize(NULL);
  if(FAILED(hr))
  {
    MessageBox(NULL,TEXT("COM Library Can Not Be Initialized.\nProgram Will Now Exit."),TEXT("Program Error"),MB_OK);
    exit(0);
  }
  // WNDCLASSEX initialization
  wndclass.cbSize=sizeof(wndclass);
  wndclass.style=CS_HREDRAW|CS_VREDRAW;
  wndclass.cbClsExtra=0;
  wndclass.cbWndExtra=0;
  wndclass.lpfnWndProc=WndProc;
  wndclass.hIcon=LoadIcon(NULL,IDI_APPLICATION);
  wndclass.hCursor=LoadCursor(NULL,IDC_ARROW);
  wndclass.hbrBackground=(HBRUSH)GetStockObject(BLACK_BRUSH);
  wndclass.hInstance=hInstance;
  wndclass.lpszClassName = AppName;
	wndclass.lpszMenuName = NULL;
	wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
  // register window class
  RegisterClassEx(&wndclass);
  // create window
  hwnd=CreateWindow(AppName,
        TEXT("Client of Tello COM Dll Server"),
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        NULL,
        NULL,
        hInstance,
        NULL);

    ShowWindow(hwnd,nCmdShow);
    UpdateWindow(hwnd);
    // message loop
    while(GetMessage(&msg,NULL,0,0))
    {
      TranslateMessage(&msg);
      DispatchMessage(&msg);
    }
    // COM Un-initialization
    CoUninitialize();
    return((int)msg.wParam);
}
// Window Procedure
LRESULT CALLBACK WndProc(HWND hwnd,UINT iMsg,WPARAM wParam,LPARAM lParam)
{
  //function declarations
  void ComErrorDescriptionString(HWND, HRESULT);
  void SafeInterfaceRelease(void);
  // variable declarations
  HRESULT hr;
  int iSpeed,iResponse;
  TCHAR str[255];
  PAINTSTRUCT ps;
	HDC hdc;
	RECT rc;
  HANDLE hTelloStateThread = NULL;
  // code
  switch(iMsg)
  {
    case WM_CREATE:

    MessageBox(hwnd, TEXT("Start"), TEXT("WM_CREATE"),MB_OK);
    // udpConnection();
      hr=CoCreateInstance(CLSID_Tello,NULL,CLSCTX_INPROC_SERVER,IID_ITello,(void **)&pITello);
      if(FAILED(hr))
      {
        MessageBox(hwnd, TEXT("hr failed"), TEXT("WM_CREATE"),MB_OK);
        ComErrorDescriptionString(hwnd, hr);
        DestroyWindow(hwnd);
      }
      // initialize arguments hardcoded
      iSpeed = 20;
      // call EnterCommandMode() of ITello to initialize the command mode in Tello
      pITello->EnterCommandMode(&iResponse);
      wsprintf(str, TEXT("CommandMode : %d"),iResponse);
      MessageBox(hwnd, str, TEXT("Tello Command Mode"),MB_OK);
      break;
    case WM_KEYDOWN:
      switch (wParam) {
        case VK_LEFT:
        pITello->FlyLeft(50,&iResponse);
        // wsprintf(str, TEXT("CommandMode : %d"),iResponse);
        // MessageBox(hwnd, str, TEXT("Tello FlyLeft Mode"),MB_OK);
        break;

        case VK_RIGHT:
        pITello->FlyRight(50,&iResponse);
        // wsprintf(str, TEXT("CommandMode : %d"),iResponse);
        // MessageBox(hwnd, str, TEXT("Tello FlyRight Mode"),MB_OK);
        break;

        case VK_DOWN:
        pITello->FlyForward(50,&iResponse);
        // wsprintf(str, TEXT("CommandMode : %d"),iResponse);
        // MessageBox(hwnd, str, TEXT("Tello FlyForward Mode"),MB_OK);
        break;

        case VK_UP:
        pITello->FlyBack(50,&iResponse);
        // wsprintf(str, TEXT("CommandMode : %d"),iResponse);
        // MessageBox(hwnd, str, TEXT("Tello FlyBack Mode"),MB_OK);
        break;
      }
      break;
    case WM_CHAR:
  		switch (LOWORD(wParam))
  		{
  		    case 'C':
  		    case 'c':
          pITello->StreamOn(&iResponse);
          // udpConnection();
          break;

          case 'I':
  		    case 'i':
          // hTelloStateThread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)TelloStateThread, (LPVOID)hwnd, 0, NULL);
          break;

          case VK_CANCEL:
          TerminateThread(hTelloStateThread,0);
          break;

          case 'T':
  		    case 't':
          pITello->Takeoff(&iResponse);
          wsprintf(str, TEXT("CommandMode : %d"),iResponse);
          MessageBox(hwnd, str, TEXT("Tello Takeoff Mode"),MB_OK);
          break;

          case 'L':
  		    case 'l':
          pITello->Land(&iResponse);
          wsprintf(str, TEXT("CommandMode : %d"),iResponse);
          MessageBox(hwnd, str, TEXT("Tello Land Mode"),MB_OK);
          break;

          case '8':
          pITello->FlyUp(70,&iResponse);
          wsprintf(str, TEXT("CommandMode : %d"),iResponse);
          // MessageBox(hwnd, str, TEXT("Tello FlyUp Mode"),MB_OK);
          break;

          case '2':
          pITello->FlyDown(70,&iResponse);
          wsprintf(str, TEXT("CommandMode : %d"),iResponse);
          // MessageBox(hwnd, str, TEXT("Tello FlyDown Mode"),MB_OK);
          break;

          case '6':
          pITello->FlyClockWise(30,&iResponse);
          wsprintf(str, TEXT("CommandMode : %d"),iResponse);
          // MessageBox(hwnd, str, TEXT("Tello FlyClockWise Mode"),MB_OK);
          break;

          case '4':
          pITello->FlyCounterClockWise(30,&iResponse);
          wsprintf(str, TEXT("CommandMode : %d"),iResponse);
          // MessageBox(hwnd, str, TEXT("Tello FlyCounterClockWise Mode"),MB_OK);
          break;

          case 'A':
          pITello->FlyFlip('l',&iResponse);
          wsprintf(str, TEXT("CommandMode : %d"),iResponse);
          // MessageBox(hwnd, str, TEXT("Tello FlyFlip Mode"),MB_OK);
          break;

          case 'D':
          pITello->FlyFlip('r',&iResponse);
          wsprintf(str, TEXT("CommandMode : %d"),iResponse);
          // MessageBox(hwnd, str, TEXT("Tello FlyFlip Mode"),MB_OK);
          break;

          case 'W':
          pITello->FlyFlip('f',&iResponse);
          wsprintf(str, TEXT("CommandMode : %d"),iResponse);
          // MessageBox(hwnd, str, TEXT("Tello FlyFlip Mode"),MB_OK);
          break;

          case 'S':
          pITello->FlyFlip('b',&iResponse);
          wsprintf(str, TEXT("CommandMode : %d"),iResponse);
          // MessageBox(hwnd, str, TEXT("Tello FlyFlip Mode"),MB_OK);
          break;

          case 'b':
          pITello->GetBatteryPercent(&iResponse);
          wsprintf(str, TEXT("BatteryPercent : %d"),iResponse);
          // MessageBox(hwnd, str, TEXT("Tello Stats"),MB_OK);
          break;

          case VK_ESCAPE:
          // exit the application
          DestroyWindow(hwnd);
          break;
      }
      break;
    case WM_DESTROY:
      //Release
      pITello->Release();
      pITello=NULL;//makes released interface NULL
      TerminateThread(hTelloStateThread,0);
      SafeInterfaceRelease();
      PostQuitMessage(0);
      break;
  }
  return(DefWindowProc(hwnd,iMsg,wParam,lParam));
}
void ComErrorDescriptionString(HWND hwnd,HRESULT hr)
{
  // variable declarations
  TCHAR* szErrorMessage = NULL;
  TCHAR str[255];
  // code
  if (FACILITY_WINDOWS == HRESULT_FACILITY(hr))
    hr = HRESULT_CODE(hr);

  if (FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, hr, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)&szErrorMessage, 0, NULL) != 0)
  {
    wsprintf(str, TEXT("%s"), szErrorMessage);
    LocalFree(szErrorMessage);
  }
  else
    wsprintf(str, TEXT("[Could not find a description for error # % #x.]\n"), hr);

  MessageBox(hwnd, str, TEXT("COM Error"), MB_OK);
}
void SafeInterfaceRelease(void)
{
  // code
  if(pITello)
  {
    pITello->Release();
    pITello=NULL;
  }
}
DWORD WINAPI TelloStateThread(LPVOID param)
{
	HDC hdc;
	int speed,battery,time,height,temp,baro,acceleration,tof;
	TCHAR str[255];

	hdc = GetDC((HWND)param); //External Typcasting param from LPVOID to HWND

	//set Text Color
	SetTextColor(hdc, RGB(0, 255, 0));

	//set Background Color
	SetBkColor(hdc, RGB(0, 0, 0));

	while(1)
	{
    pITello->GetSpeedValue(&speed);
    pITello->GetBatteryPercent(&battery);
    pITello->GetTimeValue(&time);
    pITello->GetHeightValue(&height);
    pITello->GetTempratureCelciusDegree(&temp);
    pITello->GetBarometerValue(&baro);
    pITello->GetAccelerationValue(&acceleration);
    pITello->GetTOF(&tof);

    wsprintf(str, TEXT("Current Speed            : %d cm/s\nBattery                  : %d %\nCurrent flying Time      : %d sec\nHeight                   : %d cm\nTemperature              : %d celcius\nBarometer                : %d m\nIMU Angular Acceleration : %d  \nDistance value from TOF  : %d cm\n"),speed,battery,time,height,temp,baro,acceleration,tof);

    TextOut(hdc, 5, 5, str, sizeof(str));

    Sleep(5000);
	}
	ReleaseDC((HWND)param, hdc);
	return 0;
}
