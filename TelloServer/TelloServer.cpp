// Header Files
#pragma once
#define _WINSOCKAPI_

#include <windows.h>
#include <stdio.h> // for swprintf_s()
#include <tchar.h>
#include <string>
#include <thread>
#include <dshow.h>
//socket
#include <winsock2.h>
#include <Ws2tcpip.h>
#include "TelloServer.h"

#ifndef UNICODE
#define UNICODE
#endif

// Link with ws2_32.lib
#pragma comment(lib, "Ws2_32.lib")

// class Declarations
// coclass
class CTello :public ITello
{
private:
  long m_cRef;
  ITypeInfo *m_pITypeInfo;

  //Socket variables
  WSADATA m_winSockData;
  TCHAR m_msgStr[255];
  SOCKET m_uDPSocketServer;
  struct sockaddr_in m_localAddr,m_videoAddr,m_statsAddr,m_telloAddress;
  int m_iLocalAddrLen,m_iVideoAddrLen,m_iStatsAddrLen;
  int m_iResult;
  bool m_bVideoStreamOn;
  std::thread m_tVideoThread;

public:
  // constructor method declarations
  CTello(void);
  // destructor method declarations
  ~CTello(void);
  // IUnknown specific method declarations (inhereted)
  HRESULT __stdcall QueryInterface(REFIID, void **);
  ULONG __stdcall AddRef(void);
  ULONG __stdcall Release(void);
  //IDispatch specific method declarations (inhereted)
  HRESULT __stdcall GetTypeInfoCount(UINT*);
  HRESULT __stdcall GetTypeInfo(UINT, LCID, ITypeInfo**);
  HRESULT __stdcall GetIDsOfNames(REFIID, LPOLESTR*, UINT, LCID, DISPID*);
  HRESULT __stdcall Invoke(DISPID, REFIID, LCID, WORD, DISPPARAMS*, VARIANT*, EXCEPINFO*, UINT*);
  // ITello specific method declarations (inhereted)
  HRESULT __stdcall EnterCommandMode(int *);
  HRESULT __stdcall Takeoff(int *);
  HRESULT __stdcall Land(int *);
  HRESULT __stdcall StreamOn(int *);
  HRESULT __stdcall StreamOff(int *);
  HRESULT __stdcall EmergencyShutdown(int *);
  HRESULT __stdcall FlyUp(int, int *);
  HRESULT __stdcall FlyDown(int, int *);
  HRESULT __stdcall FlyLeft(int, int *);
  HRESULT __stdcall FlyRight(int, int *);
  HRESULT __stdcall FlyForward(int, int *);
  HRESULT __stdcall FlyBack(int, int *);
  HRESULT __stdcall FlyClockWise(int, int *);
  HRESULT __stdcall FlyCounterClockWise(int, int *);
  HRESULT __stdcall FlyFlip(char, int *);
  HRESULT __stdcall GoTo(int, int, int, int, int *);
  HRESULT __stdcall FlyInCurve(int ,int, int, int, int, int, int, int *);
    // Setter
  HRESULT __stdcall SetSpeed(int, int *);
  HRESULT __stdcall SendRcControlviaFourChannels(int ,int, int, int, int *);
    // Getter
  HRESULT __stdcall GetSpeedValue(int *);
  HRESULT __stdcall GetBatteryPercent(int *);
  HRESULT __stdcall GetTimeValue(int *);
  HRESULT __stdcall GetHeightValue(int *);
  HRESULT __stdcall GetTempratureCelciusDegree(int *);
  HRESULT __stdcall GetAttitudeValue(int *);
  HRESULT __stdcall GetBarometerValue(int *);
  HRESULT __stdcall GetAccelerationValue(int *);
  HRESULT __stdcall GetTOF(int *);
  HRESULT __stdcall GetWifiSNR(int *);
  int stoi(const char *);
  void videoStreamThread();
  // Custom methods
  HRESULT InitInstance(void);
};

