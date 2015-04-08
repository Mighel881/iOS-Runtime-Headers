/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMapTable, NSString, UIPresentationController<_UISearchControllerPresenting>, UIView, _UISearchPresentationAssistant;

@interface _UISearchPresentationController : UIPresentationController <_UISearchControllerPresenting> {
    _UISearchPresentationAssistant *_assistant;
    struct { 
        unsigned int searchBarWasTableHeaderView : 1; 
        unsigned int excisedSearchBarDuringPresentation : 1; 
        unsigned int searchBarWantedAutolayoutBeforeExcision : 1; 
    } _controllerFlags;
    NSMapTable *_excisedSearchBarConstraitMap;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _finalFrameForContainerView;
    NSMapTable *_placeholderConstraitMap;
    UIView *_placeholderView;
}

@property(readonly) UIPresentationController<_UISearchControllerPresenting> * adaptivePresentationController;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } finalFrameForContainerView;
@property(readonly) unsigned int hash;
@property(readonly) float resultsControllerContentOffset;
@property(retain,readonly) UIView * searchBarContainerView;
@property(readonly) BOOL searchBarToBecomeTopAttached;
@property(readonly) BOOL shouldAccountForStatusBar;
@property(readonly) float statusBarAdjustment;
@property(readonly) Class superclass;

+ (BOOL)shouldExciseSearchBar:(id)arg1 duringPresentationWithPresenter:(id)arg2;

- (void)_exciseSearchBarFromCurrentContext;
- (void)_placeSearchBarBackIntoOriginalContext;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionToWillBegin;
- (void)_updateContainerFinalFrameForNonExcisedSearchBar;
- (void)_updatePresentingViewControllerContentScrollViewWithOffsets:(struct CGSize { float x1; float x2; })arg1 transitionCoordinator:(id)arg2;
- (float)_visibleRefreshControlHeightForTableView:(id)arg1;
- (id)adaptivePresentationController;
- (int)adaptivePresentationStyle;
- (void)dealloc;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })finalFrameForContainerView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (float)resultsControllerContentOffset;
- (id)searchBarContainerView;
- (BOOL)searchBarToBecomeTopAttached;
- (void)setContentVisible:(BOOL)arg1;
- (BOOL)shouldAccountForStatusBar;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (float)statusBarAdjustment;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
