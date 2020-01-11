class ITello : public IDispatch
{
public:
  virtual HRESULT __stdcall EnterCommandMode(int *) = 0; // pure virtual
  virtual HRESULT __stdcall Takeoff(int *) = 0; // pure virtual
  virtual HRESULT __stdcall Land(int *) = 0; // pure virtual
  virtual HRESULT __stdcall StreamOn(int *) = 0; // pure virtual
  virtual HRESULT __stdcall StreamOff(int *) = 0; // pure virtual
  virtual HRESULT __stdcall EmergencyShutdown(int *) = 0; // pure virtual
  virtual HRESULT __stdcall FlyUp(int, int *) = 0; // pure virtual // 20-500 cms
  virtual HRESULT __stdcall FlyDown(int, int *) = 0; // pure virtual // 20-500 cms
  virtual HRESULT __stdcall FlyLeft(int, int *) = 0; // pure virtual // 20-500 cms
  virtual HRESULT __stdcall FlyRight(int, int *) = 0; // pure virtual // 20-500 cms
  virtual HRESULT __stdcall FlyForward(int, int *) = 0; // pure virtual // 20-500 cms
  virtual HRESULT __stdcall FlyBack(int, int *) = 0; // pure virtual // 20-500 cms
  virtual HRESULT __stdcall FlyClockWise(int, int *) = 0; // pure virtual // 1-3600 degree
  virtual HRESULT __stdcall FlyCounterClockWise(int, int *) = 0; // pure virtual // 1-3600 degree
  virtual HRESULT __stdcall FlyFlip(char, int *) = 0; // pure virtual // [l  (left) r  (right) f (forward) b (back)]
  virtual HRESULT __stdcall GoTo(int, int, int, int, int *) = 0; // pure virtual //fly to x y z in speed (cm/s) x:20-500 y:20-500 z:20-500 speed:10-100
  virtual HRESULT __stdcall FlyInCurve(int ,int, int, int, int, int, int, int *) = 0; // pure virtual // fly a curve defined by the current and two given coordinates with speed(cm/s)If the arc radius is not within the range of 0.5-10 meters, it responses false x1, x2: 20-500 y1, y2:20-500 z1, z2:20-500 speed: 10-60 x/y/z can’t be between -20–20 at the same time.
  //setter
  virtual HRESULT __stdcall SetSpeed(int, int *) = 0; // pure virtual // 10-100 cms
  virtual HRESULT __stdcall SendRcControlviaFourChannels(int ,int, int, int, int *) = 0; // pure virtual //Send RC control via four channels. a:left/right(-100~100) b:forward/backward(-100~100) c:up/down(-100~100) d:yaw(-100~100)
  //Getter
  virtual HRESULT __stdcall GetSpeedValue(int *) = 0; // pure virtual //current speed (cm/s)
  virtual HRESULT __stdcall GetBatteryPercent(int *) = 0; // pure virtual //battery percentage
  virtual HRESULT __stdcall GetTimeValue(int *) = 0; // pure virtual //current flying time (s)
  virtual HRESULT __stdcall GetHeightValue(int *) = 0; // pure virtual //get height (cm)
  virtual HRESULT __stdcall GetTempratureCelciusDegree(int *) = 0; // pure virtual //get  temperature(°C)
  virtual HRESULT __stdcall GetAttitudeValue(int *) = 0; // pure virtual //get IMU attitude data
  virtual HRESULT __stdcall GetBarometerValue(int *) = 0; // pure virtual //get barometer value(m)
  virtual HRESULT __stdcall GetAccelerationValue(int *) = 0; // pure virtual //get IMU angular acceleration data(0.001g)
  virtual HRESULT __stdcall GetTOF(int *) = 0; // pure virtual //get distance value from TOF (cm)
  virtual HRESULT __stdcall GetWifiSNR(int *) = 0; // pure virtual //get wifi SNR
};
//CLSID of Tello Component : {35EF76EC-BEF8-4551-91A3-2A9E1DA2F12A}
const CLSID CLSID_Tello = { 0x35ef76ec, 0xbef8, 0x4551, 0x91, 0xa3, 0x2a, 0x9e, 0x1d, 0xa2, 0xf1, 0x2a };
//IID of ITello Interface : {F19F090F-DB2F-45B7-AD2A-50639F1771B1}
const IID IID_ITello = { 0xf19f090f, 0xdb2f, 0x45b7, 0xad, 0x2a, 0x50, 0x63, 0x9f, 0x17, 0x71, 0xb1 };