// class factory
class CTelloClassFactory :public IClassFactory
{
private:
  long m_cRef;
public:
  // constructor method Declarations
  CTelloClassFactory(void);
  // destructor method Declarations
  ~CTelloClassFactory(void);
  // IUnknown specific method declarations (inhereted)
  HRESULT __stdcall QueryInterface(REFIID, void **);
  ULONG __stdcall AddRef(void);
  ULONG __stdcall Release(void);
  // IClassFactory specific method declarations (inhereted)
  HRESULT __stdcall CreateInstance(IUnknown *, REFIID, void **);
  HRESULT __stdcall LockServer(BOOL);
};

// global variable declarations
long glNumberOfActiveComponents = 0; // number of active Components
long glNumberOfServerLocks = 0; // number of locks on this dll
//{D5A8A70A-FB65-45E5-A6F9-6546E62D3E73}
const GUID LIBID_AutomationServer = { 0xd5a8a70a, 0xfb65, 0x45e5, 0xa6, 0xf9, 0x65, 0x46, 0xe6, 0x2d, 0x3e, 0x73 };

//DllMain
BOOL WINAPI DllMain(HINSTANCE hDll, DWORD dwReason, LPVOID Reserved)
{
  // code
  switch (dwReason) {
    case DLL_PROCESS_ATTACH:
      break;
    case DLL_PROCESS_DETACH:
      break;
  }
  return(TRUE);
}

// Implementation of CTello's constructor method
CTello::CTello(void)
{
  //code
  m_cRef = 1;// hardcoded initialization to anticipate possible failure of QueryInterface()
  InterlockedIncrement(&glNumberOfActiveComponents);// increment global counter

  //Initialize socket variables
  m_iLocalAddrLen = sizeof(m_localAddr);
  m_iVideoAddrLen = sizeof(m_videoAddr);
  m_iStatsAddrLen = sizeof(m_statsAddr);
  m_iResult=0;
}

// Implementation of CTello's destructor method
CTello::~CTello(void)
{
  //code
  InterlockedDecrement(&glNumberOfActiveComponents);// decrement global counter
}

// Implementation of CTello's IUnknown's methods
HRESULT CTello::QueryInterface(REFIID riid, void **ppv)
{
  //code
  if (riid == IID_IUnknown)
    *ppv = static_cast<ITello *>(this);
  else if (riid == IID_IDispatch)
    *ppv = static_cast<ITello *>(this);
  else if (riid == IID_ITello)
    *ppv = static_cast<ITello *>(this);
  else
  {
    *ppv = NULL;
    return(E_NOINTERFACE);
  }
  reinterpret_cast<IUnknown *>(*ppv)->AddRef();
  return(S_OK);
}

ULONG CTello::AddRef(void)
{
  //code
  InterlockedIncrement(&m_cRef);
  return(m_cRef);
}

ULONG CTello::Release(void)
{
  //code
  InterlockedDecrement(&m_cRef);
  if(m_cRef == 0)
  {
    m_pITypeInfo->Release();
    m_pITypeInfo = NULL;
    delete(this);

    // close and clean socket connection
      closesocket(m_uDPSocketServer);
      WSACleanup();

    return(0);
  }
  return(m_cRef);
}

