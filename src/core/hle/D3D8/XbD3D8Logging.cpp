// This is an open source non-commercial project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
// ******************************************************************
// *
// *  This file is part of the Cxbx project.
// *
// *  Cxbx and Cxbe are free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Bostom, MA 02111-1307, USA.
// *
// *  (c) 2017 Patrick van Logchem <pvanlogchem@gmail.com>
// *
// *  All rights reserved
// *
// ******************************************************************

#include "Logging.h"
#include "XbD3D8Logging.h"

// prevent name collisions
namespace XTL
{

//
// Host D3D LOGRENDER(Type) implementations
//

ENUM2STR_START(D3DCUBEMAP_FACES)
	ENUM2STR_CASE(D3DCUBEMAP_FACE_POSITIVE_X)
	ENUM2STR_CASE(D3DCUBEMAP_FACE_NEGATIVE_X)
	ENUM2STR_CASE(D3DCUBEMAP_FACE_POSITIVE_Y)
	ENUM2STR_CASE(D3DCUBEMAP_FACE_NEGATIVE_Y)
	ENUM2STR_CASE(D3DCUBEMAP_FACE_POSITIVE_Z)
	ENUM2STR_CASE(D3DCUBEMAP_FACE_NEGATIVE_Z)
ENUM2STR_END_and_LOGRENDER(D3DCUBEMAP_FACES)

ENUM2STR_START(D3DFORMAT)
	ENUM2STR_CASE(D3DFMT_UNKNOWN) // = 0,
	ENUM2STR_CASE(D3DFMT_R8G8B8) // = 20,
	ENUM2STR_CASE(D3DFMT_A8R8G8B8) // = 21,
	ENUM2STR_CASE(D3DFMT_X8R8G8B8) // = 22,
	ENUM2STR_CASE(D3DFMT_R5G6B5) // = 23,
	ENUM2STR_CASE(D3DFMT_X1R5G5B5) // = 24,
	ENUM2STR_CASE(D3DFMT_A1R5G5B5) // = 25,
	ENUM2STR_CASE(D3DFMT_A4R4G4B4) // = 26,
	ENUM2STR_CASE(D3DFMT_R3G3B2) // = 27,
	ENUM2STR_CASE(D3DFMT_A8) // = 28,
	ENUM2STR_CASE(D3DFMT_A8R3G3B2) // = 29,
	ENUM2STR_CASE(D3DFMT_X4R4G4B4) // = 30,
	ENUM2STR_CASE(D3DFMT_A2B10G10R10) // = 31,
	ENUM2STR_CASE(D3DFMT_A8B8G8R8) // = 32,
	ENUM2STR_CASE(D3DFMT_X8B8G8R8) // = 33,
	ENUM2STR_CASE(D3DFMT_G16R16) // = 34,
	ENUM2STR_CASE(D3DFMT_A2R10G10B10) // = 35,
	ENUM2STR_CASE(D3DFMT_A16B16G16R16) // = 36,
	ENUM2STR_CASE(D3DFMT_A8P8) // = 40,
	ENUM2STR_CASE(D3DFMT_P8) // = 41,
	ENUM2STR_CASE(D3DFMT_L8) // = 50,
	ENUM2STR_CASE(D3DFMT_A8L8) // = 51,
	ENUM2STR_CASE(D3DFMT_A4L4) // = 52,
	ENUM2STR_CASE(D3DFMT_V8U8) // = 60,
	ENUM2STR_CASE(D3DFMT_L6V5U5) // = 61,
	ENUM2STR_CASE(D3DFMT_X8L8V8U8) // = 62,
	ENUM2STR_CASE(D3DFMT_Q8W8V8U8) // = 63,
	ENUM2STR_CASE(D3DFMT_V16U16) // = 64,
	ENUM2STR_CASE(D3DFMT_A2W10V10U10) // = 67,
	ENUM2STR_CASE(D3DFMT_UYVY) // = MAKEFOURCC('U', 'Y', 'V', 'Y'),
	ENUM2STR_CASE(D3DFMT_R8G8_B8G8) // = MAKEFOURCC('R', 'G', 'B', 'G'),
	ENUM2STR_CASE(D3DFMT_YUY2) // = MAKEFOURCC('Y', 'U', 'Y', '2'),
	ENUM2STR_CASE(D3DFMT_G8R8_G8B8) // = MAKEFOURCC('G', 'R', 'G', 'B'),
	ENUM2STR_CASE(D3DFMT_DXT1) // = MAKEFOURCC('D', 'X', 'T', '1'),
	ENUM2STR_CASE(D3DFMT_DXT2) // = MAKEFOURCC('D', 'X', 'T', '2'),
	ENUM2STR_CASE(D3DFMT_DXT3) // = MAKEFOURCC('D', 'X', 'T', '3'),
	ENUM2STR_CASE(D3DFMT_DXT4) // = MAKEFOURCC('D', 'X', 'T', '4'),
	ENUM2STR_CASE(D3DFMT_DXT5) // = MAKEFOURCC('D', 'X', 'T', '5'),
	ENUM2STR_CASE(D3DFMT_D16_LOCKABLE) // = 70,
	ENUM2STR_CASE(D3DFMT_D32) // = 71,
	ENUM2STR_CASE(D3DFMT_D15S1) // = 73,
	ENUM2STR_CASE(D3DFMT_D24S8) // = 75,
	ENUM2STR_CASE(D3DFMT_D24X8) // = 77,
	ENUM2STR_CASE(D3DFMT_D24X4S4) // = 79,
	ENUM2STR_CASE(D3DFMT_D16) // = 80,
	ENUM2STR_CASE(D3DFMT_D32F_LOCKABLE) // = 82,
	ENUM2STR_CASE(D3DFMT_D24FS8) // = 83,
  #if !defined(D3D_DISABLE_9EX)
	ENUM2STR_CASE(D3DFMT_D32_LOCKABLE) // = 84,
	ENUM2STR_CASE(D3DFMT_S8_LOCKABLE) // = 85,
  #endif // !D3D_DISABLE_9EX
	ENUM2STR_CASE(D3DFMT_L16) // = 81,
	ENUM2STR_CASE(D3DFMT_VERTEXDATA) // = 100,
	ENUM2STR_CASE(D3DFMT_INDEX16) // = 101,
	ENUM2STR_CASE(D3DFMT_INDEX32) // = 102,
	ENUM2STR_CASE(D3DFMT_Q16W16V16U16) // = 110,
	ENUM2STR_CASE(D3DFMT_MULTI2_ARGB8) // = MAKEFOURCC('M', 'E', 'T', '1'),
	ENUM2STR_CASE(D3DFMT_R16F) // = 111,
	ENUM2STR_CASE(D3DFMT_G16R16F) // = 112,
	ENUM2STR_CASE(D3DFMT_A16B16G16R16F) // = 113,
	ENUM2STR_CASE(D3DFMT_R32F) // = 114,
	ENUM2STR_CASE(D3DFMT_G32R32F) // = 115,
	ENUM2STR_CASE(D3DFMT_A32B32G32R32F) // = 116,
	ENUM2STR_CASE(D3DFMT_CxV8U8) // = 117,
  #if !defined(D3D_DISABLE_9EX)
	ENUM2STR_CASE(D3DFMT_A1) // = 118,
	ENUM2STR_CASE(D3DFMT_A2B10G10R10_XR_BIAS) // = 119,
	ENUM2STR_CASE(D3DFMT_BINARYBUFFER) // = 199,
  #endif // !D3D_DISABLE_9EX
ENUM2STR_END_and_LOGRENDER(D3DFORMAT)

ENUM2STR_START(D3DPOOL)
	ENUM2STR_CASE(D3DPOOL_DEFAULT)
	ENUM2STR_CASE(D3DPOOL_MANAGED)
	ENUM2STR_CASE(D3DPOOL_SYSTEMMEM)
ENUM2STR_END_and_LOGRENDER(D3DPOOL)


//
// Host D3D LOGRENDER(Type) implementations
//

LOGRENDER(D3DVSHADERCAPS2_0)
{
	return os
		LOGRENDER_MEMBER_TYPE(D3DVS20CAPS, Caps)
		LOGRENDER_MEMBER(DynamicFlowControlDepth)
		LOGRENDER_MEMBER(NumTemps)
		LOGRENDER_MEMBER(StaticFlowControlDepth);
}

FLAGS2STR_START(D3DVS20CAPS)
	FLAG2STR(D3DVS20CAPS_PREDICATION)
FLAGS2STR_END_and_LOGRENDER(D3DVS20CAPS)

LOGRENDER(D3DPSHADERCAPS2_0)
{
	return os
		LOGRENDER_MEMBER_TYPE(D3DPS20CAPS, Caps)
		LOGRENDER_MEMBER(DynamicFlowControlDepth)
		LOGRENDER_MEMBER(NumTemps)
		LOGRENDER_MEMBER(StaticFlowControlDepth)
		LOGRENDER_MEMBER(NumInstructionSlots);
}

FLAGS2STR_START(D3DPS20CAPS)
	FLAG2STR(D3DPS20CAPS_ARBITRARYSWIZZLE)
	FLAG2STR(D3DPS20CAPS_GRADIENTINSTRUCTIONS)
	FLAG2STR(D3DPS20CAPS_PREDICATION)
	FLAG2STR(D3DPS20CAPS_NODEPENDENTREADLIMIT)
	FLAG2STR(D3DPS20CAPS_NOTEXINSTRUCTIONLIMIT)
FLAGS2STR_END_and_LOGRENDER(D3DPS20CAPS)

ENUM2STR_START(D3DDEVTYPE)
	ENUM2STR_CASE(D3DDEVTYPE_REF)
	ENUM2STR_CASE(D3DDEVTYPE_SW)
	ENUM2STR_CASE(D3DDEVTYPE_HAL)
	ENUM2STR_CASE(D3DDEVTYPE_NULLREF)
ENUM2STR_END_and_LOGRENDER(D3DDEVTYPE)

// Caps
FLAGS2STR_START(_D3DCAPS)
	FLAG2STR(D3DCAPS_OVERLAY)
	FLAG2STR(D3DCAPS_READ_SCANLINE)
FLAGS2STR_END_and_LOGRENDER(_D3DCAPS)

// Caps2
FLAGS2STR_START(D3DCAPS2)
	FLAG2STR(D3DCAPS2_FULLSCREENGAMMA)
	FLAG2STR(D3DCAPS2_CANCALIBRATEGAMMA)
	FLAG2STR(D3DCAPS2_RESERVED)
	FLAG2STR(D3DCAPS2_CANMANAGERESOURCE)
	FLAG2STR(D3DCAPS2_DYNAMICTEXTURES)
	FLAG2STR(D3DCAPS2_CANAUTOGENMIPMAP)
  #if !defined(D3D_DISABLE_9EX)
	FLAG2STR(D3DCAPS2_CANSHARERESOURCE)
  #endif // !D3D_DISABLE_9EX
FLAGS2STR_END_and_LOGRENDER(D3DCAPS2)

// Caps3
FLAGS2STR_START(D3DCAPS3)
	FLAG2STR(D3DCAPS3_RESERVED)
	FLAG2STR(D3DCAPS3_ALPHA_FULLSCREEN_FLIP_OR_DISCARD)
	FLAG2STR(D3DCAPS3_LINEAR_TO_SRGB_PRESENTATION)
	FLAG2STR(D3DCAPS3_COPY_TO_VIDMEM)
	FLAG2STR(D3DCAPS3_COPY_TO_SYSTEMMEM)
	FLAG2STR(D3DCAPS3_DXVAHD)
	FLAG2STR(D3DCAPS3_DXVAHD_LIMITED)
FLAGS2STR_END_and_LOGRENDER(D3DCAPS3)

// PresentationIntervals
FLAGS2STR_START(D3DPRESENT_INTERVAL)
	FLAG2STR(D3DPRESENT_INTERVAL_DEFAULT)
	FLAG2STR(D3DPRESENT_INTERVAL_ONE)
	FLAG2STR(D3DPRESENT_INTERVAL_TWO)
	FLAG2STR(D3DPRESENT_INTERVAL_THREE)
	FLAG2STR(D3DPRESENT_INTERVAL_FOUR)
	FLAG2STR(D3DPRESENT_INTERVAL_IMMEDIATE)
FLAGS2STR_END_and_LOGRENDER(D3DPRESENT_INTERVAL)

// CursorCaps
FLAGS2STR_START(D3DCURSORCAPS)
	FLAG2STR(D3DCURSORCAPS_COLOR)
	FLAG2STR(D3DCURSORCAPS_LOWRES)
FLAGS2STR_END_and_LOGRENDER(D3DCURSORCAPS)

// DevCaps
FLAGS2STR_START(D3DDEVCAPS)
	FLAG2STR(D3DDEVCAPS_EXECUTESYSTEMMEMORY)
	FLAG2STR(D3DDEVCAPS_EXECUTEVIDEOMEMORY)
	FLAG2STR(D3DDEVCAPS_TLVERTEXSYSTEMMEMORY)
	FLAG2STR(D3DDEVCAPS_TLVERTEXVIDEOMEMORY)
	FLAG2STR(D3DDEVCAPS_TEXTURESYSTEMMEMORY)
	FLAG2STR(D3DDEVCAPS_TEXTUREVIDEOMEMORY)
	FLAG2STR(D3DDEVCAPS_DRAWPRIMTLVERTEX)
	FLAG2STR(D3DDEVCAPS_CANRENDERAFTERFLIP)
	FLAG2STR(D3DDEVCAPS_TEXTURENONLOCALVIDMEM)
	FLAG2STR(D3DDEVCAPS_DRAWPRIMITIVES2)
	FLAG2STR(D3DDEVCAPS_SEPARATETEXTUREMEMORIES)
	FLAG2STR(D3DDEVCAPS_DRAWPRIMITIVES2EX)
	FLAG2STR(D3DDEVCAPS_HWTRANSFORMANDLIGHT)
	FLAG2STR(D3DDEVCAPS_CANBLTSYSTONONLOCAL)
	FLAG2STR(D3DDEVCAPS_HWRASTERIZATION)
	FLAG2STR(D3DDEVCAPS_PUREDEVICE)
	FLAG2STR(D3DDEVCAPS_QUINTICRTPATCHES)
	FLAG2STR(D3DDEVCAPS_RTPATCHES)
	FLAG2STR(D3DDEVCAPS_RTPATCHHANDLEZERO)
	FLAG2STR(D3DDEVCAPS_NPATCHES)
FLAGS2STR_END_and_LOGRENDER(D3DDEVCAPS)

// PrimitiveMiscCaps
FLAGS2STR_START(D3DPMISCCAPS)
	FLAG2STR(D3DPMISCCAPS_MASKZ)
	FLAG2STR(D3DPMISCCAPS_CULLNONE)
	FLAG2STR(D3DPMISCCAPS_CULLCW)
	FLAG2STR(D3DPMISCCAPS_CULLCCW)
	FLAG2STR(D3DPMISCCAPS_COLORWRITEENABLE)
	FLAG2STR(D3DPMISCCAPS_CLIPPLANESCALEDPOINTS)
	FLAG2STR(D3DPMISCCAPS_CLIPTLVERTS)
	FLAG2STR(D3DPMISCCAPS_TSSARGTEMP)
	FLAG2STR(D3DPMISCCAPS_BLENDOP)
	FLAG2STR(D3DPMISCCAPS_NULLREFERENCE)
	FLAG2STR(D3DPMISCCAPS_INDEPENDENTWRITEMASKS)
	FLAG2STR(D3DPMISCCAPS_PERSTAGECONSTANT)
	FLAG2STR(D3DPMISCCAPS_FOGANDSPECULARALPHA)
	FLAG2STR(D3DPMISCCAPS_SEPARATEALPHABLEND)
	FLAG2STR(D3DPMISCCAPS_MRTINDEPENDENTBITDEPTHS)
	FLAG2STR(D3DPMISCCAPS_MRTPOSTPIXELSHADERBLENDING)
	FLAG2STR(D3DPMISCCAPS_FOGVERTEXCLAMPED)
  #if !defined(D3D_DISABLE_9EX)
	FLAG2STR(D3DPMISCCAPS_POSTBLENDSRGBCONVERT)
  #endif // !D3D_DISABLE_9EX
FLAGS2STR_END_and_LOGRENDER(D3DPMISCCAPS)

// LineCaps
FLAGS2STR_START(D3DLINECAPS)
	FLAG2STR(D3DLINECAPS_TEXTURE)
	FLAG2STR(D3DLINECAPS_ZTEST)
	FLAG2STR(D3DLINECAPS_BLEND)
	FLAG2STR(D3DLINECAPS_ALPHACMP)
	FLAG2STR(D3DLINECAPS_FOG)
	FLAG2STR(D3DLINECAPS_ANTIALIAS)
FLAGS2STR_END_and_LOGRENDER(D3DLINECAPS)

// RasterCaps
FLAGS2STR_START(D3DPRASTERCAPS)
	FLAG2STR(D3DPRASTERCAPS_DITHER)
	FLAG2STR(D3DPRASTERCAPS_ZTEST)
	FLAG2STR(D3DPRASTERCAPS_FOGVERTEX)
	FLAG2STR(D3DPRASTERCAPS_FOGTABLE)
	FLAG2STR(D3DPRASTERCAPS_MIPMAPLODBIAS)
	FLAG2STR(D3DPRASTERCAPS_ZBUFFERLESSHSR)
	FLAG2STR(D3DPRASTERCAPS_FOGRANGE)
	FLAG2STR(D3DPRASTERCAPS_ANISOTROPY)
	FLAG2STR(D3DPRASTERCAPS_WBUFFER)
	FLAG2STR(D3DPRASTERCAPS_WFOG)
	FLAG2STR(D3DPRASTERCAPS_ZFOG)
	FLAG2STR(D3DPRASTERCAPS_COLORPERSPECTIVE)
	FLAG2STR(D3DPRASTERCAPS_SCISSORTEST)
	FLAG2STR(D3DPRASTERCAPS_SLOPESCALEDEPTHBIAS)
	FLAG2STR(D3DPRASTERCAPS_DEPTHBIAS)
	FLAG2STR(D3DPRASTERCAPS_MULTISAMPLE_TOGGLE)
FLAGS2STR_END_and_LOGRENDER(D3DPRASTERCAPS)

// ZCmpCaps, AlphaCmpCaps
FLAGS2STR_START(D3DPCMPCAPS)
	FLAG2STR(D3DPCMPCAPS_NEVER)
	FLAG2STR(D3DPCMPCAPS_LESS)
	FLAG2STR(D3DPCMPCAPS_EQUAL)
	FLAG2STR(D3DPCMPCAPS_LESSEQUAL)
	FLAG2STR(D3DPCMPCAPS_GREATER)
	FLAG2STR(D3DPCMPCAPS_NOTEQUAL)
	FLAG2STR(D3DPCMPCAPS_GREATEREQUAL)
	FLAG2STR(D3DPCMPCAPS_ALWAYS)
FLAGS2STR_END_and_LOGRENDER(D3DPCMPCAPS)

// SourceBlendCaps, DestBlendCaps
FLAGS2STR_START(D3DPBLENDCAPS)
	FLAG2STR(D3DPBLENDCAPS_ZERO)
	FLAG2STR(D3DPBLENDCAPS_ONE)
	FLAG2STR(D3DPBLENDCAPS_SRCCOLOR)
	FLAG2STR(D3DPBLENDCAPS_INVSRCCOLOR)
	FLAG2STR(D3DPBLENDCAPS_SRCALPHA)
	FLAG2STR(D3DPBLENDCAPS_INVSRCALPHA)
	FLAG2STR(D3DPBLENDCAPS_DESTALPHA)
	FLAG2STR(D3DPBLENDCAPS_INVDESTALPHA)
	FLAG2STR(D3DPBLENDCAPS_DESTCOLOR)
	FLAG2STR(D3DPBLENDCAPS_INVDESTCOLOR)
	FLAG2STR(D3DPBLENDCAPS_SRCALPHASAT)
	FLAG2STR(D3DPBLENDCAPS_BOTHSRCALPHA)
	FLAG2STR(D3DPBLENDCAPS_BOTHINVSRCALPHA)
	FLAG2STR(D3DPBLENDCAPS_BLENDFACTOR)
  #if !defined(D3D_DISABLE_9EX)
	FLAG2STR(D3DPBLENDCAPS_SRCCOLOR2)
	FLAG2STR(D3DPBLENDCAPS_INVSRCCOLOR2)
  #endif // !D3D_DISABLE_9EX
FLAGS2STR_END_and_LOGRENDER(D3DPBLENDCAPS)

// ShadeCaps
FLAGS2STR_START(D3DPSHADECAPS)
	FLAG2STR(D3DPSHADECAPS_COLORGOURAUDRGB)
	FLAG2STR(D3DPSHADECAPS_SPECULARGOURAUDRGB)
	FLAG2STR(D3DPSHADECAPS_ALPHAGOURAUDBLEND)
	FLAG2STR(D3DPSHADECAPS_FOGGOURAUD)
FLAGS2STR_END_and_LOGRENDER(D3DPSHADECAPS)

// TextureCaps
FLAGS2STR_START(D3DPTEXTURECAPS)
	FLAG2STR(D3DPTEXTURECAPS_PERSPECTIVE)
	FLAG2STR(D3DPTEXTURECAPS_POW2)
	FLAG2STR(D3DPTEXTURECAPS_ALPHA)
	FLAG2STR(D3DPTEXTURECAPS_SQUAREONLY)
	FLAG2STR(D3DPTEXTURECAPS_TEXREPEATNOTSCALEDBYSIZE)
	FLAG2STR(D3DPTEXTURECAPS_ALPHAPALETTE)
	FLAG2STR(D3DPTEXTURECAPS_NONPOW2CONDITIONAL)
	FLAG2STR(D3DPTEXTURECAPS_PROJECTED)
	FLAG2STR(D3DPTEXTURECAPS_CUBEMAP)
	FLAG2STR(D3DPTEXTURECAPS_VOLUMEMAP)
	FLAG2STR(D3DPTEXTURECAPS_MIPMAP)
	FLAG2STR(D3DPTEXTURECAPS_MIPVOLUMEMAP)
	FLAG2STR(D3DPTEXTURECAPS_MIPCUBEMAP)
	FLAG2STR(D3DPTEXTURECAPS_CUBEMAP_POW2)
	FLAG2STR(D3DPTEXTURECAPS_VOLUMEMAP_POW2)
	FLAG2STR(D3DPTEXTURECAPS_NOPROJECTEDBUMPENV)
FLAGS2STR_END_and_LOGRENDER(D3DPTEXTURECAPS)

// TextureFilterCaps, StretchRectFilterCaps (D3D9)
FLAGS2STR_START(D3DPTFILTERCAPS)
	FLAG2STR(D3DPTFILTERCAPS_MINFPOINT)
	FLAG2STR(D3DPTFILTERCAPS_MINFLINEAR)
	FLAG2STR(D3DPTFILTERCAPS_MINFANISOTROPIC)
	FLAG2STR(D3DPTFILTERCAPS_MINFPYRAMIDALQUAD)
	FLAG2STR(D3DPTFILTERCAPS_MINFGAUSSIANQUAD)
	FLAG2STR(D3DPTFILTERCAPS_MIPFPOINT)
	FLAG2STR(D3DPTFILTERCAPS_MIPFLINEAR)
  #if !defined(D3D_DISABLE_9EX)
	FLAG2STR(D3DPTFILTERCAPS_CONVOLUTIONMONO)
  #endif // !D3D_DISABLE_9EX
	FLAG2STR(D3DPTFILTERCAPS_MAGFPOINT)
	FLAG2STR(D3DPTFILTERCAPS_MAGFLINEAR)
	FLAG2STR(D3DPTFILTERCAPS_MAGFANISOTROPIC)
	FLAG2STR(D3DPTFILTERCAPS_MAGFPYRAMIDALQUAD)
	FLAG2STR(D3DPTFILTERCAPS_MAGFGAUSSIANQUAD)
FLAGS2STR_END_and_LOGRENDER(D3DPTFILTERCAPS)

// TextureAddressCaps
FLAGS2STR_START(D3DPTADDRESSCAPS)
	FLAG2STR(D3DPTADDRESSCAPS_WRAP)
	FLAG2STR(D3DPTADDRESSCAPS_MIRROR)
	FLAG2STR(D3DPTADDRESSCAPS_CLAMP)
	FLAG2STR(D3DPTADDRESSCAPS_BORDER)
	FLAG2STR(D3DPTADDRESSCAPS_INDEPENDENTUV)
	FLAG2STR(D3DPTADDRESSCAPS_MIRRORONCE)
FLAGS2STR_END_and_LOGRENDER(D3DPTADDRESSCAPS)

// StencilCaps
FLAGS2STR_START(D3DSTENCILCAPS)
	FLAG2STR(D3DSTENCILCAPS_KEEP)
	FLAG2STR(D3DSTENCILCAPS_ZERO)
	FLAG2STR(D3DSTENCILCAPS_REPLACE)
	FLAG2STR(D3DSTENCILCAPS_INCRSAT)
	FLAG2STR(D3DSTENCILCAPS_DECRSAT)
	FLAG2STR(D3DSTENCILCAPS_INVERT)
	FLAG2STR(D3DSTENCILCAPS_INCR)
	FLAG2STR(D3DSTENCILCAPS_DECR)
	FLAG2STR(D3DSTENCILCAPS_TWOSIDED)
FLAGS2STR_END_and_LOGRENDER(D3DSTENCILCAPS)

// TextureOpCaps
FLAGS2STR_START(D3DTEXOPCAPS)
	FLAG2STR(D3DTEXOPCAPS_DISABLE)
	FLAG2STR(D3DTEXOPCAPS_SELECTARG1)
	FLAG2STR(D3DTEXOPCAPS_SELECTARG2)
	FLAG2STR(D3DTEXOPCAPS_MODULATE)
	FLAG2STR(D3DTEXOPCAPS_MODULATE2X)
	FLAG2STR(D3DTEXOPCAPS_MODULATE4X)
	FLAG2STR(D3DTEXOPCAPS_ADD)
	FLAG2STR(D3DTEXOPCAPS_ADDSIGNED)
	FLAG2STR(D3DTEXOPCAPS_ADDSIGNED2X)
	FLAG2STR(D3DTEXOPCAPS_SUBTRACT)
	FLAG2STR(D3DTEXOPCAPS_ADDSMOOTH)
	FLAG2STR(D3DTEXOPCAPS_BLENDDIFFUSEALPHA)
	FLAG2STR(D3DTEXOPCAPS_BLENDTEXTUREALPHA)
	FLAG2STR(D3DTEXOPCAPS_BLENDFACTORALPHA)
	FLAG2STR(D3DTEXOPCAPS_BLENDTEXTUREALPHAPM)
	FLAG2STR(D3DTEXOPCAPS_BLENDCURRENTALPHA)
	FLAG2STR(D3DTEXOPCAPS_PREMODULATE)
	FLAG2STR(D3DTEXOPCAPS_MODULATEALPHA_ADDCOLOR)
	FLAG2STR(D3DTEXOPCAPS_MODULATECOLOR_ADDALPHA)
	FLAG2STR(D3DTEXOPCAPS_MODULATEINVALPHA_ADDCOLOR)
	FLAG2STR(D3DTEXOPCAPS_MODULATEINVCOLOR_ADDALPHA)
	FLAG2STR(D3DTEXOPCAPS_BUMPENVMAP)
	FLAG2STR(D3DTEXOPCAPS_BUMPENVMAPLUMINANCE)
	FLAG2STR(D3DTEXOPCAPS_DOTPRODUCT3)
	FLAG2STR(D3DTEXOPCAPS_MULTIPLYADD)
	FLAG2STR(D3DTEXOPCAPS_LERP)
FLAGS2STR_END_and_LOGRENDER(D3DTEXOPCAPS)

// FVFCaps
FLAGS2STR_START(D3DFVFCAPS)
	FLAG2STR_MASK(D3DFVFCAPS_TEXCOORDCOUNTMASK)
	FLAG2STR(D3DFVFCAPS_DONOTSTRIPELEMENTS)
	FLAG2STR(D3DFVFCAPS_PSIZE)
FLAGS2STR_END_and_LOGRENDER(D3DFVFCAPS)

// VertexProcessingCaps
FLAGS2STR_START(D3DVTXPCAPS)
	FLAG2STR(D3DVTXPCAPS_TEXGEN)
	FLAG2STR(D3DVTXPCAPS_MATERIALSOURCE7)
	FLAG2STR(D3DVTXPCAPS_DIRECTIONALLIGHTS)
	FLAG2STR(D3DVTXPCAPS_POSITIONALLIGHTS)
	FLAG2STR(D3DVTXPCAPS_LOCALVIEWER)
	FLAG2STR(D3DVTXPCAPS_TWEENING)
	FLAG2STR(D3DVTXPCAPS_TEXGEN_SPHEREMAP)
	FLAG2STR(D3DVTXPCAPS_NO_TEXGEN_NONLOCALVIEWER)
FLAGS2STR_END_and_LOGRENDER(D3DVTXPCAPS)

// DevCaps2
FLAGS2STR_START(D3DDEVCAPS2)
	FLAG2STR(D3DDEVCAPS2_STREAMOFFSET)
	FLAG2STR(D3DDEVCAPS2_DMAPNPATCH)
	FLAG2STR(D3DDEVCAPS2_ADAPTIVETESSRTPATCH)
	FLAG2STR(D3DDEVCAPS2_ADAPTIVETESSNPATCH)
	FLAG2STR(D3DDEVCAPS2_CAN_STRETCHRECT_FROM_TEXTURES)
	FLAG2STR(D3DDEVCAPS2_PRESAMPLEDDMAPNPATCH)
	FLAG2STR(D3DDEVCAPS2_VERTEXELEMENTSCANSHARESTREAMOFFSET)
FLAGS2STR_END_and_LOGRENDER(D3DDEVCAPS2)

// DeclTypes
FLAGS2STR_START(D3DDTCAPS)
	FLAG2STR(D3DDTCAPS_UBYTE4)
	FLAG2STR(D3DDTCAPS_UBYTE4N)
	FLAG2STR(D3DDTCAPS_SHORT2N)
	FLAG2STR(D3DDTCAPS_SHORT4N)
	FLAG2STR(D3DDTCAPS_USHORT2N)
	FLAG2STR(D3DDTCAPS_USHORT4N)
	FLAG2STR(D3DDTCAPS_UDEC3)
	FLAG2STR(D3DDTCAPS_DEC3N)
	FLAG2STR(D3DDTCAPS_FLOAT16_2)
	FLAG2STR(D3DDTCAPS_FLOAT16_4)
FLAGS2STR_END_and_LOGRENDER(D3DDTCAPS)

LOGRENDER(D3DCAPS)
{
	return os
		LOGRENDER_MEMBER(DeviceType)
		LOGRENDER_MEMBER(AdapterOrdinal)
		LOGRENDER_MEMBER_TYPE(_D3DCAPS, Caps)
		LOGRENDER_MEMBER_TYPE(D3DCAPS2, Caps2)
		LOGRENDER_MEMBER_TYPE(D3DCAPS3, Caps3)
		LOGRENDER_MEMBER_TYPE(D3DPRESENT_INTERVAL, PresentationIntervals)
		LOGRENDER_MEMBER_TYPE(D3DCURSORCAPS, CursorCaps)
		LOGRENDER_MEMBER_TYPE(D3DDEVCAPS, DevCaps)
		LOGRENDER_MEMBER_TYPE(D3DPMISCCAPS, PrimitiveMiscCaps)
		LOGRENDER_MEMBER_TYPE(D3DPRASTERCAPS, RasterCaps)
		LOGRENDER_MEMBER_TYPE(D3DPCMPCAPS, ZCmpCaps)
		LOGRENDER_MEMBER_TYPE(D3DPBLENDCAPS, SrcBlendCaps)
		LOGRENDER_MEMBER_TYPE(D3DPBLENDCAPS, DestBlendCaps)
		LOGRENDER_MEMBER_TYPE(D3DPCMPCAPS, AlphaCmpCaps)
		LOGRENDER_MEMBER_TYPE(D3DPSHADECAPS, ShadeCaps)
		LOGRENDER_MEMBER_TYPE(D3DPTEXTURECAPS, TextureCaps)
		LOGRENDER_MEMBER_TYPE(D3DPTFILTERCAPS, TextureFilterCaps)
		LOGRENDER_MEMBER_TYPE(D3DPTFILTERCAPS, CubeTextureFilterCaps)
		LOGRENDER_MEMBER_TYPE(D3DPTFILTERCAPS, VolumeTextureFilterCaps)
		LOGRENDER_MEMBER_TYPE(D3DPTADDRESSCAPS, TextureAddressCaps)
		LOGRENDER_MEMBER_TYPE(D3DPTADDRESSCAPS, VolumeTextureAddressCaps)
		LOGRENDER_MEMBER_TYPE(D3DLINECAPS, LineCaps)
		LOGRENDER_MEMBER(MaxTextureWidth)
		LOGRENDER_MEMBER(MaxTextureHeight)
		LOGRENDER_MEMBER(MaxVolumeExtent)
		LOGRENDER_MEMBER(MaxTextureRepeat)
		LOGRENDER_MEMBER(MaxTextureAspectRatio)
		LOGRENDER_MEMBER(MaxAnisotropy)
		LOGRENDER_MEMBER(MaxVertexW)
		LOGRENDER_MEMBER(GuardBandLeft)
		LOGRENDER_MEMBER(GuardBandTop)
		LOGRENDER_MEMBER(GuardBandRight)
		LOGRENDER_MEMBER(GuardBandBottom)
		LOGRENDER_MEMBER(ExtentsAdjust)
		LOGRENDER_MEMBER_TYPE(D3DSTENCILCAPS, StencilCaps)
		LOGRENDER_MEMBER_TYPE(D3DFVFCAPS, FVFCaps)
		LOGRENDER_MEMBER_TYPE(D3DTEXOPCAPS, TextureOpCaps)
		LOGRENDER_MEMBER(MaxTextureBlendStages)
		LOGRENDER_MEMBER(MaxSimultaneousTextures)
		LOGRENDER_MEMBER_TYPE(D3DVTXPCAPS, VertexProcessingCaps)
		LOGRENDER_MEMBER(MaxActiveLights)
		LOGRENDER_MEMBER(MaxUserClipPlanes)
		LOGRENDER_MEMBER(MaxVertexBlendMatrices)
		LOGRENDER_MEMBER(MaxVertexBlendMatrixIndex)
		LOGRENDER_MEMBER(MaxPointSize)
		LOGRENDER_MEMBER(MaxPrimitiveCount)
		LOGRENDER_MEMBER(MaxVertexIndex)
		LOGRENDER_MEMBER(MaxStreams)
		LOGRENDER_MEMBER(MaxStreamStride)
		LOGRENDER_MEMBER(VertexShaderVersion)
		LOGRENDER_MEMBER(MaxVertexShaderConst)
		LOGRENDER_MEMBER(PixelShaderVersion)
		LOGRENDER_MEMBER(PixelShader1xMaxValue)
		LOGRENDER_MEMBER_TYPE(D3DDEVCAPS2, DevCaps2)
		LOGRENDER_MEMBER(MaxNpatchTessellationLevel)
		LOGRENDER_MEMBER(Reserved5)
		LOGRENDER_MEMBER(MasterAdapterOrdinal)
		LOGRENDER_MEMBER(AdapterOrdinalInGroup)
		LOGRENDER_MEMBER(NumberOfAdaptersInGroup)
		LOGRENDER_MEMBER_TYPE(D3DDTCAPS, DeclTypes)
		LOGRENDER_MEMBER(NumSimultaneousRTs)
		LOGRENDER_MEMBER_TYPE(D3DPTFILTERCAPS, StretchRectFilterCaps)
		LOGRENDER_MEMBER(VS20Caps)
		LOGRENDER_MEMBER(PS20Caps)
		LOGRENDER_MEMBER_TYPE(D3DPTFILTERCAPS, VertexTextureFilterCaps)
		LOGRENDER_MEMBER(MaxVShaderInstructionsExecuted)
		LOGRENDER_MEMBER(MaxPShaderInstructionsExecuted)
		LOGRENDER_MEMBER(MaxVertexShader30InstructionSlots)
		LOGRENDER_MEMBER(MaxPixelShader30InstructionSlots)
		;
}

LOGRENDER(D3DLOCKED_RECT)
{
	return os
		LOGRENDER_MEMBER(Pitch)
		LOGRENDER_MEMBER(pBits);
}

LOGRENDER(RECT)
{
	return os
		LOGRENDER_MEMBER(left)
		LOGRENDER_MEMBER(top)
		LOGRENDER_MEMBER(right)
		LOGRENDER_MEMBER(bottom);
}


//
// Cxbx D3D LOGRENDER(Type) implementations
//

ENUM2STR_START(X_D3DCOMMON_TYPE) // Use unshifted values
	ENUM2STR_CASE(X_D3DCOMMON_TYPE_VERTEXBUFFER)
	ENUM2STR_CASE(X_D3DCOMMON_TYPE_INDEXBUFFER)
	ENUM2STR_CASE(X_D3DCOMMON_TYPE_PUSHBUFFER)
	ENUM2STR_CASE(X_D3DCOMMON_TYPE_PALETTE)
	ENUM2STR_CASE(X_D3DCOMMON_TYPE_TEXTURE)
	ENUM2STR_CASE(X_D3DCOMMON_TYPE_SURFACE)
	ENUM2STR_CASE(X_D3DCOMMON_TYPE_FIXUP)
ENUM2STR_END_and_LOGRENDER(X_D3DCOMMON_TYPE)

LOGRENDER(X_D3DRESOURCE_COMMON)
{	
	return os << (DWORD)value << " :"
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" RefCount", int, value & X_D3DCOMMON_REFCOUNT_MASK)
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" Type", X_D3DCOMMON_TYPE, value & X_D3DCOMMON_TYPE_MASK) // Don't >> X_D3DCOMMON_TYPE_SHIFT, see ENUM2STR_START(X_D3DCOMMON_TYPE)
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" IntRefCount", int, (value & X_D3DCOMMON_INTREFCOUNT_MASK) >> X_D3DCOMMON_INTREFCOUNT_SHIFT)
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" ?D3DCreated", bool, (value & X_D3DCOMMON_D3DCREATED) > 0)
		//LOGRENDER_MEMBER_NAME_TYPE_VALUE(" ?IsLocked", bool, value & X_D3DCOMMON_ISLOCKED)
		//LOGRENDER_MEMBER_NAME_TYPE_VALUE(" ?VideoMemory", bool, value & X_D3DCOMMON_VIDEOMEMORY)
		;
}

