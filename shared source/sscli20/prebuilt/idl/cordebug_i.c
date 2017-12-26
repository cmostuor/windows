// ==++==
//
//   
//    Copyright (c) 2006 Microsoft Corporation.  All rights reserved.
//   
//    The use and distribution terms for this software are contained in the file
//    named license.txt, which can be found in the root of this distribution.
//    By using this software in any fashion, you are agreeing to be bound by the
//    terms of this license.
//   
//    You must not remove this notice, or any other, from this software.
//   
//
// ==--==


/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0366 */
//@@MIDL_FILE_HEADING(  )

#ifdef _MSC_VER
#pragma warning( disable: 4049 )  /* more than 64k source lines */
#endif


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ICorDebugManagedCallback,0x3d6f5f60,0x7538,0x11d3,0x8d,0x5b,0x00,0x10,0x4b,0x35,0xe7,0xef);


MIDL_DEFINE_GUID(IID, IID_ICorDebugManagedCallback2,0x250E5EEA,0xDB5C,0x4C76,0xB6,0xF3,0x8C,0x46,0xF1,0x2E,0x32,0x03);


MIDL_DEFINE_GUID(IID, IID_ICorDebugUnmanagedCallback,0x5263E909,0x8CB5,0x11d3,0xBD,0x2F,0x00,0x00,0xF8,0x08,0x49,0xBD);


MIDL_DEFINE_GUID(IID, IID_ICorDebug,0x3d6f5f61,0x7538,0x11d3,0x8d,0x5b,0x00,0x10,0x4b,0x35,0xe7,0xef);


MIDL_DEFINE_GUID(IID, IID_ICorDebug2,0xECCCCF2E,0xB286,0x4b3e,0xA9,0x83,0x86,0x0A,0x87,0x93,0xD1,0x05);


MIDL_DEFINE_GUID(IID, IID_ICorDebugController,0x3d6f5f62,0x7538,0x11d3,0x8d,0x5b,0x00,0x10,0x4b,0x35,0xe7,0xef);


MIDL_DEFINE_GUID(IID, IID_ICorDebugAppDomain,0x3d6f5f63,0x7538,0x11d3,0x8d,0x5b,0x00,0x10,0x4b,0x35,0xe7,0xef);


MIDL_DEFINE_GUID(IID, IID_ICorDebugAppDomain2,0x096E81D5,0xECDA,0x4202,0x83,0xF5,0xC6,0x59,0x80,0xA9,0xEF,0x75);


MIDL_DEFINE_GUID(IID, IID_ICorDebugAssembly,0xdf59507c,0xd47a,0x459e,0xbc,0xe2,0x64,0x27,0xea,0xc8,0xfd,0x06);


MIDL_DEFINE_GUID(IID, IID_ICorDebugAssembly2,0x426d1f9e,0x6dd4,0x44c8,0xae,0xc7,0x26,0xcd,0xba,0xf4,0xe3,0x98);


MIDL_DEFINE_GUID(IID, IID_ICorDebugProcess,0x3d6f5f64,0x7538,0x11d3,0x8d,0x5b,0x00,0x10,0x4b,0x35,0xe7,0xef);


MIDL_DEFINE_GUID(IID, IID_ICorDebugProcess2,0xAD1B3588,0x0EF0,0x4744,0xA4,0x96,0xAA,0x09,0xA9,0xF8,0x03,0x71);


MIDL_DEFINE_GUID(IID, IID_ICorDebugBreakpoint,0xCC7BCAE8,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugFunctionBreakpoint,0xCC7BCAE9,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugModuleBreakpoint,0xCC7BCAEA,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugValueBreakpoint,0xCC7BCAEB,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugStepper,0xCC7BCAEC,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugStepper2,0xC5B6E9C3,0xE7D1,0x4a8e,0x87,0x3B,0x7F,0x04,0x7F,0x07,0x06,0xF7);


