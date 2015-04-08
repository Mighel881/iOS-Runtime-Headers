/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class <RCGLWaveformRendererDelegate>, CADisplayLink, CALayer, EAGLContext, NSString, NSTimer, RCUIConfiguration, RCWaveformDataSource, UIView;

@interface RCGLWaveformRenderer : UIViewController <GLKViewDelegate, RCWaveformDataSourceObserver> {
    RCUIConfiguration *_UIConfiguration;
    BOOL _activeDisplayLinkRequired;
    BOOL _buffersInitialized;
    float _cachedContentWidth;
    BOOL _centerKeylineRendered;
    BOOL _contentWidthDirty;
    float _dataPointWidth;
    RCWaveformDataSource *_dataSource;
    CADisplayLink *_displayLink;
    NSTimer *_displayLinkTerminationTimer;
    EAGLContext *_eaglContext;
    int _foregroundColorUniform;
    BOOL _frequentUpdatesSegmentUpdatesExpectedHint;
    BOOL _hasDisplayedPreGLContentCenterline;
    int _highlightColorTimelineRange;
    int _highlightColorUniform;
    struct { 
        double beginTime; 
        double endTime; 
    } _highlightTimeRange;
    BOOL _isAnimatingModelview;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _lastViewportRect;
    CALayer *_modelviewLayer;
    int _modelviewUniform;
    BOOL _needsVisibleRangeRendering;
    BOOL _paused;
    UIView *_preGLContentCenterline;
    BOOL _preparedForRendering;
    int _projectionUniform;
    struct { 
        double beginTime; 
        double endTime; 
    } _renderedTimeRange;
    BOOL _renderedTimeRangeIsApproximatedWaveform;
    unsigned int _renderedWaveformVertices;
    <RCGLWaveformRendererDelegate> *_rendererDelegate;
    unsigned int _shaderProgram;
    BOOL _shadersInitialized;
    float _spacingWidth;
    unsigned int _vertexBuffers[2];
    struct { 
        double beginTime; 
        double endTime; 
    } _visibleTimeRange;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__first_; 
        } __end_cap_; 
    } _waveformVertexData;
}

@property(copy) RCUIConfiguration * UIConfiguration;
@property(getter=isActiveDisplayLinkRequired) BOOL activeDisplayLinkRequired;
@property(readonly) float contentWidth;
@property float dataPointWidth;
@property(retain) RCWaveformDataSource * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL frequentUpdatesSegmentUpdatesExpectedHint;
@property(readonly) unsigned int hash;
@property struct { double x1; double x2; } highlightTimeRange;
@property(getter=isPaused) BOOL paused;
@property <RCGLWaveformRendererDelegate> * rendererDelegate;
@property float spacingWidth;
@property(readonly) Class superclass;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleRect;
@property struct { double x1; double x2; } visibleTimeRange;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)UIConfiguration;
- (void)_cancelScheduledTerminateDisplayLink;
- (void)_clearRenderingState;
- (unsigned int)_compileShaderOfType:(unsigned int)arg1 pathToSource:(id)arg2;
- (BOOL)_currentViewportRequiresRenderingNewSegments;
- (void)_didBecomeActiveNotification:(id)arg1;
- (void)_displayLinkDidUpdate:(id)arg1;
- (void)_draw:(id)arg1;
- (struct { double x1; double x2; })_highlightTimeRange;
- (float)_nonCachedContentWidth;
- (id)_pathForShader:(id)arg1;
- (void)_performOrDispatchToMainThread:(id)arg1;
- (void)_performScheduledTerminateDisplayLink;
- (float)_pixelOffsetForTime:(double)arg1;
- (float)_pixelsPerSecond;
- (float)_pixelsPerSecondWithVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (void)_prepareForRendering;
- (void)_renderCenterKeylineIfNeeded;
- (void)_renderSegments:(id)arg1 timeRangeOfSegments:(struct { double x1; double x2; })arg2 isApproximatedWaveform:(BOOL)arg3;
- (void)_renderVisibleTimeRangeImmediately;
- (void)_scheduleTerminateDisplayLink;
- (void)_setNeedsRendering;
- (void)_setNeedsVisibleTimeRangeRendering;
- (void)_setupBuffers;
- (void)_setupGL;
- (void)_setupNotifications;
- (void)_setupShaders;
- (void)_startRendering;
- (void)_startTemporarilyShowingPreGLCenterLine;
- (void)_startUpdating;
- (void)_stopRendering;
- (void)_stopShowingPreGLCenterLine;
- (void)_stopUpdating;
- (void)_teardownNotifications;
- (double)_timeForPixelOffset:(float)arg1;
- (double)_timeForPixelOffset:(float)arg1 withVisibleTimeRange:(struct { double x1; double x2; })arg2;
- (struct { double x1; double x2; })_timeRangeToRenderForVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (void)_updateClearColor;
- (void)_updateForegroundColor;
- (void)_updateHighlightTimeRange;
- (void)_updateModelview;
- (void)_updateProjection;
- (void)_willResignActiveNotification:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (float)contentWidth;
- (float)dataPointWidth;
- (id)dataSource;
- (void)dealloc;
- (BOOL)frequentUpdatesSegmentUpdatesExpectedHint;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)glkViewRenderingContextValidityDidChange:(id)arg1;
- (struct { double x1; double x2; })highlightTimeRange;
- (float)horizontalOffsetAtTime:(double)arg1;
- (float)horizontalOffsetAtTime:(double)arg1 withVisibleTimeRange:(struct { double x1; double x2; })arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isActiveDisplayLinkRequired;
- (BOOL)isPaused;
- (void)loadView;
- (float)pointsPerSecondWithVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (id)rasterizeVisibleTimeRangeWithImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)rendererDelegate;
- (void)setActiveDisplayLinkRequired:(BOOL)arg1;
- (void)setDataPointWidth:(float)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFrequentUpdatesSegmentUpdatesExpectedHint:(BOOL)arg1;
- (void)setHighlightTimeRange:(struct { double x1; double x2; })arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setRendererDelegate:(id)arg1;
- (void)setSpacingWidth:(float)arg1;
- (void)setUIConfiguration:(id)arg1;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1 withAnimationDuration:(double)arg2;
- (float)spacingWidth;
- (double)timeAtHorizontalOffset:(float)arg1;
- (double)timeAtHorizontalOffset:(float)arg1 withVisibleTimeRange:(struct { double x1; double x2; })arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (struct { double x1; double x2; })visibleTimeRange;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
