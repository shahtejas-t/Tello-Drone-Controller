

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "AutomationProxyStubHeader.h"

#define TYPE_FORMAT_STRING_SIZE   7                                 
#define PROC_FORMAT_STRING_SIZE   1253                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _AutomationServerTypeLib_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } AutomationServerTypeLib_MIDL_TYPE_FORMAT_STRING;

typedef struct _AutomationServerTypeLib_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } AutomationServerTypeLib_MIDL_PROC_FORMAT_STRING;

typedef struct _AutomationServerTypeLib_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } AutomationServerTypeLib_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const AutomationServerTypeLib_MIDL_TYPE_FORMAT_STRING AutomationServerTypeLib__MIDL_TypeFormatString;
extern const AutomationServerTypeLib_MIDL_PROC_FORMAT_STRING AutomationServerTypeLib__MIDL_ProcFormatString;
extern const AutomationServerTypeLib_MIDL_EXPR_FORMAT_STRING AutomationServerTypeLib__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITello_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITello_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const AutomationServerTypeLib_MIDL_PROC_FORMAT_STRING AutomationServerTypeLib__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure EnterCommandMode */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0000 */

/* 26 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 28 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 30 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Takeoff */

/* 38 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x24 ),	/* 36 */
/* 52 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 54 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0001 */

/* 64 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 66 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 68 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Land */

/* 76 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x9 ),	/* 9 */
/* 84 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x24 ),	/* 36 */
/* 90 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 92 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0002 */

/* 102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StreamOn */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0xa ),	/* 10 */
/* 122 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x24 ),	/* 36 */
/* 128 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 130 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0003 */

/* 140 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 148 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StreamOff */

/* 152 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0xb ),	/* 11 */
/* 160 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x24 ),	/* 36 */
/* 166 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 168 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0004 */

/* 178 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 180 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 186 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EmergencyShutdown */

/* 190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0xc ),	/* 12 */
/* 198 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x24 ),	/* 36 */
/* 204 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 206 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0005 */

/* 216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 218 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FlyUp */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0xd ),	/* 13 */
/* 236 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	NdrFcShort( 0x24 ),	/* 36 */
/* 242 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 244 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0006 */

/* 254 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 256 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0007 */

/* 260 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 262 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 268 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FlyDown */

/* 272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0xe ),	/* 14 */
/* 280 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	NdrFcShort( 0x24 ),	/* 36 */
/* 286 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 288 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0008 */

/* 298 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 300 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0009 */

/* 304 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 306 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 310 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 312 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FlyLeft */

/* 316 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 318 */	NdrFcLong( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0xf ),	/* 15 */
/* 324 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	NdrFcShort( 0x24 ),	/* 36 */
/* 330 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 332 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0010 */

/* 342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0011 */

/* 348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 350 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 354 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 356 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FlyRight */

/* 360 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x10 ),	/* 16 */
/* 368 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 372 */	NdrFcShort( 0x24 ),	/* 36 */
/* 374 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 376 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0012 */

/* 386 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 388 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0013 */

/* 392 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 394 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 400 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FlyForward */

/* 404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x11 ),	/* 17 */
/* 412 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 416 */	NdrFcShort( 0x24 ),	/* 36 */
/* 418 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 420 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0014 */

/* 430 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 432 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0015 */

/* 436 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 438 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 444 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FlyBack */

/* 448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x12 ),	/* 18 */
/* 456 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 460 */	NdrFcShort( 0x24 ),	/* 36 */
/* 462 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 464 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0016 */

/* 474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0017 */

/* 480 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 482 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 488 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FlyClockWise */

/* 492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x13 ),	/* 19 */
/* 500 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 504 */	NdrFcShort( 0x24 ),	/* 36 */
/* 506 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 508 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0018 */

/* 518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 520 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0019 */

/* 524 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 526 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 532 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FlyCounterClockWise */

/* 536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x14 ),	/* 20 */
/* 544 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 548 */	NdrFcShort( 0x24 ),	/* 36 */
/* 550 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 552 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0020 */

/* 562 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0021 */

/* 568 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 570 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 574 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 576 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FlyFlip */

