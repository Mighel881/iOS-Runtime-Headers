/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewController : UIViewController <QLPreviewControllerStateProtocolHostOnly, QLPreviewItemProvider, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIPageViewControllerDelegate, UIScrollViewDelegate, UIViewControllerTransitioningDelegate> {
    QLBarButtonItem * _actionButton;
    NSArray * _additionalLeftBarButtonItems;
    NSArray * _additionalRightBarButtonItems;
    BOOL  _allowInteractiveTransitions;
    BOOL  _blockRemoteImages;
    BOOL  _canChangeCurrentPage;
    BOOL  _canShowToolbar;
    BOOL  _changingCurrentPreview;
    QLTransitionController * _currentAnimator;
    QLActivityItemProvider * _currentItemProvider;
    int  _currentPreviewItemIndex;
    <QLPreviewControllerDataSource> * _dataSource;
    BOOL  _deferReloadData;
    int  _deferredSetIndex;
    <QLPreviewControllerDelegate> * _delegate;
    BOOL  _didTransitionFromInternalView;
    QLBarButtonItem * _doneButton;
    int  _enqueuedWhitePointAdaptivityStyle;
    BOOL  _fullScreen;
    UINavigationController * _internalNavigationController;
    NSDate * _lastCrashTimeStamp;
    QLBarButtonItem * _listButton;
    NSString * _loadingTextForMissingFiles;
    QLErrorView * _noDataView;
    unsigned int  _numberOfRetries;
    NSArray * _originalLeftBarButtonItems;
    NSArray * _originalRightBarButtonItems;
    BOOL  _overlayHidden;
    UIPinchGestureRecognizer * _pinchGesture;
    QLPinchRotationTracker * _pinchRotationTracker;
    unsigned int  _presentationMode;
    UIViewController<QLPreviewCollectionProtocol> * _previewCollection;
    BOOL  _previewCollectionIsLoading;
    BOOL  _previewCollectionNeedsConfiguration;
    NSMutableArray * _previewCollectionReadyCompletionBlocks;
    QLPreviewItemStore * _previewItemStore;
    NSMutableDictionary * _previewKeyCommands;
    unsigned int  _previewStyle;
    NSArray * _previewToolbarButtons;
    QLNavigationState * _previousNavigationVCState;
    BOOL  _previousStatusBarHidden;
    <QLPrintingProtocol> * _printer;
    unsigned int  _quickLookVisibility;
    BOOL  _rotationEnabled;
    UIRotationGestureRecognizer * _rotationGesture;
    UIDocumentInteractionController * _sharingInteractionController;
    BOOL  _showActionAsDefaultButton;
    UIPanGestureRecognizer * _slideGesture;
    BOOL  _sourceIsManaged;
    QLStateManager * _stateManager;
    <QLPreviewControllerDelegate> * _strongDelegate;
    QLSwipeDownTracker * _swipeDownTracker;
    QLToolbarController * _toolbarController;
    BOOL  _useCustomActionButton;
    BOOL  _viewWillAppearPerformed;
    int  _whitePointAdaptivityStyle;
    BOOL  _willTransitionToInternalView;
}

@property (retain) NSArray *additionalLeftBarButtonItems;
@property (retain) NSArray *additionalRightBarButtonItems;
@property (nonatomic) BOOL allowInteractiveTransitions;
@property BOOL blockRemoteImages;
@property BOOL canShowToolbar;
@property (retain) QLTransitionController *currentAnimator;
@property (retain) QLActivityItemProvider *currentItemProvider;
@property (readonly) <QLPreviewItem> *currentPreviewItem;
@property int currentPreviewItemIndex;
@property (nonatomic) <QLPreviewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <QLPreviewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didTransitionFromInternalView;
@property (nonatomic) BOOL fullScreen;
@property (readonly) unsigned int hash;
@property (readonly) QLItem *internalCurrentPreviewItem;
@property (nonatomic, retain) UINavigationController *internalNavigationController;
@property (readonly) int numberOfPreviewItems;
@property (retain) NSArray *originalLeftBarButtonItems;
@property (retain) NSArray *originalRightBarButtonItems;
@property (nonatomic) BOOL overlayHidden;
@property (retain) UIPinchGestureRecognizer *pinchGesture;
@property (retain) QLPinchRotationTracker *pinchRotationTracker;
@property (nonatomic, readonly) unsigned int presentationMode;
@property (readonly) UIViewController<QLPreviewCollectionProtocol> *previewCollection;
@property (readonly) QLPreviewItemStore *previewItemStore;
@property (nonatomic) unsigned int previewStyle;
@property (readonly) NSArray *previewToolbarButtons;
@property (readonly) QLNavigationState *previousNavigationVCState;
@property (nonatomic) BOOL previousStatusBarHidden;
@property (readonly) <QLPrintingProtocol> *printer;
@property (nonatomic) unsigned int quickLookVisibility;
@property (retain) UIRotationGestureRecognizer *rotationGesture;
@property (retain) UIDocumentInteractionController *sharingInteractionController;
@property (nonatomic) BOOL showActionAsDefaultButton;
@property (retain) UIPanGestureRecognizer *slideGesture;
@property BOOL sourceIsManaged;
@property (retain) QLStateManager *stateManager;
@property (nonatomic, retain) <QLPreviewControllerDelegate> *strongDelegate;
@property (readonly) Class superclass;
@property (retain) QLSwipeDownTracker *swipeDownTracker;
@property (nonatomic, readonly) QLToolbarController *toolbarController;
@property (nonatomic) BOOL useCustomActionButton;
@property (nonatomic) BOOL willTransitionToInternalView;

