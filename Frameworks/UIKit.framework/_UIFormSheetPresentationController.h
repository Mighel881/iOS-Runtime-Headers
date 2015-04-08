/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDimmingView, UIDropShadowView;

@interface _UIFormSheetPresentationController : UIPresentationController {
    UIDimmingView *_dimmingView;
    UIDropShadowView *_dropShadowView;
    BOOL _layoutStateShouldAvoidKeyboard;
}

- (void)_changeLayoutModeToAvoidKeyboard:(BOOL)arg1;
- (int)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (float)_dropShadowCornerRadius;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameOfPresentedViewControllerViewInSuperview;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (id)_presentationView;
- (BOOL)_shouldChangeStatusBarViewController;
- (BOOL)_shouldHideBottomCorner;
- (BOOL)_shouldOccludeDuringPresentation;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (unsigned int)dropShadowAutoresizingMask;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (int)presentationStyle;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (BOOL)shouldSubscribeToKeyboardNotifications;
- (struct CGSize { float x1; float x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { float x1; float x2; })arg2;

@end
