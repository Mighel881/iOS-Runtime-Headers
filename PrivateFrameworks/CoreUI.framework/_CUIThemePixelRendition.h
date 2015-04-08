/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIRenditionMetrics, CUIRenditionSliceInformation, _CSIRenditionBlockData;

@interface _CUIThemePixelRendition : CUIThemeRendition {
    _CSIRenditionBlockData *_cachedBlockDataBGRX;
    _CSIRenditionBlockData *_cachedBlockDataRGBX;
    CUIRenditionMetrics *_renditionMetrics;
    CUIRenditionSliceInformation *_sliceInformation;
    unsigned long _sourceRowbytes;
    struct CGImage {} *image[16];
    unsigned int nimages;
    struct CGImage { } *unslicedImage;
}

- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (id)copySharedBlockDataWithPixelFormat:(int)arg1;
- (void)dealloc;
- (id)imageForSliceIndex:(int)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 artworkStatus:(int)arg3;
- (BOOL)isScaled;
- (BOOL)isTiled;
- (id)maskForSliceIndex:(int)arg1;
- (id)metrics;
- (struct CGImage { }*)newImageFromCSIDataSlice:(struct _slice { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 ofBitmap:(struct _csibitmap { unsigned int x1; union { unsigned int x_2_1_1; struct _csibitmapflags { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 30; } x_2_1_2; } x2; unsigned int x3; unsigned int x4; unsigned char x5[0]; }*)arg2 usingColorspace:(struct CGColorSpace { }*)arg3;
- (void)setSharedBlockData:(id)arg1;
- (id)sliceInformation;
- (unsigned long)sourceRowbytes;
- (struct CGImage { }*)unslicedImage;

@end