// Implementation of ITello's methods
HRESULT CTello::EnterCommandMode(int *response)
{
  m_iResult = WSAStartup(MAKEWORD(2,2),&m_winSockData);
  if(m_iResult != NO_ERROR)
  {
    wsprintf(m_msgStr,"WSAStartup failed with error %d\n", m_iResult);
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    *response = 1;
    return(E_FAIL);
  }

  m_uDPSocketServer = socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
  if(m_uDPSocketServer == INVALID_SOCKET)
  {
    wsprintf(m_msgStr,"socket failed with error %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    *response = 1;
    return(E_FAIL);
  }

  m_localAddr.sin_family = AF_INET;
  m_localAddr.sin_addr.s_addr = inet_addr("");
  m_localAddr.sin_port = htons(9000);

  m_videoAddr.sin_family = AF_INET;
  m_videoAddr.sin_addr.s_addr = inet_addr("");
  m_videoAddr.sin_port = htons(11111);

  m_statsAddr.sin_family = AF_INET;
  m_statsAddr.sin_addr.s_addr = inet_addr("");
  m_statsAddr.sin_port = htons(8890);

  m_telloAddress.sin_family = AF_INET;
  m_telloAddress.sin_addr.s_addr = inet_addr("192.168.10.1");
  m_telloAddress.sin_port = htons(8889);


  char senderBuffer[512]="command";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_localAddr,
    &m_iLocalAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    char *output = NULL;
    output = strstr (recvBuffer,"ok");
    if(output) {
      *response = 0;
    }
    else{
      *response = 1;
    }
    return(S_OK);
  }
}
HRESULT CTello::Takeoff(int *response)
{
  char senderBuffer[512]="takeoff";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_localAddr,
    &m_iLocalAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    char *output = NULL;
    output = strstr (recvBuffer,"ok");
    if(output) {
      *response = 0;
    }
    else{
      *response = 1;
    }
    return(S_OK);
  }
}

HRESULT CTello::Land(int *response)
{
  char senderBuffer[512]="land";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_localAddr,
    &m_iLocalAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    char *output = NULL;
    output = strstr (recvBuffer,"ok");
    if(output) {
      *response = 0;
    }
    else{
      *response = 1;
    }
    return(S_OK);
  }
}

HRESULT CTello::StreamOn(int *response)
{
  if(!m_bVideoStreamOn){
    char senderBuffer[512]="streamon";
    char recvBuffer[2048];
    int iBufferLen = strlen(senderBuffer)+1;

    m_iResult = sendto(
      m_uDPSocketServer,
      senderBuffer,
      iBufferLen,
      MSG_DONTROUTE,
      (SOCKADDR*)&m_telloAddress,
      sizeof(m_telloAddress)
    );

    if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      closesocket(m_uDPSocketServer);
      WSACleanup();
      *response = 1;
      return(E_FAIL);
    }
    else{
      m_bVideoStreamOn = true;
      m_tVideoThread= std::thread(&CTello::videoStreamThread,this);
      *response = 0;
      return(S_OK);
    }
  }
  else{
    wsprintf(m_msgStr,"Video stream is already running.");
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    *response = 0;
    return(S_OK);
  }
}

HRESULT CTello::StreamOff(int *response)
{
  char senderBuffer[512]="streamoff";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_localAddr,
    &m_iLocalAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    char *output = NULL;
    output = strstr (recvBuffer,"ok");
    if(output) {
      *response = 0;
    }
    else{
      *response = 1;
    }
    m_bVideoStreamOn = false;
    return(S_OK);
  }
}

HRESULT CTello::EmergencyShutdown(int *response)
{
  char senderBuffer[512]="emergency";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_localAddr,
    &m_iLocalAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    char *output = NULL;
    output = strstr (recvBuffer,"ok");
    if(output) {
      *response = 0;
    }
    else{
      *response = 1;
    }
    return(S_OK);
  }
}

HRESULT CTello::FlyUp(int x, int *response)
{
  char senderBuffer[512]="up ";
  char distance[21]; // enough to hold all numbers up to 64-bits
  sprintf(distance, "%d", x);
  strcat(senderBuffer,distance);
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_localAddr,
    &m_iLocalAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    char *output = NULL;
    output = strstr (recvBuffer,"ok");
    if(output) {
      *response = 0;
    }
    else{
      *response = 1;
    }
    return(S_OK);
  }
}

