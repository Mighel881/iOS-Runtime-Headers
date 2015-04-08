/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class <PSSpecifierDataSource>, NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UIActionSheet, UIAlertView, UIColor, UIKeyboard, UIPopoverController, UITableView, UIView;

@interface PSListController : PSViewController <PSSpecifierObserver, PSViewControllerOffsetProtocol, UIActionSheetDelegate, UIAlertViewDelegate, UIAppearance, UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    UIColor *_altTextColor;
    UIColor *_backgroundColor;
    NSMutableArray *_bundleControllers;
    BOOL _bundlesLoaded;
    UIColor *_buttonTextColor;
    BOOL _cachesCells;
    UIColor *_cellAccessoryColor;
    UIColor *_cellAccessoryHighlightColor;
    UIColor *_cellHighlightColor;
    NSMutableDictionary *_cells;
    UIView *_containerView;
    struct CGPoint { 
        float x; 
        float y; 
    } _contentOffsetWithKeyboard;
    <PSSpecifierDataSource> *_dataSource;
    BOOL _edgeToEdgeCells;
    UIColor *_editableInsertionPointColor;
    UIColor *_editablePlaceholderTextColor;
    UIColor *_editableSelectionBarColor;
    UIColor *_editableSelectionHighlightColor;
    UIColor *_editableTextColor;
    UIColor *_footerHyperlinkColor;
    BOOL _forceSynchronousIconLoadForCreatedCells;
    UIColor *_foregroundColor;
    NSMutableArray *_groups;
    BOOL _hasAppeared;
    NSString *_highlightItemName;
    BOOL _isVisible;
    UIKeyboard *_keyboard;
    BOOL _keyboardWasVisible;
    NSString *_offsetItemName;
    NSDictionary *_pendingURLResourceDictionary;
    BOOL _popupIsDismissing;
    BOOL _popupIsModal;
    UIPopoverController *_popupStylePopoverController;
    BOOL _popupStylePopoverShouldRePresent;
    NSMutableArray *_prequeuedReusablePSTableCells;
    BOOL _requestingSpecifiersFromDataSource;
    BOOL _reusesCells;
    NSIndexPath *_savedSelectedIndexPath;
    UIColor *_segmentedSliderTrackColor;
    UIColor *_separatorColor;
    BOOL _showingSetupController;
    NSString *_specifierID;
    NSString *_specifierIDPendingPush;
    NSArray *_specifiers;
    NSMutableDictionary *_specifiersByID;
    BOOL _swapAlertButtons;
    UITableView *_table;
    UIColor *_textColor;
    BOOL _usesDarkTheme;
    float _verticalContentOffset;
}

@property(retain) UIColor * altTextColor;
@property(retain) UIColor * backgroundColor;
@property(retain) UIColor * buttonTextColor;
@property(retain) UIColor * cellAccessoryColor;
@property(retain) UIColor * cellAccessoryHighlightColor;
@property(retain) UIColor * cellHighlightColor;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL edgeToEdgeCells;
@property(retain) UIColor * editableInsertionPointColor;
@property(retain) UIColor * editablePlaceholderTextColor;
@property(retain) UIColor * editableSelectionBarColor;
@property(retain) UIColor * editableSelectionHighlightColor;
@property(retain) UIColor * editableTextColor;
@property BOOL extendedLayoutIncludesOpaqueBars;
@property(retain) UIColor * footerHyperlinkColor;
@property BOOL forceSynchronousIconLoadForCreatedCells;
@property(retain) UIColor * foregroundColor;
@property(readonly) unsigned int hash;
@property(readonly) int observerType;
@property(retain) NSDictionary * pendingURLResourceDictionary;
@property(retain) UIColor * segmentedSliderTrackColor;
@property(retain) UIColor * separatorColor;
@property(copy) NSString * specifierIDPendingPush;
@property(readonly) Class superclass;
@property(retain) UIColor * textColor;
@property BOOL usesDarkTheme;

+ (id)appearance;
+ (id)appearanceWhenContainedIn:(Class)arg1;
+ (BOOL)displaysButtonBar;