+ (BOOL)canPreviewDocumentType:(id)arg1;
+ (BOOL)canPreviewItem:(id)arg1;
+ (BOOL)canPreviewMIMEType:(id)arg1;
+ (id)contentTypeForPreviewItem:(id)arg1;
+ (id)controllerWithItemStore:(id)arg1;
+ (BOOL)copyPreviewItemToPasteboard:(id)arg1;
+ (void)logDeprecatedMessageForMethodName:(id)arg1;
+ (void)logDeprecatedMessageForSelector:(SEL)arg1;
+ (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
+ (id)titleForPreviewItem:(id)arg1;

- (void).cxx_destruct;
- (id)_actionButton;
- (void)_actionButtonTapped:(id)arg1;
- (id)_additionalLeftButtonItems;
- (id)_additionalRightButtonItems;
- (id)_childViewControllerForWhitePointAdaptivityStyle;
- (void)_commontInit;
- (void)_configurePreviewCollectionIfNeeded;
- (id)_copyBarButtons:(id)arg1;
- (id)_doneButton;
- (void)_doneButtonTapped;
- (BOOL)_isQuickLookVisible;
- (BOOL)_isToolbarVisibleForTraitCollection:(id)arg1;
- (void)_keyCommandWasPerformed:(id)arg1;
- (id)_listButton;
- (void)_listButtonTapped:(id)arg1;
- (id)_listDescriptionStringWithTitle:(id)arg1;
- (id)_navigationBarLeftButtonsWithTraitCollection:(id)arg1;
- (id)_navigationBarRightButtonsWithTraitCollection:(id)arg1;
- (BOOL)_needsListButton;
- (void)_nextPreview;
- (id)_preferredBackgroundColor;
- (int)_preferredWhitePointAdaptivityStyle;
- (void)_prepareDelayedAppearance;
- (void)_presentPreviewCollection;
- (void)_previousPreview;
- (BOOL)_quickLookWillBecomeVisible;
- (void)_refreshCurrentPreviewItemAnimated:(BOOL)arg1;
- (void)_reloadDataIfNeeded;
- (void)_savePreviousNavigationVCState;
- (void)_setCurrentPreviewItemIndex:(int)arg1 updatePreview:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_setFullScreen:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
- (void)_setPreferredWhitePointAdaptivityStyle:(int)arg1;
- (void)_setPresentationMode:(unsigned int)arg1;
- (void)_showPreviewCollection;
- (id)_toolBarButtonsWithTraitCollection:(id)arg1;
- (void)_toolbarButtonPressed:(id)arg1;
- (id)_topViewController;
- (void)_updateAppearance:(BOOL)arg1;
- (void)_updateBackgroundColor;
- (void)_updateNavigationTitle;
- (void)_updateToolbarSuperview;
- (void)_updateViewHierarchyPresentation;
- (BOOL)accessibilityPerformEscape;
- (id)activityItemForDocumentInteractionController:(id)arg1;
- (id)additionalActivitiesForDocumentInteractionController:(id)arg1;
- (id)additionalLeftBarButtonItems;
- (id)additionalRightBarButtonItems;
- (BOOL)allowInteractiveTransitions;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animatorForShowing:(BOOL)arg1 previewController:(id)arg2 presentingController:(id)arg3;
- (void)beginInteractiveTransition;
- (BOOL)blockRemoteImages;
- (BOOL)canShowToolbar;
- (id)currentAnimator;
- (id)currentItem;
- (id)currentItemProvider;
- (unsigned int)currentOrbMode;
- (id)currentPreviewItem;
- (int)currentPreviewItemIndex;
- (id)currentTracker;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didSelectPreviewItem:(id)arg1;
- (BOOL)didTransitionFromInternalView;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (id)excludedActivityTypesForDocumentInteractionController:(id)arg1;
- (void)expandContentOfCurrentItem;
- (id)flexibleSpace;
- (BOOL)fullScreen;
- (BOOL)hasItemsToPreview;
- (void)hideNoDataView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPreviewItems:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)internalCurrentPreviewItem;
- (id)internalNavigationController;
- (id)keyCommands;
- (void)loadView;
- (int)mode;
- (int)numberOfPreviewItems;
- (void)openURLIfAllowed:(id)arg1;
- (id)originalLeftBarButtonItems;
- (id)originalRightBarButtonItems;
- (BOOL)overlayHidden;
- (BOOL)parentIsNavigationController;
- (id)pinchGesture;
- (id)pinchRotationTracker;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (int)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (void)presentAlertControllerForScenario:(int)arg1;
- (void)presentPreviewItem:(id)arg1 onViewController:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
- (unsigned int)presentationMode;
- (id)previewCollection;
- (void)previewCollectionPrefersWhitePointAdaptivityStyle:(int)arg1;
- (void)previewCollectionUpdatePreviewItem:(int)arg1;
- (id)previewItemAtIndex:(int)arg1;
- (void)previewItemAtIndex:(unsigned int)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)previewItemStore;
- (unsigned int)previewStyle;
- (id)previewToolbarButtons;
- (id)previousNavigationVCState;
- (BOOL)previousStatusBarHidden;
- (id)printInfoForDocumentInteractionController:(id)arg1;
- (id)printer;
- (unsigned int)quickLookVisibility;
- (void)refreshCurrentPreviewItem;
- (void)reloadData;
- (void)remoteViewControllerWasInvalidated;
- (id)rotationGesture;
- (void)setAccessoryViewVisible:(BOOL)arg1;
- (void)setAdditionalLeftBarButtonItems:(id)arg1;
- (void)setAdditionalRightBarButtonItems:(id)arg1;
- (void)setAllowInteractiveTransitions:(BOOL)arg1;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (void)setCanChangeCurrentPage:(BOOL)arg1;
- (void)setCanShowToolbar:(BOOL)arg1;
- (void)setCurrentAnimator:(id)arg1;
- (void)setCurrentItemProvider:(id)arg1;
- (void)setCurrentOrbMode:(unsigned int)arg1;
- (void)setCurrentPreviewItemIndex:(int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidTransitionFromInternalView:(BOOL)arg1;
- (void)setFullScreen:(BOOL)arg1;
- (void)setInternalNavigationController:(id)arg1;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setOriginalLeftBarButtonItems:(id)arg1;
- (void)setOriginalRightBarButtonItems:(id)arg1;
- (void)setOverlayHidden:(BOOL)arg1;
- (void)setOverlayHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPinchGesture:(id)arg1;
- (void)setPinchRotationTracker:(id)arg1;
- (void)setPreviewStyle:(unsigned int)arg1;
- (void)setPreviousStatusBarHidden:(BOOL)arg1;
- (void)setPrinter:(id)arg1;
- (void)setQuickLookVisibility:(unsigned int)arg1;
- (void)setQuickLookVisibility:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setRotationEnabled:(BOOL)arg1;
- (void)setRotationGesture:(id)arg1;
- (void)setSharingInteractionController:(id)arg1;
- (void)setShowActionAsDefaultButton:(BOOL)arg1;
- (void)setSlideGesture:(id)arg1;
- (void)setSourceIsManaged:(BOOL)arg1;
- (void)setStateManager:(id)arg1;
- (void)setStrongDelegate:(id)arg1;
- (void)setSwipeDownTracker:(id)arg1;
- (void)setToolbarCanBeVisible:(BOOL)arg1;
- (void)setUseCustomActionButton:(BOOL)arg1;
- (void)setWillTransitionToInternalView:(BOOL)arg1;
- (id)sharingInteractionController;
- (BOOL)shouldAutorotate;
- (BOOL)showActionAsDefaultButton;
- (void)showNoDataViewIfNeeded;
- (id)slideGesture;
- (BOOL)sourceIsManaged;
- (id)stateManager;
- (id)strongDelegate;
- (id)swipeDownTracker;
- (id)toolbarController;
- (void)updateKeyCommands;
- (void)updateOverlayAnimated:(BOOL)arg1 animatedButtons:(BOOL)arg2 forceRefresh:(BOOL)arg3 withTraitCollection:(id)arg4;
- (void)updateOverlayAnimated:(BOOL)arg1 forceRefresh:(BOOL)arg2;
- (void)updateOverlayAnimated:(BOOL)arg1 forceRefresh:(BOOL)arg2 withTraitCollection:(id)arg3;
- (void)updateOverlayButtons:(BOOL)arg1;
- (void)updatePreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)updatePreviewItemAtIndex:(unsigned int)arg1 updatedContentsURL:(id)arg2 sandboxExtension:(id)arg3;
- (void)updateStatusBarAnimated:(BOOL)arg1;
- (BOOL)useCustomActionButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)waitForPreviewCollectionWithCompletionHandler:(id /* block */)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (BOOL)willTransitionToInternalView;

@end