HRESULT CTello::FlyDown(int x, int *response)
{
  char senderBuffer[512]="down ";
  char distance[21]; // enough to hold all numbers up to 64-bits
  sprintf(distance, "%d", x);
  strcat(senderBuffer,distance);
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_localAddr,
    &m_iLocalAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    char *output = NULL;
    output = strstr (recvBuffer,"ok");
    if(output) {
      *response = 0;
    }
    else{
      *response = 1;
    }
    return(S_OK);
  }
}

HRESULT CTello::FlyLeft(int x, int *response)
{
  char senderBuffer[512]="left ";
  char distance[21]; // enough to hold all numbers up to 64-bits
  sprintf(distance, "%d", x);
  strcat(senderBuffer,distance);
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_localAddr,
    &m_iLocalAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    char *output = NULL;
    output = strstr (recvBuffer,"ok");
    if(output) {
      *response = 0;
    }
    else{
      *response = 1;
    }
    return(S_OK);
  }
}

HRESULT CTello::FlyRight(int x, int *response)
{
  char senderBuffer[512]="right ";
  char distance[21]; // enough to hold all numbers up to 64-bits
  sprintf(distance, "%d", x);
  strcat(senderBuffer,distance);
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_localAddr,
    &m_iLocalAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    char *output = NULL;
    output = strstr (recvBuffer,"ok");
    if(output) {
      *response = 0;
    }
    else{
      *response = 1;
    }
    return(S_OK);
  }
}

HRESULT CTello::FlyForward(int x, int *response)
{
  char senderBuffer[512]="forward ";
  char distance[21]; // enough to hold all numbers up to 64-bits
  sprintf(distance, "%d", x);
  strcat(senderBuffer,distance);
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_localAddr,
    &m_iLocalAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    char *output = NULL;
    output = strstr (recvBuffer,"ok");
    if(output) {
      *response = 0;
    }
    else{
      *response = 1;
    }
    return(S_OK);
  }
}

HRESULT CTello::FlyBack(int x, int *response)
{
  char senderBuffer[512]="back ";
  char distance[21]; // enough to hold all numbers up to 64-bits
  sprintf(distance, "%d", x);
  strcat(senderBuffer,distance);
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_localAddr,
    &m_iLocalAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    char *output = NULL;
    output = strstr (recvBuffer,"ok");
    if(output) {
      *response = 0;
    }
    else{
      *response = 1;
    }
    return(S_OK);
  }
}

HRESULT CTello::FlyClockWise(int x, int *response)
{
  char senderBuffer[512]="cw ";
  char distance[21]; // enough to hold all numbers up to 64-bits
  sprintf(distance, "%d", x);
  strcat(senderBuffer,distance);
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_localAddr,
    &m_iLocalAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    char *output = NULL;
    output = strstr (recvBuffer,"ok");
    if(output) {
      *response = 0;
    }
    else{
      *response = 1;
    }
    return(S_OK);
  }
}

HRESULT CTello::FlyCounterClockWise(int x, int *response)
{
  char senderBuffer[512]="ccw ";
  char distance[21]; // enough to hold all numbers up to 64-bits
  sprintf(distance, "%d", x);
  strcat(senderBuffer,distance);
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_localAddr,
    &m_iLocalAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    char *output = NULL;
    output = strstr (recvBuffer,"ok");
    if(output) {
      *response = 0;
    }
    else{
      *response = 1;
    }
    return(S_OK);
  }
}

HRESULT CTello::FlyFlip(char x, int *response)
{
  char senderBuffer[512]="flip ";
  char direction[21]; // enough to hold all numbers up to 64-bits
  sprintf(direction, "%c", x);
  strcat(senderBuffer,direction);
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_localAddr,
    &m_iLocalAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    char *output = NULL;
    output = strstr (recvBuffer,"ok");
    if(output) {
      *response = 0;
    }
    else{
      *response = 1;
    }
    return(S_OK);
  }
}

HRESULT CTello::GoTo(int x, int y, int z, int speed, int *response)
{
  *response = 100;
  return(S_OK);
}