LOGRENDER(X_D3DRESOURCE_FORMAT)
{
	return os << (DWORD)value << " :"
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" ?Cubemap", bool, (value & X_D3DFORMAT_CUBEMAP) > 0)
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" ?BorderColor", bool, (value & X_D3DFORMAT_BORDERSOURCE_COLOR) > 0)
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" #Dimensions", int, (value & X_D3DFORMAT_DIMENSION_MASK) >> X_D3DFORMAT_DIMENSION_SHIFT)
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" D3DFormat", X_D3DFORMAT, (value & X_D3DFORMAT_FORMAT_MASK) >> X_D3DFORMAT_FORMAT_SHIFT)
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" #MipMaps", int, (value & X_D3DFORMAT_MIPMAP_MASK) >> X_D3DFORMAT_MIPMAP_SHIFT)
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" USize", int, (value & X_D3DFORMAT_USIZE_MASK) >> X_D3DFORMAT_USIZE_SHIFT)
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" VSize", int, (value & X_D3DFORMAT_VSIZE_MASK) >> X_D3DFORMAT_VSIZE_SHIFT)
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" PSize", int, (value & X_D3DFORMAT_PSIZE_MASK) >> X_D3DFORMAT_PSIZE_SHIFT);
}

LOGRENDER(X_D3DRESOURCE_SIZE)
{
	return os << (DWORD)value << " :"
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" Width", int, value & X_D3DSIZE_WIDTH_MASK)
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" Height", int, (value & X_D3DSIZE_HEIGHT_MASK) >> X_D3DSIZE_HEIGHT_SHIFT)
		LOGRENDER_MEMBER_NAME_TYPE_VALUE(" Pitch", int, (value & X_D3DSIZE_HEIGHT_MASK) >> X_D3DSIZE_PITCH_SHIFT);
}

