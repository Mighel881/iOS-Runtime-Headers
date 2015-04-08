/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLDevice>, <MTLResource>, MTLResourceAllocationInfo, MTLToolsPointerArray, NSString;

@interface MTLToolsTexture : MTLToolsResource <MTLTextureImplementation> {
    MTLToolsPointerArray *_views;
}

@property(readonly) unsigned int arrayLength;
@property(readonly) MTLResourceAllocationInfo * cachedAllocationInfo;
@property(readonly) unsigned int cpuCacheMode;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) unsigned int depth;
@property(copy,readonly) NSString * description;
@property(readonly) <MTLDevice> * device;
@property(getter=isFramebufferOnly,readonly) BOOL framebufferOnly;
@property(readonly) unsigned int hash;
@property(readonly) unsigned int height;
@property(readonly) struct __IOSurface { }* iosurface;
@property(readonly) unsigned int iosurfacePlane;
@property(readonly) BOOL isDrawable;
@property(copy) NSString * label;
@property(readonly) unsigned int mipmapLevelCount;
@property(readonly) unsigned int numFaces;
@property(readonly) unsigned int pixelFormat;
@property int responsibleProcess;
@property(readonly) <MTLResource> * rootResource;
@property(readonly) unsigned int rotation;
@property(readonly) unsigned int sampleCount;
@property(readonly) MTLResourceAllocationInfo * sharedAllocationInfo;
@property(readonly) Class superclass;
@property(readonly) unsigned int textureType;
@property(readonly) MTLToolsPointerArray * views;
@property(readonly) unsigned int width;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (unsigned int)arrayLength;
- (void)copyFromPixels:(const void*)arg1 rowBytes:(unsigned int)arg2 imageBytes:(unsigned int)arg3 toSlice:(unsigned int)arg4 mipmapLevel:(unsigned int)arg5 origin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg6 size:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg7;
- (void)copyFromSlice:(unsigned int)arg1 mipmapLevel:(unsigned int)arg2 origin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg3 size:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg4 toPixels:(void*)arg5 rowBytes:(unsigned int)arg6 imageBytes:(unsigned int)arg7;
- (unsigned int)depth;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned int)arg2 bytesPerImage:(unsigned int)arg3 fromRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg4 mipmapLevel:(unsigned int)arg5 slice:(unsigned int)arg6;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned int)arg2 fromRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg3 mipmapLevel:(unsigned int)arg4;
- (unsigned int)height;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithBaseObject:(id)arg1 strongParent:(id)arg2;
- (struct __IOSurface { }*)iosurface;
- (unsigned int)iosurfacePlane;
- (BOOL)isDrawable;
- (BOOL)isFramebufferOnly;
- (unsigned int)mipmapLevelCount;
- (id)newTextureViewWithPixelFormat:(unsigned int)arg1;
- (unsigned int)numFaces;
- (unsigned int)pixelFormat;
- (void)replaceRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned int)arg2 slice:(unsigned int)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned int)arg5 bytesPerImage:(unsigned int)arg6;
- (void)replaceRegion:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned int)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned int)arg4;
- (id)rootResource;
- (unsigned int)rotation;
- (unsigned int)sampleCount;
- (unsigned int)textureType;
- (id)views;
- (unsigned int)width;

@end
