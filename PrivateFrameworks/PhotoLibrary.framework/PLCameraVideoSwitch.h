/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, UIImage;

@interface PLCameraVideoSwitch : UIControl {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _on : 1;
    unsigned int _didLayoutViews : 1;
    unsigned int _didMove : 1;
    unsigned int _lockEnabled : 1;
    UIImage *_backgroundImage;
    UIImageView *_backgroundImageView;
    int _buttonBarStyle;
    UIImage *_cameraImage;
    UIImageView *_cameraImageView;
    UIImage *_cameraLandscapeImage;
    UIImage *_handleDownImage;
    UIImage *_handleImage;
    UIImageView *_handleImageView;
    } _hitRect;
    int _orientation;
    float _trackingHorizontalLocation;
    UIImage *_videoImage;
    UIImageView *_videoImageView;
    UIImage *_videoLandscapeImage;
    BOOL _watchingOrientationChanges;
    UIImage *_wellImage;
    UIImageView *_wellImageView;
}

@property(getter=isOn) BOOL on;

- (void)_animateImageView:(id)arg1 toTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 withImage:(id)arg3 animated:(BOOL)arg4;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_loadInitialResources;
- (void)_loadLandscapeResources;
- (void)_loadTrackingResources;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_rotationTransformForDeviceOrientation:(int)arg1;
- (void)_setOn:(BOOL)arg1 animationDuration:(float)arg2;
- (void)_startWatchingDeviceOrientationChanges;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)_updateEnabledness;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 buttonBarStyle:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isOn;
- (void)layoutSubviews;
- (int)orientation;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setButtonOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setLockEnabled:(BOOL)arg1;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setOn:(BOOL)arg1;

@end