//
// Xbox D3D LOGRENDER(Type) implementations
//

ENUM2STR_START(X_D3DCULL)
	ENUM2STR_CASE(X_D3DCULL_NONE)
	ENUM2STR_CASE(X_D3DCULL_CW)
	ENUM2STR_CASE(X_D3DCULL_CCW)
ENUM2STR_END_and_LOGRENDER(X_D3DCULL)

ENUM2STR_START(X_D3DFORMAT)
	ENUM2STR_CASE(X_D3DFMT_L8)
	ENUM2STR_CASE(X_D3DFMT_AL8)
	ENUM2STR_CASE(X_D3DFMT_A1R5G5B5)
	ENUM2STR_CASE(X_D3DFMT_X1R5G5B5)
	ENUM2STR_CASE(X_D3DFMT_A4R4G4B4)
	ENUM2STR_CASE(X_D3DFMT_R5G6B5)
	ENUM2STR_CASE(X_D3DFMT_A8R8G8B8)
	ENUM2STR_CASE(X_D3DFMT_X8R8G8B8) // X_D3DFMT_X8L8V8U8 = 0x07, // Alias
	ENUM2STR_CASE(X_D3DFMT_P8)
	ENUM2STR_CASE(X_D3DFMT_A8)
	ENUM2STR_CASE(X_D3DFMT_A8L8)
	ENUM2STR_CASE(X_D3DFMT_R6G5B5) // X_D3DFMT_L6V5U5 = 0x27, // Alias
	ENUM2STR_CASE(X_D3DFMT_G8B8) // X_D3DFMT_V8U8 = 0x28, // Alias
	ENUM2STR_CASE(X_D3DFMT_R8B8)
	ENUM2STR_CASE(X_D3DFMT_D24S8)
	ENUM2STR_CASE(X_D3DFMT_F24S8)
	ENUM2STR_CASE(X_D3DFMT_D16) // X_D3DFMT_D16_LOCKABLE = 0x2c, // Alias
	ENUM2STR_CASE(X_D3DFMT_F16)
	ENUM2STR_CASE(X_D3DFMT_L16)
	ENUM2STR_CASE(X_D3DFMT_V16U16)
	ENUM2STR_CASE(X_D3DFMT_R5G5B5A1)
	ENUM2STR_CASE(X_D3DFMT_R4G4B4A4)
	ENUM2STR_CASE(X_D3DFMT_A8B8G8R8) // X_D3DFMT_Q8W8V8U8 = 0x3A, // Alias
	ENUM2STR_CASE(X_D3DFMT_B8G8R8A8)
	ENUM2STR_CASE(X_D3DFMT_R8G8B8A8)
	ENUM2STR_CASE(X_D3DFMT_YUY2)
	ENUM2STR_CASE(X_D3DFMT_UYVY)
	ENUM2STR_CASE(X_D3DFMT_DXT1)
	ENUM2STR_CASE(X_D3DFMT_DXT3) // X_D3DFMT_DXT2 = 0x0E, // Alias for X_D3DFMT_DXT3
	ENUM2STR_CASE(X_D3DFMT_DXT5) // X_D3DFMT_DXT4 = 0x0F, // Alias for X_D3DFMT_DXT5
	ENUM2STR_CASE(X_D3DFMT_LIN_A1R5G5B5)
	ENUM2STR_CASE(X_D3DFMT_LIN_R5G6B5)
	ENUM2STR_CASE(X_D3DFMT_LIN_A8R8G8B8)
	ENUM2STR_CASE(X_D3DFMT_LIN_L8)
	ENUM2STR_CASE(X_D3DFMT_LIN_R8B8)
	ENUM2STR_CASE(X_D3DFMT_LIN_G8B8) // X_D3DFMT_LIN_V8U8 = 0x17, // Alias
	ENUM2STR_CASE(X_D3DFMT_LIN_AL8)
	ENUM2STR_CASE(X_D3DFMT_LIN_X1R5G5B5)
	ENUM2STR_CASE(X_D3DFMT_LIN_A4R4G4B4)
	ENUM2STR_CASE(X_D3DFMT_LIN_X8R8G8B8) // X_D3DFMT_LIN_X8L8V8U8 = 0x1e, // Alias
	ENUM2STR_CASE(X_D3DFMT_LIN_A8)
	ENUM2STR_CASE(X_D3DFMT_LIN_A8L8)
	ENUM2STR_CASE(X_D3DFMT_LIN_D24S8)
	ENUM2STR_CASE(X_D3DFMT_LIN_F24S8)
	ENUM2STR_CASE(X_D3DFMT_LIN_D16)
	ENUM2STR_CASE(X_D3DFMT_LIN_F16)
	ENUM2STR_CASE(X_D3DFMT_LIN_L16)
	ENUM2STR_CASE(X_D3DFMT_LIN_V16U16)
	ENUM2STR_CASE(X_D3DFMT_LIN_R6G5B5) // X_D3DFMT_LIN_L6V5U5 = 0x37, // Alias
	ENUM2STR_CASE(X_D3DFMT_LIN_R5G5B5A1)
	ENUM2STR_CASE(X_D3DFMT_LIN_R4G4B4A4)
	ENUM2STR_CASE(X_D3DFMT_LIN_A8B8G8R8)
	ENUM2STR_CASE(X_D3DFMT_LIN_B8G8R8A8)
	ENUM2STR_CASE(X_D3DFMT_LIN_R8G8B8A8)
	ENUM2STR_CASE(X_D3DFMT_VERTEXDATA)
	ENUM2STR_CASE(X_D3DFMT_INDEX16) // Dxbx addition : Not an Xbox format, used internally
	ENUM2STR_CASE(X_D3DFMT_UNKNOWN) // Unique declaration to make overloads possible