/* 580 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x15 ),	/* 21 */
/* 588 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 590 */	NdrFcShort( 0x5 ),	/* 5 */
/* 592 */	NdrFcShort( 0x24 ),	/* 36 */
/* 594 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 596 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0022 */

/* 606 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 610 */	0x2,		/* FC_CHAR */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0023 */

/* 612 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 614 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 620 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GoTo */

/* 624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x16 ),	/* 22 */
/* 632 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 634 */	NdrFcShort( 0x20 ),	/* 32 */
/* 636 */	NdrFcShort( 0x24 ),	/* 36 */
/* 638 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 640 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0024 */

/* 650 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 652 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0025 */

/* 656 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 658 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0026 */

/* 662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 664 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0027 */

/* 668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 670 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0028 */

/* 674 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 676 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 682 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FlyInCurve */

/* 686 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x17 ),	/* 23 */
/* 694 */	NdrFcShort( 0x50 ),	/* x86 Stack size/offset = 80 */
/* 696 */	NdrFcShort( 0x38 ),	/* 56 */
/* 698 */	NdrFcShort( 0x24 ),	/* 36 */
/* 700 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x9,		/* 9 */
/* 702 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0029 */

/* 712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 714 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0030 */

/* 718 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 720 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0031 */

/* 724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 726 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0032 */

/* 730 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 732 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0033 */

/* 736 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 738 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0034 */

/* 742 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 744 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0035 */

/* 748 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 750 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0036 */

/* 754 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 756 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 762 */	NdrFcShort( 0x48 ),	/* x86 Stack size/offset = 72 */
/* 764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSpeed */

/* 766 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x18 ),	/* 24 */
/* 774 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 778 */	NdrFcShort( 0x24 ),	/* 36 */
/* 780 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 782 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0037 */

/* 792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 794 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0038 */

/* 798 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 800 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 806 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendRcControlviaFourChannels */

/* 810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x19 ),	/* 25 */
/* 818 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 820 */	NdrFcShort( 0x20 ),	/* 32 */
/* 822 */	NdrFcShort( 0x24 ),	/* 36 */
/* 824 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 826 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0039 */

/* 836 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 838 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0040 */

/* 842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 844 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0041 */

/* 848 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 850 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0042 */

/* 854 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 856 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __MIDL__ITello0043 */

/* 860 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 862 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 868 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSpeedValue */

/* 872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x1a ),	/* 26 */
/* 880 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x24 ),	/* 36 */
/* 886 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 888 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0044 */

/* 898 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 900 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 904 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 906 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 908 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBatteryPercent */

/* 910 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x1b ),	/* 27 */
/* 918 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x24 ),	/* 36 */
/* 924 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 926 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0045 */

/* 936 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 938 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 944 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTimeValue */

/* 948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x1c ),	/* 28 */
/* 956 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x24 ),	/* 36 */
/* 962 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 964 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0046 */

/* 974 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 982 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetHeightValue */

/* 986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x1d ),	/* 29 */
/* 994 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1000 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1002 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0047 */

/* 1012 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1014 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1020 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTempratureCelciusDegree */

/* 1024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1032 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1038 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1040 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0048 */

/* 1050 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1058 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAttitudeValue */

/* 1062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1070 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1076 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1078 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0049 */

/* 1088 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1090 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1096 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBarometerValue */

/* 1100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1106 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1108 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1114 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1116 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0050 */

/* 1126 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1132 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1134 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAccelerationValue */

/* 1138 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1146 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1154 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0051 */

/* 1164 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1166 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1172 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTOF */

/* 1176 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1184 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1190 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1192 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0052 */

/* 1202 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1210 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWifiSNR */

/* 1214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1222 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1226 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1228 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1230 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter __MIDL__ITello0053 */

/* 1240 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1242 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1248 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const AutomationServerTypeLib_MIDL_TYPE_FORMAT_STRING AutomationServerTypeLib__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ITello, ver. 0.0,
   GUID={0xF19F090F,0xDB2F,0x45B7,{0xAD,0x2A,0x50,0x63,0x9F,0x17,0x71,0xB1}} */