MIDL_DEFINE_GUID(IID, IID_ICorDebugRegisterSet,0xCC7BCB0B,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugRegisterSet2,0x6DC7BA3F,0x89BA,0x4459,0x9E,0xC1,0x9D,0x60,0x93,0x7B,0x46,0x8D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugThread,0x938c6d66,0x7fb6,0x4f69,0xb3,0x89,0x42,0x5b,0x89,0x87,0x32,0x9b);


MIDL_DEFINE_GUID(IID, IID_ICorDebugThread2,0x2BD956D9,0x7B07,0x4bef,0x8A,0x98,0x12,0xAA,0x86,0x24,0x17,0xC5);


MIDL_DEFINE_GUID(IID, IID_ICorDebugChain,0xCC7BCAEE,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugFrame,0xCC7BCAEF,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugInternalFrame,0xB92CC7F7,0x9D2D,0x45c4,0xBC,0x2B,0x62,0x1F,0xCC,0x9D,0xFB,0xF4);


MIDL_DEFINE_GUID(IID, IID_ICorDebugILFrame,0x03E26311,0x4F76,0x11d3,0x88,0xC6,0x00,0x60,0x97,0x94,0x54,0x18);


MIDL_DEFINE_GUID(IID, IID_ICorDebugILFrame2,0x5D88A994,0x6C30,0x479b,0x89,0x0F,0xBC,0xEF,0x88,0xB1,0x29,0xA5);


MIDL_DEFINE_GUID(IID, IID_ICorDebugNativeFrame,0x03E26314,0x4F76,0x11d3,0x88,0xC6,0x00,0x60,0x97,0x94,0x54,0x18);


MIDL_DEFINE_GUID(IID, IID_ICorDebugModule,0xdba2d8c1,0xe5c5,0x4069,0x8c,0x13,0x10,0xa7,0xc6,0xab,0xf4,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICorDebugModule2,0x7FCC5FB5,0x49C0,0x41de,0x99,0x38,0x3B,0x88,0xB5,0xB9,0xAD,0xD7);


MIDL_DEFINE_GUID(IID, IID_ICorDebugFunction,0xCC7BCAF3,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugFunction2,0xEF0C490B,0x94C3,0x4e4d,0xB6,0x29,0xDD,0xC1,0x34,0xC5,0x32,0xD8);


MIDL_DEFINE_GUID(IID, IID_ICorDebugCode,0xCC7BCAF4,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugCode2,0x5F696509,0x452F,0x4436,0xA3,0xFE,0x4D,0x11,0xFE,0x7E,0x23,0x47);


MIDL_DEFINE_GUID(IID, IID_ICorDebugClass,0xCC7BCAF5,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugClass2,0xB008EA8D,0x7AB1,0x43f7,0xBB,0x20,0xFB,0xB5,0xA0,0x40,0x38,0xAE);


MIDL_DEFINE_GUID(IID, IID_ICorDebugEval,0xCC7BCAF6,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugEval2,0xFB0D9CE7,0xBE66,0x4683,0x9D,0x32,0xA4,0x2A,0x04,0xE2,0xFD,0x91);


MIDL_DEFINE_GUID(IID, IID_ICorDebugValue,0xCC7BCAF7,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugValue2,0x5E0B54E7,0xD88A,0x4626,0x94,0x20,0xA6,0x91,0xE0,0xA7,0x8B,0x49);


MIDL_DEFINE_GUID(IID, IID_ICorDebugGenericValue,0xCC7BCAF8,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugReferenceValue,0xCC7BCAF9,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugHeapValue,0xCC7BCAFA,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugHeapValue2,0xE3AC4D6C,0x9CB7,0x43e6,0x96,0xCC,0xB2,0x15,0x40,0xE5,0x08,0x3C);


MIDL_DEFINE_GUID(IID, IID_ICorDebugObjectValue,0x18AD3D6E,0xB7D2,0x11d2,0xBD,0x04,0x00,0x00,0xF8,0x08,0x49,0xBD);


MIDL_DEFINE_GUID(IID, IID_ICorDebugObjectValue2,0x49E4A320,0x4A9B,0x4eca,0xB1,0x05,0x22,0x9F,0xB7,0xD5,0x00,0x9F);