ENUM2STR_END_and_LOGRENDER(X_D3DFORMAT)

ENUM2STR_START(X_D3DPRIMITIVETYPE)
	ENUM2STR_CASE(X_D3DPT_POINTLIST)
	ENUM2STR_CASE(X_D3DPT_LINELIST)
	ENUM2STR_CASE(X_D3DPT_LINELOOP)
	ENUM2STR_CASE(X_D3DPT_LINESTRIP)
	ENUM2STR_CASE(X_D3DPT_TRIANGLELIST)
	ENUM2STR_CASE(X_D3DPT_TRIANGLESTRIP)
	ENUM2STR_CASE(X_D3DPT_TRIANGLEFAN)
	ENUM2STR_CASE(X_D3DPT_QUADLIST)
	ENUM2STR_CASE(X_D3DPT_QUADSTRIP)
	ENUM2STR_CASE(X_D3DPT_POLYGON)
ENUM2STR_END_and_LOGRENDER(X_D3DPRIMITIVETYPE)

ENUM2STR_START(X_D3DRESOURCETYPE)
	ENUM2STR_CASE(X_D3DRTYPE_NONE)
	ENUM2STR_CASE(X_D3DRTYPE_SURFACE)
	ENUM2STR_CASE(X_D3DRTYPE_VOLUME)
	ENUM2STR_CASE(X_D3DRTYPE_TEXTURE)
	ENUM2STR_CASE(X_D3DRTYPE_VOLUMETEXTURE)
	ENUM2STR_CASE(X_D3DRTYPE_CUBETEXTURE)
	ENUM2STR_CASE(X_D3DRTYPE_VERTEXBUFFER)
	ENUM2STR_CASE(X_D3DRTYPE_INDEXBUFFER)
	ENUM2STR_CASE(X_D3DRTYPE_PUSHBUFFER)
	ENUM2STR_CASE(X_D3DRTYPE_PALETTE)
	ENUM2STR_CASE(X_D3DRTYPE_FIXUP)
