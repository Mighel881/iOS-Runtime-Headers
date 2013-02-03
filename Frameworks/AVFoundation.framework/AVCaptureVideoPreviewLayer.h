/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, AVCaptureVideoPreviewLayerInternal, AVCaptureSession;

@interface AVCaptureVideoPreviewLayer : CALayer {
    AVCaptureVideoPreviewLayerInternal *_internal;
}

@property BOOL automaticallyAdjustsMirroring;
@property(getter=isMirrored) BOOL mirrored;
@property(getter=isMirroringSupported,readonly) BOOL mirroringSupported;
@property int orientation;
@property(getter=isOrientationSupported,readonly) BOOL orientationSupported;
@property(retain) AVCaptureSession * session;
@property(copy) NSString * videoGravity;

+ (void)initialize;
+ (id)layerWithSession:(id)arg1;

- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (id)activeConnections;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (BOOL)automaticallyAdjustsMirroring;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (void)centerSublayer;
- (id)connectionMediaTypes;
- (id)connections;
- (void)dealloc;
- (void)didStartForSession:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (id)initWithSession:(id)arg1;
- (BOOL)isChromaNoiseReductionEnabled;
- (BOOL)isChromaNoiseReductionSupported;
- (BOOL)isMirrored;
- (BOOL)isMirroringSupported;
- (BOOL)isOrientationSupported;
- (BOOL)isPaused;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)layoutSublayers;
- (id)notReadyError;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)orientation;
- (float)previewRotationDegrees;
- (void)removeConnection:(id)arg1;
- (id)session;
- (void)setAutomaticallyAdjustsMirroring:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setChromaNoiseReductionEnabled:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setMirrored:(BOOL)arg1;
- (void)setOrientation:(int)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setSession:(id)arg1;
- (void)setVideoGravity:(id)arg1;
- (id)subLayer;
- (id)videoGravity;

@end