HRESULT CTello::FlyInCurve(int x1,int y1, int z1, int x2, int y2, int z2, int speed, int *response)
{
  *response = 100;
  return(S_OK);
}

  // Setter
HRESULT CTello::SetSpeed(int x, int *response)
{
  *response = x;
  return(S_OK);
}

HRESULT CTello::SendRcControlviaFourChannels(int a,int b, int c, int d, int *response)
{
  *response = 100;
  return(S_OK);
}

  // Getter
HRESULT CTello::GetSpeedValue(int *response)
{
  char senderBuffer[512]="speed?";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_statsAddr,
    &m_iStatsAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    *response = stoi(recvBuffer);
    return(S_OK);
  }
}

HRESULT CTello::GetBatteryPercent(int *response)
{
  char senderBuffer[512]="battery?";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_statsAddr,
    &m_iStatsAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    wsprintf(m_msgStr,"Battery stat %s\n", recvBuffer);
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    wsprintf(m_msgStr,"Battery i %d\n", recvBuffer);
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    *response = stoi(recvBuffer);
    return(S_OK);
  }
}

HRESULT CTello::GetTimeValue(int *response)
{
  char senderBuffer[512]="time?";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_statsAddr,
    &m_iStatsAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    *response = stoi(recvBuffer);
    return(S_OK);
  }
}

HRESULT CTello::GetHeightValue(int *response)
{
  char senderBuffer[512]="height?";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_statsAddr,
    &m_iStatsAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    *response = stoi(recvBuffer);
    return(S_OK);
  }
}

HRESULT CTello::GetTempratureCelciusDegree(int *response)
{
  char senderBuffer[512]="temp?";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_statsAddr,
    &m_iStatsAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    *response = stoi(recvBuffer);
    return(S_OK);
  }
}

HRESULT CTello::GetAttitudeValue(int *response)
{
  char senderBuffer[512]="attitude";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_statsAddr,
    &m_iStatsAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    wsprintf(m_msgStr,"%s\n", recvBuffer);
    MessageBox(NULL,m_msgStr,TEXT("Attitude"),MB_OK);
    *response = 0;
    return(S_OK);
  }
}

HRESULT CTello::GetBarometerValue(int *response)
{
  char senderBuffer[512]="baro?";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_statsAddr,
    &m_iStatsAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    *response = stoi(recvBuffer);
    return(S_OK);
  }
}

HRESULT CTello::GetAccelerationValue(int *response)
{
  char senderBuffer[512]="acceleration?";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_statsAddr,
    &m_iStatsAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    *response = stoi(recvBuffer);
    return(S_OK);
  }
}

HRESULT CTello::GetTOF(int *response)
{
  char senderBuffer[512]="tof?";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_statsAddr,
    &m_iStatsAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    *response = stoi(recvBuffer);
    return(S_OK);
  }
}

HRESULT CTello::GetWifiSNR(int *response)
{
  char senderBuffer[512]="wifi?";
  char recvBuffer[512];
  int iBufferLen = strlen(senderBuffer)+1;

  m_iResult = sendto(
    m_uDPSocketServer,
    senderBuffer,
    iBufferLen,
    MSG_DONTROUTE,
    (SOCKADDR*)&m_telloAddress,
    sizeof(m_telloAddress)
  );

  if (m_iResult == SOCKET_ERROR) {
    wsprintf(m_msgStr,"sendto failed with error: %d\n", WSAGetLastError());
    MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
    closesocket(m_uDPSocketServer);
    WSACleanup();
    *response = 1;
    return(E_FAIL);
  }
  strcpy(recvBuffer,"");
  m_iResult =recvfrom(
    m_uDPSocketServer,
    recvBuffer,
    1518,
    MSG_PEEK,
    (SOCKADDR*)&m_statsAddr,
    &m_iStatsAddrLen
  );

  if (m_iResult == SOCKET_ERROR) {
      wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
      MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
      *response = 1;
      return(E_UNEXPECTED);
  }
  else {
    wsprintf(m_msgStr,"%s\n", recvBuffer);
    MessageBox(NULL,m_msgStr,TEXT("Wifi SNR"),MB_OK);
    *response = 0;
    return(S_OK);
  }
}