ENUM2STR_END_and_LOGRENDER(X_D3DRESOURCETYPE)

ENUM2STR_START(X_D3DSET_DEPTH_CLIP_PLANES_FLAGS)
	ENUM2STR_CASE(X_D3DSDCP_SET_VERTEXPROGRAM_PLANES)
	ENUM2STR_CASE(X_D3DSDCP_SET_FIXEDFUNCTION_PLANES)
	ENUM2STR_CASE(X_D3DSDCP_USE_DEFAULT_VERTEXPROGRAM_PLANES)
	ENUM2STR_CASE(X_D3DSDCP_USE_DEFAULT_FIXEDFUNCTION_PLANES)
ENUM2STR_END_and_LOGRENDER(X_D3DSET_DEPTH_CLIP_PLANES_FLAGS)

FLAGS2STR_START(X_D3DUSAGE)
	FLAG2STR(X_D3DUSAGE_RENDERTARGET)
	FLAG2STR(X_D3DUSAGE_DEPTHSTENCIL)
	FLAG2STR(X_D3DUSAGE_WRITEONLY)
	FLAG2STR(X_D3DUSAGE_POINTS)
	FLAG2STR(X_D3DUSAGE_RTPATCHES)
	FLAG2STR(X_D3DUSAGE_DYNAMIC)
	FLAG2STR(X_D3DUSAGE_PERSISTENTDIFFUSE)
	FLAG2STR(X_D3DUSAGE_PERSISTENTSPECULAR)
	FLAG2STR(X_D3DUSAGE_PERSISTENTBACKDIFFUSE)
	FLAG2STR(X_D3DUSAGE_PERSISTENTBACKSPECULAR)
	//#define X_D3DUSAGE_BORDERSOURCE_COLOR     0x00000000L   // Xbox-only
	FLAG2STR(X_D3DUSAGE_BORDERSOURCE_TEXTURE)
