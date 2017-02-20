/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKView : UIView <CALayerDelegate, NSCoding> {
    BOOL  _autoResizeDrawable;
    struct { 
        double red; 
        double green; 
        double blue; 
        double alpha; 
    }  _clearColor;
    double  _clearDepth;
    unsigned int  _clearStencil;
    NSMutableArray * _colorPixelFormats;
    NSMutableArray * _colorTextures;
    <CAMetalDrawable> * _currentDrawable;
    <MTKViewDelegate> * _delegate;
    unsigned int  _depthStencilPixelFormat;
    <MTLTexture> * _depthStencilTexture;
    <MTLDevice> * _device;
    BOOL  _deviceReset;
    CADisplayLink * _displayLink;
    int (* _drawRectSubIMP;
    unsigned int  _drawableAttachmentIndex;
    struct CGSize { 
        float width; 
        float height; 
    }  _drawableScaleFactor;
    struct CGSize { 
        float width; 
        float height; 
    }  _drawableSize;
    BOOL  _enableSetNeedsDisplay;
    int  _frameInterval;
    int  _maxValidAttachmentIndex;
    CAMetalLayer * _metalLayer;
    <MTLTexture> * _multisampleColorTexture;
    NSMutableArray * _multisampleColorTextures;
    int  _nominalFramesPerSecond;
    BOOL  _paused;
    BOOL  _pausedOnBackgrounding;
    int  _preferredFramesPerSecond;
    int  _renderAttachmentDirtyState;
    unsigned int  _sampleCount;
    BOOL  _sizeDirty;
    BOOL  _subClassOverridesDrawRect;
}

@property (nonatomic) BOOL autoResizeDrawable;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } clearColor;
@property (nonatomic) double clearDepth;
@property (nonatomic) unsigned int clearStencil;
@property (nonatomic) unsigned int colorPixelFormat;
@property (nonatomic) struct CGColorSpace { }*colorspace;
@property (nonatomic, readonly) <CAMetalDrawable> *currentDrawable;
@property (nonatomic, readonly) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTKViewDelegate> *delegate;
@property (nonatomic) unsigned int depthStencilPixelFormat;
@property (nonatomic, readonly) <MTLTexture> *depthStencilTexture;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MTLDevice> *device;
@property (nonatomic) struct CGSize { float x1; float x2; } drawableSize;
@property (nonatomic) BOOL enableSetNeedsDisplay;
@property (nonatomic) BOOL framebufferOnly;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <MTLTexture> *multisampleColorTexture;
@property (getter=isPaused, nonatomic) BOOL paused;
@property (nonatomic) int preferredFramesPerSecond;
@property (nonatomic) BOOL presentsWithTransaction;
@property (nonatomic) unsigned int sampleCount;
@property (readonly) Class superclass;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (int)_calculateRefeshesPerSecond;
- (BOOL)_canDrawContent;
- (BOOL)_controlsOwnScaleFactor;
- (void)_createDisplayLinkForScreen:(id)arg1;
- (struct CGSize { float x1; float x2; })_pixelSizeFromPointSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_resizeDrawable;
- (BOOL)autoResizeDrawable;
- (struct { double x1; double x2; double x3; double x4; })clearColor;
- (double)clearDepth;
- (unsigned int)clearStencil;
- (unsigned int)colorPixelFormat;
- (id)colorTextures;
- (struct CGColorSpace { }*)colorspace;
- (id)currentDrawable;
- (id)currentRenderPassDescriptor;
- (void)dealloc;
- (id)delegate;
- (unsigned int)depthStencilPixelFormat;
- (id)depthStencilTexture;
- (id)device;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (void)draw;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (unsigned int)drawableAttachmentIndex;
- (struct CGSize { float x1; float x2; })drawableSize;
- (BOOL)enableSetNeedsDisplay;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)framebufferOnly;
- (void)initCommon;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 device:(id)arg2;
- (BOOL)isPaused;
- (void)layoutSubviews;
- (id)multisampleColorTexture;
- (id)multisampleColorTextures;
- (int)nominalFramesPerSecond;
- (int)preferredFramesPerSecond;
- (BOOL)presentsWithTransaction;
- (void)releaseDrawables;
- (unsigned int)sampleCount;
- (void)setAutoResizeDrawable:(BOOL)arg1;
- (void)setClearColor:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setClearDepth:(double)arg1;
- (void)setClearStencil:(unsigned int)arg1;
- (void)setColorPixelFormat:(unsigned int)arg1;
- (void)setColorPixelFormat:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setColorspace:(struct CGColorSpace { }*)arg1;
- (void)setContentScaleFactor:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepthStencilPixelFormat:(unsigned int)arg1;
- (void)setDevice:(id)arg1;
- (void)setDrawableAttachmentIndex:(unsigned int)arg1;
- (void)setDrawableSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setEnableSetNeedsDisplay:(BOOL)arg1;
- (void)setFramebufferOnly:(BOOL)arg1;
- (void)setNominalFramesPerSecond:(int)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setPreferredFramesPerSecond:(int)arg1;
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (void)setSampleCount:(unsigned int)arg1;

@end