- (void)_addIdentifierForSpecifier:(id)arg1;
- (id)_createGroupIndices:(id)arg1;
- (id)_customViewForSpecifier:(id)arg1 class:(Class)arg2 isHeader:(BOOL)arg3;
- (BOOL)_getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierAtIndex:(int)arg3 groups:(id)arg4;
- (float)_getKeyboardIntersectionHeightFromUserInfo:(id)arg1;
- (void)_handleActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (BOOL)_isRegularWidth;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_loadBundleControllers;
- (void)_moveSpecifierAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 animated:(BOOL)arg3;
- (int)_nextGroupInSpecifiersAfterIndex:(int)arg1 inArray:(id)arg2;
- (void)_performHighlightForSpecifierWithID:(id)arg1;
- (void)_performHighlightForSpecifierWithID:(id)arg1 tryAgainIfFailed:(BOOL)arg2;
- (void)_removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (void)_removeIdentifierForSpecifier:(id)arg1;
- (void)_returnKeyPressed:(id)arg1;
- (void)_scrollToSpecifierNamed:(id)arg1;
- (void)_setContentInset:(float)arg1;
- (void)_setNotShowingSetupController;
- (float)_tableView:(id)arg1 heightForCustomInSection:(int)arg2 isHeader:(BOOL)arg3;
- (id)_tableView:(id)arg1 viewForCustomInSection:(int)arg2 isHeader:(BOOL)arg3;
- (void)_unloadBundleControllers;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)addSpecifier:(id)arg1;
- (void)addSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)addSpecifiersFromArray:(id)arg1;
- (void)addSpecifiersFromArray:(id)arg1 animated:(BOOL)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)altTextColor;
- (id)backgroundColor;
- (void)beginUpdates;
- (id)bundle;
- (id)buttonTextColor;
- (id)cachedCellForSpecifier:(id)arg1;
- (id)cachedCellForSpecifierID:(id)arg1;
- (id)cellAccessoryColor;
- (id)cellAccessoryHighlightColor;
- (id)cellHighlightColor;
- (void)clearCache;
- (void)clearPendingURL;
- (void)confirmationViewAcceptedForSpecifier:(id)arg1;
- (void)confirmationViewCancelledForSpecifier:(id)arg1;
- (BOOL)containsSpecifier:(id)arg1;
- (void)contentSizeChangedNotificationPosted:(id)arg1;
- (void)contentSizeDidChange:(id)arg1;
- (id)controllerForRowAtIndexPath:(id)arg1;
- (id)controllerForSpecifier:(id)arg1;
- (void)createGroupIndices;
- (void)createPrequeuedPSTableCells:(unsigned int)arg1;
- (void)dataSource:(id)arg1 performUpdates:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)dismissConfirmationViewForSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)dismissPopover;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (BOOL)edgeToEdgeCells;
- (id)editableInsertionPointColor;
- (id)editablePlaceholderTextColor;
- (id)editableSelectionBarColor;
- (id)editableSelectionHighlightColor;
- (id)editableTextColor;
- (void)endUpdates;
- (id)findFirstVisibleResponder;
- (id)footerHyperlinkColor;
- (BOOL)forceSynchronousIconLoadForCreatedCells;
- (id)foregroundColor;
- (void)formSheetViewWillDisappear;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifier:(id)arg3;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierAtIndex:(int)arg3;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierID:(id)arg3;
- (BOOL)handlePendingURL;
- (void)handleURL:(id)arg1;
- (void)highlightSpecifierWithID:(id)arg1;
- (int)indexForIndexPath:(id)arg1;
- (int)indexForRow:(int)arg1 inGroup:(int)arg2;
- (int)indexOfGroup:(int)arg1;
- (int)indexOfSpecifier:(id)arg1;
- (int)indexOfSpecifierID:(id)arg1;
- (id)indexPathForIndex:(int)arg1;
- (id)indexPathForSpecifier:(id)arg1;
- (id)init;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2 animated:(BOOL)arg3;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 atIndex:(int)arg2;
- (void)insertSpecifier:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (void)invalidateSpecifiersForDataSource:(id)arg1;
- (void)lazyLoadBundle:(id)arg1;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3;
- (void)loadView;
- (void)loseFocus;
- (void)migrateSpecifierMetadataFrom:(id)arg1 to:(id)arg2;
- (int)numberOfGroups;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)observerType;
- (id)pendingURLResourceDictionary;
- (BOOL)performActionForSpecifier:(id)arg1;
- (BOOL)performButtonActionForSpecifier:(id)arg1;
- (BOOL)performConfirmationActionForSpecifier:(id)arg1;
- (BOOL)performConfirmationCancelActionForSpecifier:(id)arg1;
- (BOOL)performLoadActionForSpecifier:(id)arg1;
- (void)performSpecifierUpdates:(id)arg1;
- (void)popoverController:(id)arg1 animationCompleted:(int)arg2;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (id)popupStylePopoverController;
- (void)popupViewWillDisappear;
- (BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3;
- (void)prepareSpecifiersMetadata;
- (void)reload;
- (void)reloadIconForSpecifierForBundle:(id)arg1;
- (void)reloadSpecifier:(id)arg1;
- (void)reloadSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifierAtIndex:(int)arg1;
- (void)reloadSpecifierAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifierID:(id)arg1;
- (void)reloadSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifiers;
- (void)removeContiguousSpecifiers:(id)arg1;
- (void)removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (void)removeLastSpecifier;
- (void)removeLastSpecifierAnimated:(BOOL)arg1;
- (void)removeSpecifier:(id)arg1;
- (void)removeSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)removeSpecifierAtIndex:(int)arg1;
- (void)removeSpecifierAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)removeSpecifierID:(id)arg1;
- (void)removeSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(BOOL)arg3;
- (void)returnPressedAtEnd;
- (int)rowsForGroup:(int)arg1;
- (id)segmentedSliderTrackColor;
- (void)selectRowForSpecifier:(id)arg1;
- (id)separatorColor;
- (void)setAltTextColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setButtonTextColor:(id)arg1;
- (void)setCachesCells:(BOOL)arg1;
- (void)setCellAccessoryColor:(id)arg1;
- (void)setCellAccessoryHighlightColor:(id)arg1;
- (void)setCellHighlightColor:(id)arg1;
- (void)setDesiredVerticalContentOffset:(float)arg1;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (void)setEdgeToEdgeCells:(BOOL)arg1;
- (void)setEditableInsertionPointColor:(id)arg1;
- (void)setEditablePlaceholderTextColor:(id)arg1;
- (void)setEditableSelectionBarColor:(id)arg1;
- (void)setEditableSelectionHighlightColor:(id)arg1;
- (void)setEditableTextColor:(id)arg1;
- (void)setFooterHyperlinkColor:(id)arg1;
- (void)setForceSynchronousIconLoadForCreatedCells:(BOOL)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setPendingURLResourceDictionary:(id)arg1;
- (void)setReusesCells:(BOOL)arg1;
- (void)setSegmentedSliderTrackColor:(id)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setSpecifierID:(id)arg1;
- (void)setSpecifierIDPendingPush:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsesDarkTheme:(BOOL)arg1;
- (BOOL)shouldDeferPushForSpecifierID:(id)arg1;
- (BOOL)shouldReloadSpecifiersOnResume;
- (BOOL)shouldSelectResponderOnAppearance;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(BOOL)arg2;
- (void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(BOOL)arg2 swapAlertButtons:(BOOL)arg3;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(BOOL)arg2;
- (void)showPINSheet:(id)arg1;
- (id)specifier;
- (id)specifierAtIndex:(int)arg1;
- (id)specifierDataSource;
- (id)specifierForID:(id)arg1;
- (id)specifierID;
- (id)specifierIDPendingPush;
- (id)specifiers;
- (id)specifiersForIDs:(id)arg1;
- (id)specifiersInGroup:(int)arg1;
- (id)table;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 detailTextForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 titleAlignmentForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (Class)tableViewClass;
- (id)textColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)updateSpecifiersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withSpecifiers:(id)arg2;
- (BOOL)usesDarkTheme;
- (float)verticalContentOffset;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
