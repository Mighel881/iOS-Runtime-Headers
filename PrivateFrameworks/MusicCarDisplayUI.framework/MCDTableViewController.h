/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class UIView;

@interface MCDTableViewController : MPUTableViewController {
    UIView *_nowPlayingButton;
    BOOL _shouldHideIndexTitles;
}

@property BOOL shouldHideIndexTitles;

+ (Class)_tableViewClass;

- (void).cxx_destruct;
- (id)MPU_createNowPlayingButton;
- (void)_MCD_nowPlayingButtonAction:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (BOOL)_viewControllerWasSelected;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (id)preferredFocusedItem;
- (void)reloadData;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setShouldHideIndexTitles:(BOOL)arg1;
- (BOOL)shouldHideIndexTitles;
- (BOOL)shouldScrollToFirstDataSourceSectionOnInitialAppearance;
- (BOOL)tableView:(id)arg1 shouldChangeFocusedItem:(id)arg2 fromRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
