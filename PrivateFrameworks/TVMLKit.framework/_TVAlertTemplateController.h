/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVAlertTemplateController : _TVBgImageLoadingViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, _TVCollectionViewDelegate> {
    IKImageElement * _bgHeroImageElement;
    IKImageElement * _bgImageElement;
    NSArray * _buttonElements;
    _TVCollectionView * _collectionView;
    NSIndexPath * _lastFocusedIndexPath;
    IKViewElement * _templateElement;
    BOOL  _updateAutoHighlight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundImageProxy;
- (struct CGSize { float x1; float x2; })_backgroundImageProxySize;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (void)_scrollToPreferredFocusView;
- (BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (void)updateWithTemplateElement:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidLayoutSubviews;

@end
