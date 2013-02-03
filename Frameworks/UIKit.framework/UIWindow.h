/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder, NSMutableArray, UIScreen, UIView, NSUndoManager, UIViewController, CALayer, UIColor, NSMutableSet;

@interface UIWindow : UIView {
    struct { 
        unsigned int delegateWillRotate : 1; 
        unsigned int delegateDidRotate : 1; 
        unsigned int delegateWillAnimateFirstHalf : 1; 
        unsigned int delegateDidAnimationFirstHalf : 1; 
        unsigned int delegateWillAnimateSecondHalf : 1; 
        unsigned int autorotatesToPortrait : 1; 
        unsigned int autorotatesToPortraitUpsideDown : 1; 
        unsigned int autorotatesToLandscapeLeft : 1; 
        unsigned int autorotatesToLandscapeRight : 1; 
        unsigned int dontBecomeKeyOnOrderFront : 1; 
        unsigned int output : 1; 
        unsigned int inGesture : 1; 
        unsigned int cancelScroller : 1; 
        unsigned int bitsPerComponent : 4; 
        unsigned int autorotates : 1; 
        unsigned int isRotating : 1; 
        unsigned int isUsingOnePartRotationAnimation : 1; 
        unsigned int isHandlingContentRotation : 1; 
        unsigned int disableAutorotationCount : 4; 
        unsigned int needsAutorotationWhenReenabled : 1; 
        unsigned int forceTwoPartRotationAnimation : 1; 
        unsigned int orderKeyboardInAfterRotating : 1; 
        unsigned int roundedCorners : 4; 
        unsigned int resizesToFullScreen : 1; 
        unsigned int keepContextInBackground : 1; 
        unsigned int ignoreSetHidden : 1; 
        unsigned int forceVisibleOnInit : 1; 
        unsigned int settingFirstResponder : 1; 
    id _delegate;
    UIView *_exclusiveTouchView;
    id _fingerInfo;
    UIResponder *_firstResponder;
    UIView *_lastMouseDownView;
    UIView *_lastMouseEnteredView;
    id _layerContext;
    UIViewController *_rootViewController;
    NSMutableArray *_rotationViewControllers;
    UIColor *_savedBackgroundColor;
    UIScreen *_screen;
    NSMutableSet *_subtreeMonitoringViews;
    id _touchData;
    CALayer *_transformLayer;
    NSUndoManager *_undoManager;
    int _viewOrientation;
    id _windowController;
    } _windowFlags;
    float _windowLevel;
    float _windowSublevel;
}

@property(getter=isKeyWindow,readonly) BOOL keyWindow;
@property(retain) UIViewController * rootViewController;
@property(retain) UIScreen * screen;
@property float windowLevel;

+ (void)_clearKeyWindowStack;
+ (id)_findWithDisplayPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)_hitTestToPoint:(struct CGPoint { float x1; float x2; })arg1 pathIndex:(int)arg2 forEvent:(id)arg3;
+ (unsigned int)_keyWindowStackSize;
+ (void)_noteStatusBarHeightChanged:(float)arg1 oldHeight:(float)arg2;
+ (void)_popKeyWindow;
+ (void)_prepareWindowsForAppResume;
+ (void)_prepareWindowsForAppSuspend;
+ (void)_pushKeyWindow:(id)arg1;
+ (void)_setKeyWindowStackEnabled:(BOOL)arg1;
+ (void)_synchronizeDrawing;
+ (unsigned int)_synchronizeDrawingAcrossProcesses;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
+ (id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })constrainFrameToScreen:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void*)createIOSurfaceWithContextId:(unsigned int)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg4;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 usePurpleGfx:(BOOL)arg4 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg5;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (void*)createScreenIOSurface;
+ (id)keyWindow;
+ (Class)layerClass;
+ (struct __IOSurface { }*)newCreatedScreenIOSurface;
+ (void)setAllWindowsKeepContextInBackground:(BOOL)arg1;

