/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <_MKPlaceViewControllerDelegate>, <_MKPlaceViewControllerFeedbackDelegate>, ABPeoplePickerNavigationController<ABContactViewControllerDelegate>, CNContact, MKDistanceDetailProvider, MKMapItem, MKPlaceActionsViewController, MKPlaceHeaderView, MKPlaceInfoViewController, MKPlaceNearbyAppsMetricsCoordinator, MKSegmentedControlTabBarView, NSArray, NSMapTable, NSMutableArray, NSString, SKProductPageViewController, UITapGestureRecognizer;

@interface _MKPlaceViewController : MKStackingViewController <ABContactViewControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, MKActivityViewControllerDelegate, MKPlaceActionsViewControllerDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceHeaderViewDelegate, MKPlaceInfoViewControllerDelegate, MKPlaceNearbyAppsViewControllerDelegate, MKPlaceSharedAttributionDelegate, MKStackingViewControllerDelegate, SKProductPageViewControllerDelegate> {
    MKPlaceActionsViewController *_actionsViewController;
    NSMapTable *_additionalViewControllers;
    void *_addressBook;
    CNContact *_contact;
    ABPeoplePickerNavigationController<ABContactViewControllerDelegate> *_contactsNavigationController;
    MKDistanceDetailProvider *_distanceMonitor;
    UITapGestureRecognizer *_flyoverTourTapRecognizer;
    BOOL _hasCheckedDistanceAvailability;
    BOOL _hasContactOnlyMapItem;
    float _headerHeight;
    NSString *_headerTitle;
    MKPlaceInfoViewController *_infoViewController;
    BOOL _isSearchingForNearbyApps;
    MKMapItem *_mapItem;
    MKPlaceNearbyAppsMetricsCoordinator *_metricsCoordinator;
    unsigned int _options;
    CNContact *_originalContact;
    void *_originalContactRecordCopy;
    BOOL _overrideDefaultShowRAP;
    MKPlaceHeaderView *_placeHeaderView;
    <_MKPlaceViewControllerDelegate> *_placeViewControllerDelegate;
    <_MKPlaceViewControllerFeedbackDelegate> *_placeViewFeedbackDelegate;
    BOOL _showContactActions;
    NSArray *_storeItems;
    SKProductPageViewController *_storePageViewController;
    MKSegmentedControlTabBarView *_tabBar;
    NSMutableArray *_viewDidAppearBlocks;
}