int CTello::stoi(const char *s)
{
    int i;
    i = 0;
    while(*s >= '0' && *s <= '9')
    {
        i = i * 10 + (*s - '0');
        s++;
    }
    return i;
}

void CTello::videoStreamThread()
{
  std::string packet_data;
  packet_data.clear();
  char recvBuffer[2048];
   while(m_bVideoStreamOn)
   {
     strcpy(recvBuffer,"");
     m_iResult =recvfrom(
       m_uDPSocketServer,
       recvBuffer,
       2048,
       MSG_PEEK,
       (SOCKADDR*)&m_videoAddr,
       &m_iVideoAddrLen
     );

     if (m_iResult == SOCKET_ERROR) {
         // wsprintf(m_msgStr,"recvfrom failed with error %d\n", WSAGetLastError());
         // MessageBox(NULL,m_msgStr,TEXT("UDP Connection"),MB_OK);
         // *response = 1;
         // return(E_UNEXPECTED);
     }
     else {
       packet_data.append(recvBuffer);
       if ((strlen(recvBuffer)+1) != 1460){

       }
                    // for frame in self._h264_decode(packet_data):
                        // self.frame = frame
                    packet_data.clear();

       // char *output = NULL;
       // wsprintf(m_msgStr,"%s\n", recvBuffer);
       // MessageBox(NULL,m_msgStr,TEXT("UDP Connection : Stream Data "),MB_OK);
       // return(S_OK);
     }

   }
   // return 0;
}

HRESULT CTello::InitInstance(void)
{
  // function declarations
  void ComErrorDescriptionString(HWND, HRESULT);
  // variable declarations
  HRESULT hr;
  ITypeLib *pITypeLib = NULL;
  // code
  if (m_pITypeInfo == NULL)
  {
    hr = LoadRegTypeLib(LIBID_AutomationServer,
         1, 0,// major/minor version numbers
         0x00,// LANG_NEUTRAL
         &pITypeLib);
    if (FAILED(hr))
    {
      ComErrorDescriptionString(NULL, hr);
      return(hr);
    }
    hr = pITypeLib->GetTypeInfoOfGuid(IID_ITello, &m_pITypeInfo);
    if (FAILED(hr))
    {
      ComErrorDescriptionString(NULL, hr);
      pITypeLib->Release();
      return(hr);
    }
    pITypeLib->Release();
  }
  return(S_OK);
}

//Implementation of CTelloClassFactory's constructor method
CTelloClassFactory::CTelloClassFactory(void)
{
  // code
  m_cRef = 1;// hardcoded initialization to anticipate possible failure of QueryInterface()
}

//Implementation of CTelloClassFactory's destructor method
CTelloClassFactory::~CTelloClassFactory(void)
{
  // code
}

//Implementation of CTelloClassFactory's IClassFactory's IUnknown's methods
HRESULT CTelloClassFactory::QueryInterface(REFIID riid, void **ppv)
{
  // code
  if (riid == IID_IUnknown)
    *ppv = static_cast<IClassFactory *>(this);
  else if (riid == IID_IClassFactory)
    *ppv = static_cast<IClassFactory *>(this);
  else
  {
    *ppv = NULL;
    return(E_NOINTERFACE);
  }
  reinterpret_cast<IUnknown *>(*ppv)->AddRef();
  return(S_OK);
}

ULONG CTelloClassFactory::AddRef(void)
{
  // code
  InterlockedDecrement(&m_cRef);
  return(m_cRef);
}
ULONG CTelloClassFactory::Release(void)
{
  // code
  InterlockedDecrement(&m_cRef);
  if (m_cRef == 0)
  {
    delete(this);
    return(0);
  }
  return(m_cRef);
}