- (void)_addRotationViewController:(id)arg1;
- (BOOL)_becomeFirstResponderWhenPossible;
- (void)_beginModalSession;
- (BOOL)_clearMouseView;
- (void)_clearPendingKeyboardChanges;
- (id)_clientsForRotation;
- (void)_commonInit;
- (BOOL)_containedInAbsoluteResponderChain;
- (unsigned int)_contextId;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 toWindow:(id)arg2;
- (void)_createContext;
- (int)_degreesToRotateFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2;
- (void)_destroyContext;
- (BOOL)_disableGroupOpacity;
- (BOOL)_disableViewScaling;
- (void)_endModalSession;
- (id)_exclusiveTouchView;
- (void)_finishedFirstHalfRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)_firstResponder;
- (void)_forceTwoPartRotationAnimation:(BOOL)arg1;
- (void)_handleDeviceOrientationChange:(id)arg1;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (BOOL)_hasContext;
- (BOOL)_ignoresHitTest;
- (BOOL)_isAnyWindowRotating;
- (BOOL)_isClassicControllerWindow;
- (BOOL)_isScrollingEnabledForView:(id)arg1;
- (BOOL)_isSettingFirstResponder;
- (BOOL)_isStatusBarWindow;
- (BOOL)_isTextEffectsWindow;
- (BOOL)_isWindowServerHostingManaged;
- (void)_matchDeviceBounds;
- (void)_orderFrontWithoutMakingKey;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(int)arg3;
- (void)_registerChargedView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (void)_registerSwipeView:(id)arg1;
- (void)_registerViewForSubtreeMonitoring:(id)arg1;
- (void)_removeRotationViewController:(id)arg1;
- (id)_rotationViewControllers;
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(struct CGPoint { float x1; float x2; })arg1;
- (void)_sendGesturesForEvent:(id)arg1;
- (void)_sendTouchesForEvent:(id)arg1;
- (void)_setCancelScroller:(BOOL)arg1;
- (void)_setExclusiveTouchView:(id)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_setHidden:(BOOL)arg1 forced:(BOOL)arg2;
- (void)_setIsSettingFirstResponder:(BOOL)arg1;
- (void)_setLayerHidden:(BOOL)arg1;
- (void)_setMouseDownView:(id)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)_setMouseEnteredView:(id)arg1;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5;
- (void)_setRotatableViewOrientation:(int)arg1 duration:(double)arg2 force:(BOOL)arg3;
- (void)_setRotatableViewOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_slideFooterFromOrientation:(int)arg1 toOrientation:(int)arg2 startSnapshot:(id)arg3 endSnapshot:(id)arg4 duration:(double)arg5;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(int)arg4;
- (id)_subtreeMonitorsForView:(id)arg1;
- (void)_tagAsSpringboardPresentationWindow;
- (id)_targetForStolenStatusBarTouchesAtPoint:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 excludingWindow:(id)arg3;
- (id)_touchData;
- (struct CGPoint { float x1; float x2; })_transformDisplayToWindowCoordinates:(struct CGPoint { float x1; float x2; })arg1;
- (void)_unregisterChargedView:(id)arg1;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_unregisterSwipeView:(id)arg1;
- (void)_unregisterViewForSubtreeMonitoring:(id)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientation;
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)arg1;
- (void)_updateStatusBarToInterfaceOrientation:(int)arg1 duration:(double)arg2 fenceID:(int)arg3 animation:(int)arg4;
- (void)_updateStatusBarToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_updateToInterfaceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_updateToInterfaceOrientation:(int)arg1 duration:(double)arg2 force:(BOOL)arg3;
- (void)_updateTransformLayer;
- (void)_updateTransformLayerForClassicPresentation;
- (id)_window;
- (void)addRootViewControllerViewIfPossible;
- (id)addTouchCaptureViewWithTag:(int)arg1;
- (BOOL)autorotates;
- (void)awakeFromNib;
- (void)becomeKeyWindow;
- (void)beginDisablingInterfaceAutorotation;
- (int)bitsPerComponent;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contentView;
- (struct CGPoint { float x1; float x2; })convertDeviceToWindow:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toWindow:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromWindow:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertWindowToDevice:(struct CGPoint { float x1; float x2; })arg1;
- (id)copyIOSurfaceSnapshotView:(int)arg1;
- (void*)createIOSurface;
- (void*)createIOSurfaceWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)defaultFirstResponder;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)endDisablingInterfaceAutorotation;
- (void)endDisablingInterfaceAutorotationAnimated:(BOOL)arg1;
- (id)firstResponder;
- (void)handleStatusBarChangeFromHeight:(float)arg1 toHeight:(float)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)interfaceOrientation;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isInterfaceAutorotationDisabled;
- (BOOL)isInternalWindow;
- (BOOL)isKeyWindow;
- (BOOL)isRotating;
- (BOOL)isUsingOnePartRotationAnimation;
- (BOOL)keepContextInBackground;
- (float)level;
- (void)makeKey:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)makeKeyAndVisible;
- (void)makeKeyWindow;
- (void)matchDeviceOrientation;
- (struct __IOSurface { }*)newCreatedIOSurface;
- (id)nextResponder;
- (void)orderFront:(id)arg1;
- (void)orderOut:(id)arg1;
- (void)redo:(id)arg1;
- (void)removeFromSuperview;
- (id)removeTouchCaptureViewWithTag:(int)arg1;
- (id)representation;
- (void)resignKeyWindow;
- (BOOL)resizesToFullScreen;
- (id)rootViewController;
- (id)screen;
- (void)sendEvent:(id)arg1;
- (void)setAutorotates:(BOOL)arg1 forceUpdateInterfaceOrientation:(BOOL)arg2;
- (void)setAutorotates:(BOOL)arg1;
- (void)setBecomeKeyOnOrderFront:(BOOL)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setKeepContextInBackground:(BOOL)arg1;
- (void)setLevel:(float)arg1;
- (void)setResizesToFullScreen:(BOOL)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setScreen:(id)arg1;
- (void)setWindowLevel:(float)arg1;
- (void)setupForOrientation:(int)arg1;
- (void)synchronizeDrawingWithID:(int)arg1 count:(unsigned int)arg2;
- (void)synchronizeDrawingWithID:(int)arg1;
- (void)undo:(id)arg1;
- (id)undoManager;
- (struct CGPoint { float x1; float x2; })warpPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)windowLevel;
- (int)windowOutput;

@end
