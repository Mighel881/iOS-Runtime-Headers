/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIAccountButtonsComponent, SKUIAccountButtonsViewController;

@interface SKUIAccountButtonsSection : SKUIStorePageSection <SKUIAccountButtonsDelegate> {
    SKUIAccountButtonsViewController *_accountButtonsViewController;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) SKUIAccountButtonsComponent * pageComponent;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountButtonsViewController;
- (void)accountButtonsViewControllerDidSignIn:(id)arg1;
- (void)accountButtonsViewControllerDidSignOut:(id)arg1;
- (void)accountButtonsViewControllerDidTapECommerceLink:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (int)numberOfCells;
- (void)willAppearInContext:(id)arg1;

@end
