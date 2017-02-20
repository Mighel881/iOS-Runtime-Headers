/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVMLCollectionViewController : UIViewController <TVAppTemplateImpressionable, UICollectionViewDataSource, _TVCollectionViewDelegate, _TVConfirmationPreviewInteractionControllerDelegate, _TVSubviewPreloading> {
    struct TVCellMetrics { 
        struct CGSize { 
            float width; 
            float height; 
        } cellSize; 
        struct UIEdgeInsets { 
            float top; 
            float left; 
            float bottom; 
            float right; 
        } cellPadding; 
        struct UIEdgeInsets { 
            float top; 
            float left; 
            float bottom; 
            float right; 
        } cellInset; 
        struct UIEdgeInsets { 
            float top; 
            float left; 
            float bottom; 
            float right; 
        } cellInsetAlt; 
        struct UIEdgeInsets { 
            float top; 
            float left; 
            float bottom; 
            float right; 
        } cellMargin; 
    }  _cellMetrics;
    IKCollectionElement * _collectionElement;
    UICollectionView * _collectionView;
    BOOL  _didAppear;
    IKViewElement * _headerElement;
    UIViewController * _headerViewController;
    BOOL  _ignoreNextSelect;
    float  _impressionThreshold;
    NSIndexPath * _lastFocusedIndexPath;
    BOOL  _needsMoreContent;
    _TVConfirmationPreviewInteractionController * _previewInteractionController;
    _TVShadowViewElement * _shadowViewElement;
}

@property (nonatomic, readonly) struct TVCellMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct UIEdgeInsets { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; struct UIEdgeInsets { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; struct UIEdgeInsets { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; } cellMetrics;
@property (nonatomic, readonly, retain) IKCollectionElement *collectionElement;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, readonly, retain) _TVCollectionWrappingView *collectionWrappingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) IKViewElement *headerElement;
@property (nonatomic, retain) UIViewController *headerViewController;
@property (nonatomic, copy) NSIndexPath *lastFocusedIndexPath;
@property (nonatomic, retain) _TVShadowViewElement *shadowViewElement;
@property (readonly) Class superclass;

+ (id)_shadowViewElementForCollectionElement:(id)arg1;
+ (id)headerElementFromCollectionElement:(id)arg1;

- (void).cxx_destruct;
- (void)_cancelImpressionsUpdate;
- (void)_confirmationPreviewInteractionControllerShouldBegin;
- (void)_doUpdateViewLayoutAnimated:(BOOL)arg1 relayout:(BOOL)arg2;
- (void)_evaluateNeedsMoreContent;
- (void)_recordImpressionsForVisibleView;
- (void)_registerCellClassesInCollectionView:(id)arg1;
- (void)_updateHeaderView;
- (void)_updateImpressions;
- (struct TVCellMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct UIEdgeInsets { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; struct UIEdgeInsets { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; struct UIEdgeInsets { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; })cellMetrics;
- (id)collectionElement;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionWrappingView;
- (void)dealloc;
- (void)dispatchEventOfType:(unsigned int)arg1 forItemAtIndexPath:(id)arg2 completionBlock:(id /* block */)arg3;
- (struct CGSize { float x1; float x2; })expectedCellSizeForElement:(id)arg1;
- (id)headerElement;
- (id)headerViewController;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)lastFocusedIndexPath;
- (void)loadView;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)preloadSubviewsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setLastFocusedIndexPath:(id)arg1;
- (void)setShadowViewElement:(id)arg1;
- (id)shadowViewElement;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tv_updateViewLayout;
- (void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct UIEdgeInsets { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; struct UIEdgeInsets { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; struct UIEdgeInsets { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; })arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
