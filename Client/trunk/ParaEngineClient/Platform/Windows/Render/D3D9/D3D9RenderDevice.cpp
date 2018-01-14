#include "ParaEngine.h"
#include "D3D9RenderDevice.h"
#include "D3D9Tools.h"

using namespace ParaEngine;


ParaEngine::CD3D9RenderDevice::CD3D9RenderDevice(IDirect3DDevice9* device)
{
	m_pD3DDevice = device;
}


HRESULT ParaEngine::CD3D9RenderDevice::SetClipPlane(DWORD Index, const float* pPlane)
{
	return m_pD3DDevice->SetClipPlane(Index, pPlane);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetTexture(DWORD Stage, IDirect3DTexture9* pTexture)
{
	return m_pD3DDevice->SetTexture(Stage, pTexture);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetSamplerState(DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD Value)
{
	return m_pD3DDevice->SetSamplerState(Sampler, Type, Value);
}

HRESULT ParaEngine::CD3D9RenderDevice::GetSamplerState(DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD* pValue)
{
	return m_pD3DDevice->GetSamplerState(Sampler, Type, pValue);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetIndices(IDirect3DIndexBuffer9* pIndexData)
{
	return m_pD3DDevice->SetIndices(pIndexData);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetStreamSource(UINT StreamNumber, IDirect3DVertexBuffer9* pStreamData, UINT OffsetInBytes, UINT Stride)
{
	return m_pD3DDevice->SetStreamSource(StreamNumber, pStreamData, OffsetInBytes, Stride);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetTransform(D3DTRANSFORMSTATETYPE State, DeviceMatrix_ptr pMatrix)
{
	return m_pD3DDevice->SetTransform(State, pMatrix);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetFVF(DWORD FVF)
{
	return m_pD3DDevice->SetFVF(FVF);
}

void ParaEngine::CD3D9RenderDevice::SetCursorPosition(int X, int Y, DWORD Flags)
{
	return m_pD3DDevice->SetCursorPosition(X, Y, Flags);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetVertexDeclaration(IDirect3DVertexDeclaration9* pDecl)
{
	return m_pD3DDevice->SetVertexDeclaration(pDecl);
}

HRESULT ParaEngine::CD3D9RenderDevice::CreateVertexDeclaration(CONST D3DVERTEXELEMENT9* pVertexElements, IDirect3DVertexDeclaration9** ppDecl)
{
	return m_pD3DDevice->CreateVertexDeclaration(pVertexElements, ppDecl);
}

HRESULT ParaEngine::CD3D9RenderDevice::BeginScene()
{
	return m_pD3DDevice->BeginScene();
}

HRESULT ParaEngine::CD3D9RenderDevice::EndScene()
{
	return m_pD3DDevice->EndScene();
}

HRESULT ParaEngine::CD3D9RenderDevice::Clear(DWORD Count, const D3DRECT* pRects, DWORD Flags, DWORD Color, float Z, DWORD Stencil)
{
	return m_pD3DDevice->Clear(Count, pRects, Flags, Color, Z, Stencil);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetViewport(const D3DVIEWPORT9* pViewport)
{
	return m_pD3DDevice->SetViewport(pViewport);
}

HRESULT ParaEngine::CD3D9RenderDevice::GetViewport(D3DVIEWPORT9* pViewport)
{
	return m_pD3DDevice->GetViewport(pViewport);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetScissorRect(RECT* pRect)
{
	return m_pD3DDevice->SetScissorRect(pRect);
}

HRESULT ParaEngine::CD3D9RenderDevice::GetScissorRect(RECT* pRect)
{
	return m_pD3DDevice->GetScissorRect(pRect);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetVertexShader(IDirect3DVertexShader9* pShader)
{
	return m_pD3DDevice->SetVertexShader(pShader);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetPixelShader(IDirect3DPixelShader9* pShader)
{
	return m_pD3DDevice->SetPixelShader(pShader);
}

HRESULT ParaEngine::CD3D9RenderDevice::CreateIndexBuffer(UINT Length, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DIndexBuffer9** ppIndexBuffer, HANDLE* pSharedHandle)
{
	return m_pD3DDevice->CreateIndexBuffer(Length, Usage, Format, Pool, ppIndexBuffer, pSharedHandle);
}

HRESULT ParaEngine::CD3D9RenderDevice::CreateVertexBuffer(UINT Length, DWORD Usage, DWORD FVF, D3DPOOL Pool, IDirect3DVertexBuffer9** ppVertexBuffer, HANDLE* pSharedHandle)
{
	return m_pD3DDevice->CreateVertexBuffer(Length, Usage, FVF, Pool, ppVertexBuffer, pSharedHandle);
}

HRESULT ParaEngine::CD3D9RenderDevice::DrawPrimitive(int nStatisticsType, D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT PrimitiveCount)
{
	return m_pD3DDevice->DrawPrimitive(PrimitiveType, StartVertex,PrimitiveCount);
}

HRESULT ParaEngine::CD3D9RenderDevice::DrawPrimitiveUP(int nStatisticsType, D3DPRIMITIVETYPE PrimitiveType, UINT PrimitiveCount, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride)
{
	return m_pD3DDevice->DrawPrimitiveUP(PrimitiveType, PrimitiveCount, pVertexStreamZeroData,VertexStreamZeroStride);
}

HRESULT ParaEngine::CD3D9RenderDevice::DrawIndexedPrimitive(int nStatisticsType, D3DPRIMITIVETYPE Type, INT BaseVertexIndex, UINT MinIndex, UINT NumVertices, UINT indexStart, UINT PrimitiveCount)
{
	return m_pD3DDevice->DrawIndexedPrimitive(Type, BaseVertexIndex, MinIndex, NumVertices, indexStart, PrimitiveCount);
}

HRESULT ParaEngine::CD3D9RenderDevice::DrawIndexedPrimitiveUP(int nStatisticsType, D3DPRIMITIVETYPE PrimitiveType, UINT MinVertexIndex, UINT NumVertices, UINT PrimitiveCount, CONST void * pIndexData, D3DFORMAT IndexDataFormat, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride)
{
	return m_pD3DDevice->DrawIndexedPrimitiveUP(PrimitiveType, MinVertexIndex, NumVertices, PrimitiveCount, pIndexData, IndexDataFormat, pVertexStreamZeroData, VertexStreamZeroStride);
}

int ParaEngine::CD3D9RenderDevice::GetMaxSimultaneousTextures()
{
	throw std::logic_error("The method or operation is not implemented.");
}


HRESULT ParaEngine::CD3D9RenderDevice::SetMaterial(D3DMATERIAL9* pMaterial)
{
	return m_pD3DDevice->SetMaterial(pMaterial);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetRenderTarget(DWORD RenderTargetIndex, IDirect3DSurface9* pRenderTarget)
{
	return m_pD3DDevice->SetRenderTarget(RenderTargetIndex, pRenderTarget);
}

bool ParaEngine::CD3D9RenderDevice::ReadPixels(int nLeft, int nTop, int nWidth, int nHeight, void* pDataOut, DWORD nDataFormat, DWORD nDataType)
{
	throw std::logic_error("The method or operation is not implemented.");
}

HRESULT ParaEngine::CD3D9RenderDevice::CreateStateBlock(D3DSTATEBLOCKTYPE Type, IDirect3DStateBlock9** ppSB)
{
	return m_pD3DDevice->CreateStateBlock(Type, ppSB);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetDepthStencilSurface(IDirect3DSurface9* pNewZStencil)
{
	return m_pD3DDevice->SetDepthStencilSurface(pNewZStencil);
}

HRESULT ParaEngine::CD3D9RenderDevice::CreateOffscreenPlainSurface(UINT Width, UINT Height, D3DFORMAT Format, D3DPOOL Pool, IDirect3DSurface9** ppSurface, HANDLE* pSharedHandle)
{
	return m_pD3DDevice->CreateOffscreenPlainSurface(Width, Height, Format, Pool, ppSurface, pSharedHandle);
}

HRESULT ParaEngine::CD3D9RenderDevice::GetDepthStencilSurface(IDirect3DSurface9** ppZStencilSurface)
{
	return m_pD3DDevice->GetDepthStencilSurface(ppZStencilSurface);
}

HRESULT ParaEngine::CD3D9RenderDevice::CreateTexture(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DTexture9** ppTexture, HANDLE* pSharedHandle)
{
	return m_pD3DDevice->CreateTexture(Width, Height, Levels, Usage, Format, Pool, ppTexture, pSharedHandle);
}

HRESULT ParaEngine::CD3D9RenderDevice::CreateTextureFromFileInMemoryEx(LPCVOID pSrcData, UINT SrcDataSize, UINT Width, UINT Height, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO* pSrcInfo, PALETTEENTRY*pPalette, LPDIRECT3DTEXTURE9*ppTexture)
{
	return D3DXCreateTextureFromFileInMemoryEx(m_pD3DDevice, pSrcData, SrcDataSize, Width, Height, MipLevels, Usage, Format, Pool, Filter, MipFilter, ColorKey, pSrcInfo, pPalette, ppTexture);
}

HRESULT ParaEngine::CD3D9RenderDevice::CreateTextureFromFileEx(LPCSTR pSrcFile, UINT Width, UINT Height, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO* pSrcInfo, PALETTEENTRY* pPalette, LPDIRECT3DTEXTURE9* ppTexture)
{
	return D3DXCreateTextureFromFileEx(m_pD3DDevice, pSrcFile, Width, Height, MipLevels, Usage, Format, Pool, Filter, MipFilter, ColorKey, pSrcInfo, pPalette, ppTexture);
}

HRESULT ParaEngine::CD3D9RenderDevice::CheckTextureRequirements(UINT* pWidth, UINT* pHeight, UINT* pNumMipLevels, DWORD Usage, D3DFORMAT* pFormat, D3DPOOL Pool)
{
	return D3DXCheckTextureRequirements(m_pD3DDevice, pWidth, pHeight, pNumMipLevels, Usage, pFormat, Pool);
}

HRESULT ParaEngine::CD3D9RenderDevice::CreateCubeTextureFromFileInMemoryEx(LPCVOID pSrcData, UINT SrcDataSize, UINT Size, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO* pSrcInfo, PALETTEENTRY* pPalette, LPDIRECT3DCUBETEXTURE9* ppCubeTexture)
{
	return D3DXCreateCubeTextureFromFileInMemoryEx(m_pD3DDevice, pSrcData, SrcDataSize, Size, MipLevels, Usage, Format, Pool, Filter, MipFilter, ColorKey, pSrcInfo, pPalette, ppCubeTexture);
}

HRESULT ParaEngine::CD3D9RenderDevice::LightEnable(DWORD Index, BOOL Enable)
{
	return m_pD3DDevice->LightEnable(Index, Enable);
}

HRESULT ParaEngine::CD3D9RenderDevice::CreateEffect(LPCVOID pSrcData, UINT SrcDataLen, CONST D3DXMACRO* pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXEFFECTPOOL pPool, LPD3DXEFFECT* ppEffect, LPD3DXBUFFER* ppCompilationErrors)
{
	return D3DXCreateEffect(m_pD3DDevice, pSrcData, SrcDataLen, pDefines, pInclude, Flags, pPool, ppEffect, ppCompilationErrors);
}

HRESULT ParaEngine::CD3D9RenderDevice::CreateFont(INT Height, UINT Width, UINT Weight, UINT MipLevels, BOOL Italic, DWORD CharSet, DWORD OutputPrecision, DWORD Quality, DWORD PitchAndFamily, LPCSTR pFaceName, LPD3DXFONT* ppFont)
{
	return D3DXCreateFont(m_pD3DDevice,Height,Width,Weight,MipLevels,Italic,CharSet,OutputPrecision,Quality,PitchAndFamily,pFaceName,ppFont);
}

HRESULT ParaEngine::CD3D9RenderDevice::CreateDepthStencilSurface(UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, DWORD MultisampleQuality, BOOL Discard, IDirect3DSurface9** ppSurface, HANDLE* pSharedHandle)
{
	return m_pD3DDevice->CreateDepthStencilSurface(Width, Height, Format, MultiSample, MultisampleQuality, Discard, ppSurface, pSharedHandle);
}

HRESULT ParaEngine::CD3D9RenderDevice::StretchRect(IDirect3DSurface9* pSourceSurface, CONST RECT* pSourceRect, IDirect3DSurface9* pDestSurface, CONST RECT* pDestRect, D3DTEXTUREFILTERTYPE Filter)
{
	return m_pD3DDevice->StretchRect(pSourceSurface, pSourceRect, pDestSurface, pDestRect, Filter);
}

HRESULT ParaEngine::CD3D9RenderDevice::GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX* pMatrix)
{
	return m_pD3DDevice->GetTransform(State, pMatrix);
}



HRESULT ParaEngine::CD3D9RenderDevice::SetStreamSourceFreq(UINT StreamNumber, UINT Setting)
{
	return m_pD3DDevice->SetStreamSourceFreq(StreamNumber, Setting);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetLight(DWORD Index, CONST D3DLIGHT9* pLight)
{
	return m_pD3DDevice->SetLight(Index, pLight);
}


HRESULT ParaEngine::CD3D9RenderDevice::GetRenderTargetData(IDirect3DSurface9* pRenderTarget, IDirect3DSurface9* pDestSurface)
{
	return m_pD3DDevice->GetRenderTargetData(pRenderTarget, pDestSurface);
}

HRESULT ParaEngine::CD3D9RenderDevice::SetVertexShaderConstantF(UINT StartRegister, CONST float* pConstantData, UINT Vector4fCount)
{
	return m_pD3DDevice->SetVertexShaderConstantF(StartRegister, pConstantData, Vector4fCount);
}

HRESULT ParaEngine::CD3D9RenderDevice::ShowCursor(BOOL bShow)
{
	return m_pD3DDevice->ShowCursor(bShow);
}

HRESULT ParaEngine::CD3D9RenderDevice::Present(RECT* pSourceRect, CONST RECT* pDestRect, HWND hDestWindowOverride, CONST RGNDATA* pDirtyRegion)
{
	return m_pD3DDevice->Present(pSourceRect, pDestRect, hDestWindowOverride, pDirtyRegion);
}

HRESULT ParaEngine::CD3D9RenderDevice::TestCooperativeLevel()
{
	return m_pD3DDevice->TestCooperativeLevel();
}

HRESULT ParaEngine::CD3D9RenderDevice::CreateTexture(UINT Width, UINT Height, UINT MipLeves, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, LPDIRECT3DTEXTURE9* ppTexture)
{
	return D3DXCreateTexture(m_pD3DDevice, Width, Height, MipLeves, Usage, Format, Pool, ppTexture);
}

HRESULT ParaEngine::CD3D9RenderDevice::DrawIndexedPrimitive(D3DPRIMITIVETYPE Type, INT BaseVertexIndex, UINT MinVertexIndex, UINT NumVertices, UINT startIndex, UINT primCount)
{
	return m_pD3DDevice->DrawIndexedPrimitive(Type, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);
}

LPDIRECT3DDEVICE9 CD3D9RenderDevice::GetDirect3DDevice9() const
{
	return m_pD3DDevice;
}

uint32_t ParaEngine::CD3D9RenderDevice::GetRenderState(const ERenderState& State)
{
	auto d3dRenderState = toD3DRenderState(State);
	DWORD state = 0;
	if (m_pD3DDevice->GetRenderState(d3dRenderState, &state) == S_OK)
	{
		return (uint32_t)state;
	}
	return 0;
}

bool ParaEngine::CD3D9RenderDevice::SetRenderState(const ERenderState State, const uint32_t Value)
{
	auto rs = toD3DRenderState(State);
	HRESULT hr = m_pD3DDevice->SetRenderState(rs, toD3DRenderStateValue(State,Value));
	return hr == D3D_OK;
}
