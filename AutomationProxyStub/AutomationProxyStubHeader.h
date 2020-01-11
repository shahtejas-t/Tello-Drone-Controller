

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 08:44:07 2038
 */
/* Compiler settings for AutomationServerTypeLib.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __AutomationProxyStubHeader_h__
#define __AutomationProxyStubHeader_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITello_FWD_DEFINED__
#define __ITello_FWD_DEFINED__
typedef interface ITello ITello;

#endif 	/* __ITello_FWD_DEFINED__ */


#ifndef __CTello_FWD_DEFINED__
#define __CTello_FWD_DEFINED__

#ifdef __cplusplus
typedef class CTello CTello;
#else
typedef struct CTello CTello;
#endif /* __cplusplus */

#endif 	/* __CTello_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITello_INTERFACE_DEFINED__
#define __ITello_INTERFACE_DEFINED__

/* interface ITello */
/* [oleautomation][dual][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITello;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F19F090F-DB2F-45B7-AD2A-50639F1771B1")
    ITello : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnterCommandMode( 
            /* [retval][out] */ int *__MIDL__ITello0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Takeoff( 
            /* [retval][out] */ int *__MIDL__ITello0001) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Land( 
            /* [retval][out] */ int *__MIDL__ITello0002) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StreamOn( 
            /* [retval][out] */ int *__MIDL__ITello0003) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StreamOff( 
            /* [retval][out] */ int *__MIDL__ITello0004) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EmergencyShutdown( 
            /* [retval][out] */ int *__MIDL__ITello0005) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FlyUp( 
            /* [in] */ int __MIDL__ITello0006,
            /* [retval][out] */ int *__MIDL__ITello0007) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FlyDown( 
            /* [in] */ int __MIDL__ITello0008,
            /* [retval][out] */ int *__MIDL__ITello0009) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FlyLeft( 
            /* [in] */ int __MIDL__ITello0010,
            /* [retval][out] */ int *__MIDL__ITello0011) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FlyRight( 
            /* [in] */ int __MIDL__ITello0012,
            /* [retval][out] */ int *__MIDL__ITello0013) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FlyForward( 
            /* [in] */ int __MIDL__ITello0014,
            /* [retval][out] */ int *__MIDL__ITello0015) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FlyBack( 
            /* [in] */ int __MIDL__ITello0016,
            /* [retval][out] */ int *__MIDL__ITello0017) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FlyClockWise( 
            /* [in] */ int __MIDL__ITello0018,
            /* [retval][out] */ int *__MIDL__ITello0019) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FlyCounterClockWise( 
            /* [in] */ int __MIDL__ITello0020,
            /* [retval][out] */ int *__MIDL__ITello0021) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FlyFlip( 
            /* [in] */ unsigned char __MIDL__ITello0022,
            /* [retval][out] */ int *__MIDL__ITello0023) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GoTo( 
            /* [in] */ int __MIDL__ITello0024,
            /* [in] */ int __MIDL__ITello0025,
            /* [in] */ int __MIDL__ITello0026,
            /* [in] */ int __MIDL__ITello0027,
            /* [retval][out] */ int *__MIDL__ITello0028) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FlyInCurve( 
            /* [in] */ int __MIDL__ITello0029,
            /* [in] */ int __MIDL__ITello0030,
            /* [in] */ int __MIDL__ITello0031,
            /* [in] */ int __MIDL__ITello0032,
            /* [in] */ int __MIDL__ITello0033,
            /* [in] */ int __MIDL__ITello0034,
            /* [in] */ int __MIDL__ITello0035,
            /* [retval][out] */ int *__MIDL__ITello0036) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSpeed( 
            /* [in] */ int __MIDL__ITello0037,
            /* [retval][out] */ int *__MIDL__ITello0038) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendRcControlviaFourChannels( 
            /* [in] */ int __MIDL__ITello0039,
            /* [in] */ int __MIDL__ITello0040,
            /* [in] */ int __MIDL__ITello0041,
            /* [in] */ int __MIDL__ITello0042,
            /* [retval][out] */ int *__MIDL__ITello0043) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSpeedValue( 
            /* [retval][out] */ int *__MIDL__ITello0044) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBatteryPercent( 
            /* [retval][out] */ int *__MIDL__ITello0045) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTimeValue( 
            /* [retval][out] */ int *__MIDL__ITello0046) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHeightValue( 
            /* [retval][out] */ int *__MIDL__ITello0047) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTempratureCelciusDegree( 
            /* [retval][out] */ int *__MIDL__ITello0048) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttitudeValue( 
            /* [retval][out] */ int *__MIDL__ITello0049) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBarometerValue( 
            /* [retval][out] */ int *__MIDL__ITello0050) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAccelerationValue( 
            /* [retval][out] */ int *__MIDL__ITello0051) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTOF( 
            /* [retval][out] */ int *__MIDL__ITello0052) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWifiSNR( 
            /* [retval][out] */ int *__MIDL__ITello0053) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITelloVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITello * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITello * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITello * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITello * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITello * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITello * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITello * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *EnterCommandMode )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0000);
        
        HRESULT ( STDMETHODCALLTYPE *Takeoff )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0001);
        
        HRESULT ( STDMETHODCALLTYPE *Land )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0002);
        
        HRESULT ( STDMETHODCALLTYPE *StreamOn )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0003);
        
        HRESULT ( STDMETHODCALLTYPE *StreamOff )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0004);
        
        HRESULT ( STDMETHODCALLTYPE *EmergencyShutdown )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0005);
        
        HRESULT ( STDMETHODCALLTYPE *FlyUp )( 
            ITello * This,
            /* [in] */ int __MIDL__ITello0006,
            /* [retval][out] */ int *__MIDL__ITello0007);
        
        HRESULT ( STDMETHODCALLTYPE *FlyDown )( 
            ITello * This,
            /* [in] */ int __MIDL__ITello0008,
            /* [retval][out] */ int *__MIDL__ITello0009);
        
        HRESULT ( STDMETHODCALLTYPE *FlyLeft )( 
            ITello * This,
            /* [in] */ int __MIDL__ITello0010,
            /* [retval][out] */ int *__MIDL__ITello0011);
        
        HRESULT ( STDMETHODCALLTYPE *FlyRight )( 
            ITello * This,
            /* [in] */ int __MIDL__ITello0012,
            /* [retval][out] */ int *__MIDL__ITello0013);
        
        HRESULT ( STDMETHODCALLTYPE *FlyForward )( 
            ITello * This,
            /* [in] */ int __MIDL__ITello0014,
            /* [retval][out] */ int *__MIDL__ITello0015);
        
        HRESULT ( STDMETHODCALLTYPE *FlyBack )( 
            ITello * This,
            /* [in] */ int __MIDL__ITello0016,
            /* [retval][out] */ int *__MIDL__ITello0017);
        
        HRESULT ( STDMETHODCALLTYPE *FlyClockWise )( 
            ITello * This,
            /* [in] */ int __MIDL__ITello0018,
            /* [retval][out] */ int *__MIDL__ITello0019);
        
        HRESULT ( STDMETHODCALLTYPE *FlyCounterClockWise )( 
            ITello * This,
            /* [in] */ int __MIDL__ITello0020,
            /* [retval][out] */ int *__MIDL__ITello0021);
        
        HRESULT ( STDMETHODCALLTYPE *FlyFlip )( 
            ITello * This,
            /* [in] */ unsigned char __MIDL__ITello0022,
            /* [retval][out] */ int *__MIDL__ITello0023);
        
        HRESULT ( STDMETHODCALLTYPE *GoTo )( 
            ITello * This,
            /* [in] */ int __MIDL__ITello0024,
            /* [in] */ int __MIDL__ITello0025,
            /* [in] */ int __MIDL__ITello0026,
            /* [in] */ int __MIDL__ITello0027,
            /* [retval][out] */ int *__MIDL__ITello0028);
        
        HRESULT ( STDMETHODCALLTYPE *FlyInCurve )( 
            ITello * This,
            /* [in] */ int __MIDL__ITello0029,
            /* [in] */ int __MIDL__ITello0030,
            /* [in] */ int __MIDL__ITello0031,
            /* [in] */ int __MIDL__ITello0032,
            /* [in] */ int __MIDL__ITello0033,
            /* [in] */ int __MIDL__ITello0034,
            /* [in] */ int __MIDL__ITello0035,
            /* [retval][out] */ int *__MIDL__ITello0036);
        
        HRESULT ( STDMETHODCALLTYPE *SetSpeed )( 
            ITello * This,
            /* [in] */ int __MIDL__ITello0037,
            /* [retval][out] */ int *__MIDL__ITello0038);
        
        HRESULT ( STDMETHODCALLTYPE *SendRcControlviaFourChannels )( 
            ITello * This,
            /* [in] */ int __MIDL__ITello0039,
            /* [in] */ int __MIDL__ITello0040,
            /* [in] */ int __MIDL__ITello0041,
            /* [in] */ int __MIDL__ITello0042,
            /* [retval][out] */ int *__MIDL__ITello0043);
        
        HRESULT ( STDMETHODCALLTYPE *GetSpeedValue )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0044);
        
        HRESULT ( STDMETHODCALLTYPE *GetBatteryPercent )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0045);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimeValue )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0046);
        
        HRESULT ( STDMETHODCALLTYPE *GetHeightValue )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0047);
        
        HRESULT ( STDMETHODCALLTYPE *GetTempratureCelciusDegree )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0048);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttitudeValue )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0049);
        
        HRESULT ( STDMETHODCALLTYPE *GetBarometerValue )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0050);
        
        HRESULT ( STDMETHODCALLTYPE *GetAccelerationValue )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0051);
        
        HRESULT ( STDMETHODCALLTYPE *GetTOF )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0052);
        
        HRESULT ( STDMETHODCALLTYPE *GetWifiSNR )( 
            ITello * This,
            /* [retval][out] */ int *__MIDL__ITello0053);
        
        END_INTERFACE
    } ITelloVtbl;

    interface ITello
    {
        CONST_VTBL struct ITelloVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITello_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITello_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITello_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITello_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITello_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITello_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITello_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITello_EnterCommandMode(This,__MIDL__ITello0000)	\
    ( (This)->lpVtbl -> EnterCommandMode(This,__MIDL__ITello0000) ) 

#define ITello_Takeoff(This,__MIDL__ITello0001)	\
    ( (This)->lpVtbl -> Takeoff(This,__MIDL__ITello0001) ) 

#define ITello_Land(This,__MIDL__ITello0002)	\
    ( (This)->lpVtbl -> Land(This,__MIDL__ITello0002) ) 

#define ITello_StreamOn(This,__MIDL__ITello0003)	\
    ( (This)->lpVtbl -> StreamOn(This,__MIDL__ITello0003) ) 

#define ITello_StreamOff(This,__MIDL__ITello0004)	\
    ( (This)->lpVtbl -> StreamOff(This,__MIDL__ITello0004) ) 

#define ITello_EmergencyShutdown(This,__MIDL__ITello0005)	\
    ( (This)->lpVtbl -> EmergencyShutdown(This,__MIDL__ITello0005) ) 

#define ITello_FlyUp(This,__MIDL__ITello0006,__MIDL__ITello0007)	\
    ( (This)->lpVtbl -> FlyUp(This,__MIDL__ITello0006,__MIDL__ITello0007) ) 

#define ITello_FlyDown(This,__MIDL__ITello0008,__MIDL__ITello0009)	\
    ( (This)->lpVtbl -> FlyDown(This,__MIDL__ITello0008,__MIDL__ITello0009) ) 

#define ITello_FlyLeft(This,__MIDL__ITello0010,__MIDL__ITello0011)	\
    ( (This)->lpVtbl -> FlyLeft(This,__MIDL__ITello0010,__MIDL__ITello0011) ) 

#define ITello_FlyRight(This,__MIDL__ITello0012,__MIDL__ITello0013)	\
    ( (This)->lpVtbl -> FlyRight(This,__MIDL__ITello0012,__MIDL__ITello0013) ) 

#define ITello_FlyForward(This,__MIDL__ITello0014,__MIDL__ITello0015)	\
    ( (This)->lpVtbl -> FlyForward(This,__MIDL__ITello0014,__MIDL__ITello0015) ) 

#define ITello_FlyBack(This,__MIDL__ITello0016,__MIDL__ITello0017)	\
    ( (This)->lpVtbl -> FlyBack(This,__MIDL__ITello0016,__MIDL__ITello0017) ) 

#define ITello_FlyClockWise(This,__MIDL__ITello0018,__MIDL__ITello0019)	\
    ( (This)->lpVtbl -> FlyClockWise(This,__MIDL__ITello0018,__MIDL__ITello0019) ) 

#define ITello_FlyCounterClockWise(This,__MIDL__ITello0020,__MIDL__ITello0021)	\
    ( (This)->lpVtbl -> FlyCounterClockWise(This,__MIDL__ITello0020,__MIDL__ITello0021) ) 

#define ITello_FlyFlip(This,__MIDL__ITello0022,__MIDL__ITello0023)	\
    ( (This)->lpVtbl -> FlyFlip(This,__MIDL__ITello0022,__MIDL__ITello0023) ) 

#define ITello_GoTo(This,__MIDL__ITello0024,__MIDL__ITello0025,__MIDL__ITello0026,__MIDL__ITello0027,__MIDL__ITello0028)	\
    ( (This)->lpVtbl -> GoTo(This,__MIDL__ITello0024,__MIDL__ITello0025,__MIDL__ITello0026,__MIDL__ITello0027,__MIDL__ITello0028) ) 

#define ITello_FlyInCurve(This,__MIDL__ITello0029,__MIDL__ITello0030,__MIDL__ITello0031,__MIDL__ITello0032,__MIDL__ITello0033,__MIDL__ITello0034,__MIDL__ITello0035,__MIDL__ITello0036)	\
    ( (This)->lpVtbl -> FlyInCurve(This,__MIDL__ITello0029,__MIDL__ITello0030,__MIDL__ITello0031,__MIDL__ITello0032,__MIDL__ITello0033,__MIDL__ITello0034,__MIDL__ITello0035,__MIDL__ITello0036) ) 

#define ITello_SetSpeed(This,__MIDL__ITello0037,__MIDL__ITello0038)	\
    ( (This)->lpVtbl -> SetSpeed(This,__MIDL__ITello0037,__MIDL__ITello0038) ) 

#define ITello_SendRcControlviaFourChannels(This,__MIDL__ITello0039,__MIDL__ITello0040,__MIDL__ITello0041,__MIDL__ITello0042,__MIDL__ITello0043)	\
    ( (This)->lpVtbl -> SendRcControlviaFourChannels(This,__MIDL__ITello0039,__MIDL__ITello0040,__MIDL__ITello0041,__MIDL__ITello0042,__MIDL__ITello0043) ) 

#define ITello_GetSpeedValue(This,__MIDL__ITello0044)	\
    ( (This)->lpVtbl -> GetSpeedValue(This,__MIDL__ITello0044) ) 

#define ITello_GetBatteryPercent(This,__MIDL__ITello0045)	\
    ( (This)->lpVtbl -> GetBatteryPercent(This,__MIDL__ITello0045) ) 

#define ITello_GetTimeValue(This,__MIDL__ITello0046)	\
    ( (This)->lpVtbl -> GetTimeValue(This,__MIDL__ITello0046) ) 

#define ITello_GetHeightValue(This,__MIDL__ITello0047)	\
    ( (This)->lpVtbl -> GetHeightValue(This,__MIDL__ITello0047) ) 

#define ITello_GetTempratureCelciusDegree(This,__MIDL__ITello0048)	\
    ( (This)->lpVtbl -> GetTempratureCelciusDegree(This,__MIDL__ITello0048) ) 

#define ITello_GetAttitudeValue(This,__MIDL__ITello0049)	\
    ( (This)->lpVtbl -> GetAttitudeValue(This,__MIDL__ITello0049) ) 

#define ITello_GetBarometerValue(This,__MIDL__ITello0050)	\
    ( (This)->lpVtbl -> GetBarometerValue(This,__MIDL__ITello0050) ) 

#define ITello_GetAccelerationValue(This,__MIDL__ITello0051)	\
    ( (This)->lpVtbl -> GetAccelerationValue(This,__MIDL__ITello0051) ) 

#define ITello_GetTOF(This,__MIDL__ITello0052)	\
    ( (This)->lpVtbl -> GetTOF(This,__MIDL__ITello0052) ) 

#define ITello_GetWifiSNR(This,__MIDL__ITello0053)	\
    ( (This)->lpVtbl -> GetWifiSNR(This,__MIDL__ITello0053) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITello_INTERFACE_DEFINED__ */



#ifndef __TelloServerTypeLib_LIBRARY_DEFINED__
#define __TelloServerTypeLib_LIBRARY_DEFINED__

/* library TelloServerTypeLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_TelloServerTypeLib;

EXTERN_C const CLSID CLSID_CTello;

#ifdef __cplusplus

class DECLSPEC_UUID("35EF76EC-BEF8-4551-91A3-2A9E1DA2F12A")
CTello;
#endif
#endif /* __TelloServerTypeLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