@property(readonly) CNContact * contact;
@property ABPeoplePickerNavigationController<ABContactViewControllerDelegate> * contactsNavigationController;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL disableReportAProblem;
@property(retain) MKDistanceDetailProvider * distanceMonitor;
@property BOOL hasCheckedDistanceAvailability;
@property(readonly) unsigned int hash;
@property float headerHeight;
@property(copy) NSString * headerTitle;
@property BOOL hideDirectionsButtons;
@property BOOL hideInlineMap;
@property(retain) MKMapItem * mapItem;
@property(readonly) MKPlaceNearbyAppsMetricsCoordinator * metricsCoordinator;
@property unsigned int options;
@property(retain) CNContact * originalContact;
@property(retain) MKPlaceHeaderView * placeHeaderView;
@property <_MKPlaceViewControllerDelegate> * placeViewControllerDelegate;
@property <_MKPlaceViewControllerFeedbackDelegate> * placeViewFeedbackDelegate;
@property BOOL showContactActions;
@property BOOL showCreateReminder;
@property BOOL showEditButton;
@property BOOL showFlyoverTour;
@property BOOL showInlineMapInHeader;
@property BOOL showNearbyApps;
@property BOOL showOpenInSkyline;
@property BOOL showRemovePin;
@property BOOL showReportAProblem;
@property BOOL showShareActionsButton;
@property BOOL showSimulateLocation;
@property BOOL showTitleBar;
@property(readonly) Class superclass;
@property(retain) MKSegmentedControlTabBarView * tabBar;
@property(retain) NSMutableArray * viewDidAppearBlocks;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_contactForEditOperations;
- (void)_didResolveAttribution:(id)arg1;
- (void)_displayAppWithMetadata:(id)arg1;
- (void)_findNearbyAppsAtCoordinate:(struct { double x1; double x2; })arg1;
- (id)_mapTableKeyForSectionPosition:(int)arg1;
- (void)_openAppWithBundleID:(id)arg1;
- (void)_openInfoAttribution;
- (BOOL)_removeMapsDataFromContactWithRecordID:(int)arg1;
- (void)_searchForNearbyApps;
- (void)_searchForNearbyAppsIfNecessary;
- (int)_sectionPositionForMapTableKey:(id)arg1;
- (void)_setHeaderSubtitleWithDistanceInfo:(id)arg1 numberOfReviews:(unsigned int)arg2;
- (void)_setViewControllersWithInformationViewControllers:(id)arg1;
- (void)_setupHeaderView;
- (void)_showEditSheet:(id)arg1;
- (BOOL)_showReportAProblem;
- (void)_showShareSheet:(id)arg1;
- (void)_switchToTabAtIndex:(int)arg1;
- (void)_tappedForFlyoverTour;
- (void)_updateViewControllers;
- (void)actionsViewControllerAddContactToExistingContact:(id)arg1;
- (void)actionsViewControllerCreateNewContact:(id)arg1;
- (void)actionsViewControllerCreateReminder:(id)arg1;
- (void)actionsViewControllerOpenInSkyline:(id)arg1;
- (void)actionsViewControllerRemovePin:(id)arg1;
- (void)actionsViewControllerReportAProblem:(id)arg1;
- (void)actionsViewControllerShare:(id)arg1;
- (void)actionsViewControllerSimulateLocation:(id)arg1;
- (void)addAdditionalViewController:(id)arg1 atPosition:(int)arg2;
- (id)additionalViewControllersAtPosition:(int)arg1;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)contact;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (id)contactsNavigationController;
- (void)dealloc;
- (BOOL)disableReportAProblem;
- (id)distanceMonitor;
- (BOOL)hasCheckedDistanceAvailability;
- (float)headerHeight;
- (id)headerTitle;
- (void)headerView:(id)arg1 didFinishLoadingBackgroundViewOfType:(int)arg2;
- (BOOL)headerViewshouldShowTitleSubtitleAndStarRatings:(id)arg1;
- (BOOL)hideDirectionsButtons;
- (BOOL)hideInlineMap;
- (void)infoViewController:(id)arg1 didSelectDeal:(id)arg2;
- (id)init;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2 options:(unsigned int)arg3;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 options:(unsigned int)arg2;
- (id)mapItem;
- (void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3;
- (void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3;
- (id)metricsCoordinator;
- (void)nearbyAppsController:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3;
- (void)nearbyAppsController:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (void)openInfoAttribution;
- (unsigned int)options;
- (id)originalContact;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2;
- (void)placeCardPhotosControllerDidSelectAddPhoto:(id)arg1;
- (void)placeCardPhotosControllerDidSelectViewAllPhotos:(id)arg1;
- (void)placeCardReviewsController:(id)arg1 didSelectViewReviewWithID:(id)arg2;
- (void)placeCardReviewsControllerDidSelectCheckIn:(id)arg1;
- (void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg1;
- (void)placeCardReviewsControllerDidSelectWriteReview:(id)arg1;
- (id)placeHeaderView;
- (id)placeViewControllerDelegate;
- (id)placeViewFeedbackDelegate;
- (int)preferredStatusBarStyle;
- (void)presentHeaderView;
- (void)removeAdditionalViewController:(id)arg1;
- (void)resetHeaderView;
- (void)resetHeaderViewAnimations;
- (void)restartHeaderViewAnimations;
- (void)setContact:(id)arg1;
- (void)setContactsNavigationController:(id)arg1;
- (void)setDisableReportAProblem:(BOOL)arg1;
- (void)setDistanceMonitor:(id)arg1;
- (void)setHasCheckedDistanceAvailability:(BOOL)arg1;
- (void)setHeaderHeight:(float)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHideDirectionsButtons:(BOOL)arg1;
- (void)setHideInlineMap:(BOOL)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(BOOL)arg3;
- (void)setOptions:(unsigned int)arg1;
- (void)setOriginalContact:(id)arg1;
- (void)setPlaceHeaderView:(id)arg1;
- (void)setPlaceViewControllerDelegate:(id)arg1;
- (void)setPlaceViewFeedbackDelegate:(id)arg1;
- (void)setShowContactActions:(BOOL)arg1;
- (void)setShowCreateReminder:(BOOL)arg1;
- (void)setShowEditButton:(BOOL)arg1;
- (void)setShowFlyoverTour:(BOOL)arg1;
- (void)setShowInlineMapInHeader:(BOOL)arg1;
- (void)setShowNearbyApps:(BOOL)arg1;
- (void)setShowOpenInSkyline:(BOOL)arg1;
- (void)setShowRemovePin:(BOOL)arg1;
- (void)setShowReportAProblem:(BOOL)arg1;
- (void)setShowShareActionsButton:(BOOL)arg1;
- (void)setShowSimulateLocation:(BOOL)arg1;
- (void)setShowTitleBar:(BOOL)arg1;
- (void)setTabBar:(id)arg1;
- (void)setViewDidAppearBlocks:(id)arg1;
- (BOOL)shouldShowDirectionsForInfoViewController:(id)arg1;
- (BOOL)shouldShowFlyoverTourForInfoViewController:(id)arg1;
- (BOOL)shouldShowInlineMapForInfoViewController:(id)arg1;
- (BOOL)showContactActions;
- (BOOL)showCreateReminder;
- (BOOL)showEditButton;
- (BOOL)showFlyoverTour;
- (BOOL)showInlineMapInHeader;
- (BOOL)showNearbyApps;
- (BOOL)showOpenInSkyline;
- (BOOL)showRemovePin;
- (BOOL)showReportAProblem;
- (BOOL)showShareActionsButton;
- (BOOL)showSimulateLocation;
- (BOOL)showTitleBar;
- (void)stackingViewController:(id)arg1 calculatedTransformForHeaderView:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2;
- (id)stackingViewController:(id)arg1 scrollViewForViewController:(id)arg2;
- (BOOL)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2;
- (void)stackingViewController:(id)arg1 willSelectViewController:(id)arg2;
- (void)stackingViewControllerDidEndScroll:(id)arg1;
- (float)stackingViewControllerHeightForHeaderView:(id)arg1;
- (void)stackingViewControllerWillBeginScroll:(id)arg1;
- (id)tabBar;
- (void)updateActionVisibility;
- (void)viewDidAppear:(BOOL)arg1;
- (id)viewDidAppearBlocks;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
