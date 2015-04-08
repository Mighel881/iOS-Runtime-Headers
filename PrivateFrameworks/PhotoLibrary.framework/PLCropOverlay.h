/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAMBottomBar, NSString, PLContactPhotoOverlay, PLCropOverlayBottomBar, PLCropOverlayCropView, PLCropOverlayWallpaperBottomBar, PLProgressHUD, UIButton, UIImageView, UILabel, UIToolbar, UIView;

@interface PLCropOverlay : UIView {
    PLCropOverlayBottomBar *__bottomBar;
    UIButton *__cameraCancelButton;
    UIImageView *_bottomShineView;
    PLContactPhotoOverlay *_contactPhotoOverlay;
    unsigned int _controlsAreVisible : 1;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropRect;
    unsigned int _cropRectIsVisible : 1;
    PLCropOverlayCropView *_cropView;
    UIToolbar *_customToolbar;
    NSString *_defaultOKButtonTitle;
    id _delegate;
    BOOL _displayedInPopover;
    PLProgressHUD *_hud;
    BOOL _isEditingHomeScreen;
    BOOL _isEditingLockScreen;
    int _mode;
    BOOL _motionToggleIsOn;
    unsigned int _offsetStatusBar : 1;
    UIButton *_okButton;
    UIView *_overlayContainerView;
    unsigned int _previewMode : 1;
    UIImageView *_shadowView;
    unsigned int _showsCropRegion : 1;
    float _statusBarHeight;
    UILabel *_titleLabel;
    unsigned int _tookPhoto : 1;
    UIImageView *_topShineView;
    UIView *_wildcatPickerBottomView;
    UIView *_wildcatPickerTopView;
}

@property(readonly) PLCropOverlayBottomBar * _bottomBar;
@property(readonly) UIButton * _cameraCancelButton;
@property(retain) CAMBottomBar * cameraBottomBar;
@property(readonly) PLContactPhotoOverlay * contactPhotoOverlay;
@property(copy) NSString * defaultOKButtonTitle;
@property(getter=isDisplayedInPopover) BOOL displayedInPopover;
@property BOOL isEditingHomeScreen;
@property BOOL isEditingLockScreen;
@property BOOL motionToggleHidden;
@property BOOL motionToggleIsOn;
@property BOOL previewMode;
@property(readonly) PLCropOverlayWallpaperBottomBar * wallpaperBottomBar;

- (void)_backgroundSavePhoto:(id)arg1;
- (id)_bottomBar;
- (id)_cameraCancelButton;
- (void)_createCropView;
- (void)_fadeOutCompleted:(id)arg1;
- (id)_irisView;
- (id)_newOverlayViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 lighterEdgeOnTop:(BOOL)arg2;
- (void)_pauseButtonPressed:(id)arg1;
- (void)_playButtonPressed:(id)arg1;
- (void)_savePhotoFinished:(id)arg1;
- (void)_setMode:(int)arg1;
- (void)_tappedBottomBarCancelButton:(id)arg1;
- (void)_tappedBottomBarDoneButton:(id)arg1;
- (void)_tappedBottomBarMotionToggle;
- (void)_tappedBottomBarPlaybackButton:(id)arg1;
- (void)_tappedBottomBarSetBothButton;
- (void)_tappedBottomBarSetHomeButton;
- (void)_tappedBottomBarSetLockButton;
- (void)_updateCropRectInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateEditImageDoneButtonTitle;
- (void)_updateMotionToggle;
- (void)_updateTitle;
- (void)_updateToolbarItems:(BOOL)arg1;
- (void)_updateWallpaperBottomBarSettingButtons;
- (void)beginBackgroundSaveWithTile:(id)arg1 progressTitle:(id)arg2 completionCallbackTarget:(id)arg3 options:(int)arg4;
- (id)bottomBar;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bottomBarFrame;
- (id)cameraBottomBar;
- (void)cancelButtonClicked:(id)arg1;
- (id)contactPhotoOverlay;
- (BOOL)controlsAreVisible;
- (void)cropOverlayBottomBarPauseButtonClicked:(id)arg1;
- (void)cropOverlayBottomBarPlayButtonClicked:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;
- (void)dealloc;
- (id)defaultOKButtonTitle;
- (void)didCapturePhoto;
- (void)didCaptureVideo;
- (void)didPauseVideo;
- (void)didPlayVideo;
- (void)dismiss;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 mode:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 mode:(int)arg2 offsettingStatusBar:(BOOL)arg3;
- (void)insertIrisView:(id)arg1;
- (BOOL)isDisplayedInPopover;
- (BOOL)isEditingHomeScreen;
- (BOOL)isEditingLockScreen;
- (BOOL)isTelephonyUIMode:(int)arg1;
- (BOOL)isWallpaperUIMode:(int)arg1;
- (void)layoutSubviews;
- (int)mode;
- (BOOL)motionToggleHidden;
- (BOOL)motionToggleIsOn;
- (id)overlayContainerView;
- (BOOL)previewMode;
- (void)removeProgress;
- (void)setCameraBottomBar:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setControlsAreVisible:(BOOL)arg1;
- (void)setCropRectVisible:(BOOL)arg1 duration:(float)arg2;
- (void)setDefaultOKButtonTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedInPopover:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setIsEditingHomeScreen:(BOOL)arg1;
- (void)setIsEditingLockScreen:(BOOL)arg1;
- (void)setMotionToggleHidden:(BOOL)arg1;
- (void)setMotionToggleIsOn:(BOOL)arg1;
- (void)setOKButtonShowsCamera:(BOOL)arg1;
- (void)setOKButtonTitle:(id)arg1;
- (void)setOverlayContainerView:(id)arg1;
- (void)setPreviewMode:(BOOL)arg1;
- (void)setProgressDone;
- (void)setShowProgress:(BOOL)arg1 title:(id)arg2;
- (void)setShowsCropRegion:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 okButtonTitle:(id)arg2;
- (void)setTitleHidden:(BOOL)arg1 animationDuration:(float)arg2;
- (void)statusBarHeightDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRect;
- (id)wallpaperBottomBar;

@end