#pragma code_seg(".orpc")
static const unsigned short ITello_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    38,
    76,
    114,
    152,
    190,
    228,
    272,
    316,
    360,
    404,
    448,
    492,
    536,
    580,
    624,
    686,
    766,
    810,
    872,
    910,
    948,
    986,
    1024,
    1062,
    1100,
    1138,
    1176,
    1214
    };

static const MIDL_STUBLESS_PROXY_INFO ITello_ProxyInfo =
    {
    &Object_StubDesc,
    AutomationServerTypeLib__MIDL_ProcFormatString.Format,
    &ITello_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITello_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AutomationServerTypeLib__MIDL_ProcFormatString.Format,
    &ITello_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(36) _ITelloProxyVtbl = 
{
    &ITello_ProxyInfo,
    &IID_ITello,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITello::EnterCommandMode */ ,
    (void *) (INT_PTR) -1 /* ITello::Takeoff */ ,
    (void *) (INT_PTR) -1 /* ITello::Land */ ,
    (void *) (INT_PTR) -1 /* ITello::StreamOn */ ,
    (void *) (INT_PTR) -1 /* ITello::StreamOff */ ,
    (void *) (INT_PTR) -1 /* ITello::EmergencyShutdown */ ,
    (void *) (INT_PTR) -1 /* ITello::FlyUp */ ,
    (void *) (INT_PTR) -1 /* ITello::FlyDown */ ,
    (void *) (INT_PTR) -1 /* ITello::FlyLeft */ ,
    (void *) (INT_PTR) -1 /* ITello::FlyRight */ ,
    (void *) (INT_PTR) -1 /* ITello::FlyForward */ ,
    (void *) (INT_PTR) -1 /* ITello::FlyBack */ ,
    (void *) (INT_PTR) -1 /* ITello::FlyClockWise */ ,
    (void *) (INT_PTR) -1 /* ITello::FlyCounterClockWise */ ,
    (void *) (INT_PTR) -1 /* ITello::FlyFlip */ ,
    (void *) (INT_PTR) -1 /* ITello::GoTo */ ,
    (void *) (INT_PTR) -1 /* ITello::FlyInCurve */ ,
    (void *) (INT_PTR) -1 /* ITello::SetSpeed */ ,
    (void *) (INT_PTR) -1 /* ITello::SendRcControlviaFourChannels */ ,
    (void *) (INT_PTR) -1 /* ITello::GetSpeedValue */ ,
    (void *) (INT_PTR) -1 /* ITello::GetBatteryPercent */ ,
    (void *) (INT_PTR) -1 /* ITello::GetTimeValue */ ,
    (void *) (INT_PTR) -1 /* ITello::GetHeightValue */ ,
    (void *) (INT_PTR) -1 /* ITello::GetTempratureCelciusDegree */ ,
    (void *) (INT_PTR) -1 /* ITello::GetAttitudeValue */ ,
    (void *) (INT_PTR) -1 /* ITello::GetBarometerValue */ ,
    (void *) (INT_PTR) -1 /* ITello::GetAccelerationValue */ ,
    (void *) (INT_PTR) -1 /* ITello::GetTOF */ ,
    (void *) (INT_PTR) -1 /* ITello::GetWifiSNR */
};


static const PRPC_STUB_FUNCTION ITello_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITelloStubVtbl =
{
    &IID_ITello,
    &ITello_ServerInfo,
    36,
    &ITello_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    AutomationServerTypeLib__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _AutomationServerTypeLib_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ITelloProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _AutomationServerTypeLib_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ITelloStubVtbl,
    0
};

PCInterfaceName const _AutomationServerTypeLib_InterfaceNamesList[] = 
{
    "ITello",
    0
};

const IID *  const _AutomationServerTypeLib_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _AutomationServerTypeLib_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _AutomationServerTypeLib, pIID, n)

int __stdcall _AutomationServerTypeLib_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_AutomationServerTypeLib_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo AutomationServerTypeLib_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _AutomationServerTypeLib_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _AutomationServerTypeLib_StubVtblList,
    (const PCInterfaceName * ) & _AutomationServerTypeLib_InterfaceNamesList,
    (const IID ** ) & _AutomationServerTypeLib_BaseIIDList,
    & _AutomationServerTypeLib_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