//Implementation of CTelloClassFactory's IClassFactory's methods
HRESULT CTelloClassFactory::CreateInstance(IUnknown *pUnkOuter, REFIID riid, void **ppv)
{
  // variable declarations
  CTello *pCTello = NULL;
  HRESULT hr;
  // code
  if(pUnkOuter != NULL)
    return(CLASS_E_NOAGGREGATION);
  // create the instance of component i.e. of CTello Class
  pCTello = new CTello;
  if (pCTello == NULL)
      return(E_OUTOFMEMORY);

  // call automation related init method
  pCTello->InitInstance();

  // get the requested interface
  hr = pCTello->QueryInterface(riid, ppv);
  pCTello->Release();// anticipate possible failure of QueryInterface()
  return(hr);
}

HRESULT CTelloClassFactory::LockServer(BOOL fLock)
{
  // code
  if (fLock)
    InterlockedIncrement(&glNumberOfServerLocks);
  else
    InterlockedDecrement(&glNumberOfServerLocks);
  return(S_OK);
}

// Implementation of IDispatch's methods
HRESULT CTello::GetTypeInfoCount(UINT *pCountTypeInfo)
{
  // code
  // since we have type library it is 1, else 0
  *pCountTypeInfo = 1;
  return(S_OK);
}

HRESULT CTello::GetTypeInfo(UINT iTypeInfo, LCID lcid, ITypeInfo **ppITypeInfo)
{
  // code
  *ppITypeInfo = NULL;
  if (iTypeInfo != 0)
    return(DISP_E_BADINDEX);
  m_pITypeInfo->AddRef();
  *ppITypeInfo = m_pITypeInfo;
  return(S_OK);
}

HRESULT CTello::GetIDsOfNames(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId)
{
  // code
  return(DispGetIDsOfNames(m_pITypeInfo, rgszNames, cNames, rgDispId));
}

HRESULT CTello::Invoke(DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr)
{
  // variable declarations
  HRESULT hr;
  // code
  hr = DispInvoke(this,
       m_pITypeInfo,
       dispIdMember,
       wFlags,
       pDispParams,
       pVarResult,
       pExcepInfo,
       puArgErr);
  return(hr);
}

//Implementation of Exported Functions From This Dll
extern "C" HRESULT __stdcall DllGetClassObject(REFCLSID rclsid, REFIID riid, void **ppv)
{
  // variable declarations
  CTelloClassFactory *pCTelloClassFactory = NULL;
  HRESULT hr;
  // code
  if (rclsid != CLSID_Tello)
    return(CLASS_E_CLASSNOTAVAILABLE);
  // create class factory
  pCTelloClassFactory = new CTelloClassFactory;
  if (pCTelloClassFactory == NULL)
    return(E_OUTOFMEMORY);
  hr = pCTelloClassFactory->QueryInterface(riid, ppv);
  pCTelloClassFactory->Release(); //anticipate possible failure of QueryInterface()
  return(hr);
}

extern "C" HRESULT __stdcall DllCanUnloadNow(void)
{
  // code
  if ((glNumberOfActiveComponents == 0) && (glNumberOfServerLocks == 0))
    return(S_OK);
  else
    return(S_FALSE);
}

void ComErrorDescriptionString(HWND hwnd,HRESULT hr)
{
  //variable declarations
  TCHAR* szErrorMessage = NULL;
  TCHAR str[255];
  // code
  if(FACILITY_WINDOWS == HRESULT_FACILITY(hr))
    hr = HRESULT_CODE(hr);

  if(FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, hr, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPSTR)&szErrorMessage, 0 , NULL) !=0)
  {
    wsprintf(str, TEXT("%#x : %s"), hr, szErrorMessage);
    LocalFree(szErrorMessage);
  }
  else
    wsprintf(str, TEXT("[Could not find a description for error # %#x.]\n"), hr);
  MessageBox(hwnd, str, TEXT("COM Error"), MB_OK);
}