FLAGS2STR_END_and_LOGRENDER(X_D3DUSAGE)

LOGRENDER(X_D3DDISPLAYMODE)
{
	return os
		LOGRENDER_MEMBER(Width)
		LOGRENDER_MEMBER(Height)
		LOGRENDER_MEMBER(RefreshRate)
		LOGRENDER_MEMBER(Flags)
		LOGRENDER_MEMBER(Format);
}

LOGRENDER(X_D3DVIEWPORT8)
{
	return os
		LOGRENDER_MEMBER(X)
		LOGRENDER_MEMBER(Y)
		LOGRENDER_MEMBER(Width)
		LOGRENDER_MEMBER(Height)
		LOGRENDER_MEMBER(MinZ)
		LOGRENDER_MEMBER(MaxZ);
}

LOGRENDER(X_D3DResource)
{
// TODO : Get more specific logging compiling
//	if ((value.Common & X_D3DCOMMON_TYPE_MASK) == X_D3DCOMMON_TYPE_TEXTURE)
//		return os << (X_D3DPixelContainer)&value;

	return os
		LOGRENDER_MEMBER_TYPE(X_D3DRESOURCE_COMMON, Common)
		LOGRENDER_MEMBER(Data)
		LOGRENDER_MEMBER(Lock);
}

LOGRENDER(X_D3DPixelContainer)
{
	return os
		LOGRENDER_MEMBER_TYPE(X_D3DRESOURCE_COMMON, Common)
		LOGRENDER_MEMBER(Data)
		LOGRENDER_MEMBER(Lock)
		//
		LOGRENDER_MEMBER_TYPE(X_D3DRESOURCE_FORMAT, Format)
		LOGRENDER_MEMBER_TYPE(X_D3DRESOURCE_SIZE, Size);
}

}; // end of namespace XTL
