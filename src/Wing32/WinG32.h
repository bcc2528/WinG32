#include <stdarg.h>

#include <windows.h>
#include <windef.h>
#include <winbase.h>
#include <wingdi.h>
#include <winuser.h>

extern "C" HDC WINAPI WinGCreateDC(void);
extern "C" BOOL WINAPI WinGRecommendDIBFormat(BITMAPINFO* bmi);
extern "C" HBITMAP WINAPI WinGCreateBitmap(HDC hdc, BITMAPINFO* bmi, void** bits);
extern "C" void* WINAPI WinGGetDIBPointer(HBITMAP hbmp, BITMAPINFO* bmi);
extern "C" UINT WINAPI WinGSetDIBColorTable(HDC hdc, UINT start, UINT end, RGBQUAD* colors);
extern "C" UINT WINAPI WinGGetDIBColorTable(HDC hdc, UINT start, UINT end, RGBQUAD* colors);
extern "C" HPALETTE WINAPI WinGCreateHalftonePalette(void);
extern "C" HBRUSH WINAPI WinGCreateHalftoneBrush(HDC hdc, COLORREF color, INT type);
extern "C" BOOL WINAPI WinGStretchBlt(HDC hdcDst, INT xDst, INT yDst, INT widthDst, INT heightDst, HDC hdcSrc, INT xSrc, INT ySrc, INT widthSrc, INT heightSrc);
extern "C" BOOL WINAPI WinGBitBlt(HDC hdcDst, INT xDst, INT yDst, INT width, INT height, HDC hdcSrc, INT xSrc, INT ySrc);