MIDL_DEFINE_GUID(IID, IID_ICorDebugBoxValue,0xCC7BCAFC,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugStringValue,0xCC7BCAFD,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugArrayValue,0x0405B0DF,0xA660,0x11d2,0xBD,0x02,0x00,0x00,0xF8,0x08,0x49,0xBD);


MIDL_DEFINE_GUID(IID, IID_ICorDebugHandleValue,0x029596E8,0x276B,0x46a1,0x98,0x21,0x73,0x2E,0x96,0xBB,0xB0,0x0B);


MIDL_DEFINE_GUID(IID, IID_ICorDebugContext,0xCC7BCB00,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugEnum,0xCC7BCB01,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugObjectEnum,0xCC7BCB02,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugBreakpointEnum,0xCC7BCB03,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugStepperEnum,0xCC7BCB04,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugProcessEnum,0xCC7BCB05,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugThreadEnum,0xCC7BCB06,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugFrameEnum,0xCC7BCB07,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugChainEnum,0xCC7BCB08,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugModuleEnum,0xCC7BCB09,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugValueEnum,0xCC7BCB0A,0x8A68,0x11d2,0x98,0x3C,0x00,0x00,0xF8,0x08,0x34,0x2D);


MIDL_DEFINE_GUID(IID, IID_ICorDebugCodeEnum,0x55E96461,0x9645,0x45e4,0xA2,0xFF,0x03,0x67,0x87,0x7A,0xBC,0xDE);


MIDL_DEFINE_GUID(IID, IID_ICorDebugTypeEnum,0x10F27499,0x9DF2,0x43ce,0x83,0x33,0xA3,0x21,0xD7,0xC9,0x9C,0xB4);


MIDL_DEFINE_GUID(IID, IID_ICorDebugType,0xD613F0BB,0xACE1,0x4c19,0xBD,0x72,0xE4,0xC0,0x8D,0x5D,0xA7,0xF5);


MIDL_DEFINE_GUID(IID, IID_ICorDebugErrorInfoEnum,0xF0E18809,0x72B5,0x11d2,0x97,0x6F,0x00,0xA0,0xC9,0xB4,0xD5,0x0C);


MIDL_DEFINE_GUID(IID, IID_ICorDebugAppDomainEnum,0x63ca1b24,0x4359,0x4883,0xbd,0x57,0x13,0xf8,0x15,0xf5,0x87,0x44);


MIDL_DEFINE_GUID(IID, IID_ICorDebugAssemblyEnum,0x4a2a1ec9,0x85ec,0x4bfb,0x9f,0x15,0xa8,0x9f,0xdf,0xe0,0xfe,0x83);


MIDL_DEFINE_GUID(IID, IID_ICorDebugMDA,0xCC726F2F,0x1DB7,0x459b,0xB0,0xEC,0x05,0xF0,0x1D,0x84,0x1B,0x42);


MIDL_DEFINE_GUID(IID, IID_ICorDebugEditAndContinueErrorInfo,0x8D600D41,0xF4F6,0x4cb3,0xB7,0xEC,0x7B,0xD1,0x64,0x94,0x40,0x36);


MIDL_DEFINE_GUID(IID, IID_ICorDebugEditAndContinueSnapshot,0x6DC3FA01,0xD7CB,0x11d2,0x8A,0x95,0x00,0x80,0xC7,0x92,0xE5,0xD8);


MIDL_DEFINE_GUID(IID, LIBID_CORDBLib,0x53D13620,0xF417,0x11d1,0x97,0x62,0xA6,0x38,0x26,0xA4,0xF2,0x55);


MIDL_DEFINE_GUID(CLSID, CLSID_CorDebug,0x6fef44d0,0x39e7,0x4c77,0xbe,0x8e,0xc9,0xf8,0xcf,0x98,0x86,0x30);


MIDL_DEFINE_GUID(CLSID, CLSID_EmbeddedCLRCorDebug,0x211f1254,0xbc7e,0x4af5,0xb9,0xaa,0x06,0x73,0x08,0xd8,0x3d,0xd1);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif


