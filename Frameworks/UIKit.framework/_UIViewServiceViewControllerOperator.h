/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIViewServiceViewControllerOperatorDelegate>, NSArray, NSMutableArray, NSString, UIActionSheet, UIPopoverController, UIViewController, _UIAsyncInvocation, _UIHostedTextServiceSession, _UIHostedWindow, _UIViewControllerOneToOneTransitionContext, _UIViewServiceDummyPopoverController;

@interface _UIViewServiceViewControllerOperator : UIViewController <_UIHostedTextServiceSessionDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceViewControllerOperator_RemoteViewControllerInterface> {
    BOOL __automatic_invalidation_invalidated;
    int __automatic_invalidation_retainCount;
    BOOL _canShowTextServices;
    <_UIViewServiceViewControllerOperatorDelegate> *_delegate;
    NSMutableArray *_deputyRotationDelegates;
    BOOL _disableAutomaticKeyboardBehavior;
    UIPopoverController *_displayedPopoverController;
    _UIViewServiceDummyPopoverController *_dummyPopoverController;
    unsigned int _hostAccessibilityServerPort;
    struct { 
        unsigned int val[8]; 
    } _hostAuditToken;
    NSString *_hostBundleID;
    int _hostPID;
    float _hostStatusBarHeight;
    int _hostStatusBarOrientation;
    UIActionSheet *_hostedActionSheet;
    _UIHostedWindow *_hostedWindow;
    _UIAsyncInvocation *_invalidationInvocation;
    BOOL _isResigningFirstResponderFromHostNotification;
    UIViewController *_localViewController;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _localViewControllerRequestedInsets;
    NSArray *_plugInScenes;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    NSString *_presentationControllerClassName;
    id _remoteViewControllerProxyToOperator;
    id _remoteViewControllerProxyToViewController;
    BOOL _serviceInPopover;
    unsigned int _supportedOrientations;
    _UIHostedTextServiceSession *_textServiceSession;
    _UIViewControllerOneToOneTransitionContext *_viewControllerTransitioningContext;
}

@property(copy,readonly) NSString * debugDescription;
@property <_UIViewServiceViewControllerOperatorDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)XPCInterface;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostBundleID:(id)arg3 hostAuditToken:(struct { unsigned int x1[8]; })arg4;

- (int)__automatic_invalidation_logic;
- (void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 legacyAppearance:(BOOL)arg3 hostAccessibilityServerPort:(id)arg4 canShowTextServices:(BOOL)arg5 replyHandler:(id)arg6;
- (void)__createViewController:(id)arg1 withContextToken:(id)arg2 fbsDisplays:(id)arg3 appearanceSerializedRepresentations:(id)arg4 legacyAppearance:(BOOL)arg5 traitCollection:(id)arg6 initialInterfaceOrientation:(int)arg7 hostAccessibilityServerPort:(id)arg8 canShowTextServices:(BOOL)arg9 replyHandler:(id)arg10;
- (void)__dimmingViewWasTapped;
- (void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(id)arg2;
- (void)__hostDidChangeStatusBarHeight:(float)arg1;
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(int)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostDidPromoteFirstResponder;
- (void)__hostDidRotateFromInterfaceOrientation:(int)arg1 skipSelf:(BOOL)arg2;
- (void)__hostDidSetContentOverlayInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)__hostDidSetPresentationControllerClassName:(id)arg1;
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 legacyAppearance:(BOOL)arg3;
- (void)__hostDisablesAutomaticKeyboardBehavior:(BOOL)arg1;
- (void)__hostReadyToReceiveMessagesFromServiceViewController;
- (void)__hostViewDidAppear:(BOOL)arg1;
- (void)__hostViewDidDisappear:(BOOL)arg1;
- (void)__hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned int)arg1 newHostingHandleReplyHandler:(id)arg2;
- (void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(int)arg2 traitCollection:(id)arg3 statusBarHeight:(float)arg4 completionHandler:(id)arg5;
- (void)__hostViewWillDisappear:(BOOL)arg1;
- (void)__hostViewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withContextDescription:(id)arg2 statusBarHeight:(float)arg3 whenDone:(id)arg4;
- (void)__hostWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
- (void)__hostWillEnterForeground;
- (void)__hostWillRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
- (void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(BOOL)arg3;
- (void)__hostedActionSheetClickedButtonAtIndex:(int)arg1;
- (void)__hostedActionSheetDidDismissWithClickedButtonIndex:(int)arg1;
- (void)__hostedActionSheetDidPresent;
- (void)__prepareForDisconnectionWithCompletionHandler:(id)arg1;
- (void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2;
- (void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(id)arg3;
- (void)__scrollToTopFromTouchAtViewLocation:(struct CGPoint { float x1; float x2; })arg1 resultHandler:(id)arg2;
- (void)__setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(int)arg2;
- (void)__setHostTraitCollection:(id)arg1;
- (void)__setServiceInPopover:(BOOL)arg1;
- (void)__textServiceDidDismiss;
- (id)_appearanceSource;
- (BOOL)_canShowTextServices;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (void)_dismissActionSheet:(id)arg1 withClickedButtonIndex:(int)arg2 animated:(BOOL)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2;
- (void)_firstResponderDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (id)_inputViewsKey;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_isHostedRootViewController;
- (void)_popoverDidDismiss:(id)arg1;
- (void)_popoverWillPresent:(id)arg1;
- (void)_prepareForDisconnectionUnconditionallyThen:(id)arg1;
- (BOOL)_presentActionSheet:(id)arg1 asPopoverFromBarButtonItem:(id)arg2 orFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 inView:(id)arg4 withPreferredArrowDirections:(unsigned int)arg5 passthroughViews:(id)arg6 backgroundStyle:(int)arg7 animated:(BOOL)arg8;
- (BOOL)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(float)arg3;
- (id)_presentationControllerClassName;
- (id)_queue;
- (id)_sessionForStateRestoration:(id)arg1;
- (BOOL)_shouldForwardLegacyRotationOnly;
- (id)_showServiceForText:(id)arg1 type:(int)arg2 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (id)_supportedInterfaceOrientationsForViewController:(id)arg1;
- (BOOL)_tryRetain;
- (void)_updateSupportedInterfaceOrientationsIfNecessary;
- (BOOL)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char *)arg3;
- (id)_viewControllersForRotationCallbacks;
- (void)_viewServiceIsDisplayingPopoverController:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willResignContentViewControllerOfPopover:(id)arg1;
- (void)_windowDidRegisterScrollToTopView;
- (void)_windowDidUnregisterScrollToTopView;
- (void)_windowDidUpdateCurrentTintView:(id)arg1;
- (void)addDeputyRotationDelegate:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)delegate;
- (void)dismissHostedTextServiceSession:(id)arg1 animated:(BOOL)arg2;
- (void)dummyPopoverController:(id)arg1 didChangeContentSize:(struct CGSize { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(BOOL)arg2;
- (void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(id)arg2;
- (id)invalidate;
- (void)loadView;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredFocusedItem;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setDelegate:(id)arg1;
- (void)setNeedsStatusBarAppearanceUpdate;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1;
- (void)viewDidLoad;

@end
