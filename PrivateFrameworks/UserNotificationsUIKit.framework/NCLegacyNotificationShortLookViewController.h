/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCLegacyNotificationShortLookViewController : NCNotificationShortLookViewController {
    UIView * _backgroundView;
}

@property (nonatomic, retain) UIView *backgroundView;

- (void).cxx_destruct;
- (void)_backgroundTapGesture:(id)arg1;
- (void)_configureScrollViewIfNecessary;
- (void)_finishAdditionalContentReveal;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_legacyLookViewIfLoaded;
- (void)_loadLookView;
- (id)_newTransitionManager;
- (void)_notificationViewControllerViewDidLoad;
- (struct CGSize { float x1; float x2; })_preferredCustomContentSizeForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_resizeLegacyScrollViewToFitContentSize;
- (void)_resizeLegacyScrollViewToFitContentSizeWithKeyboardFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setCustomContentProvidingViewController:(id)arg1;
- (void)_setupCustomContentProvider;
- (BOOL)_tryDismissingShortLookInScrollView:(id)arg1;
- (void)_updateScrollViewContentSize;
- (void)_updateWithProvidedCustomContent;
- (id)backgroundView;
- (BOOL)dismissPresentedViewControllerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2;
- (void)expandAndPlayAudioMessage;
- (BOOL)hasCommittedToPresentingCustomContentProvidingViewController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentLongLook:(id /* block */)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)transitioningDelegate:(id)arg1 didFinishDismissalOfViewController:(id)arg2 completed:(BOOL)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)wantsUseableContainerHeightForTransitionWithDelegate:(id)arg1;

@end
