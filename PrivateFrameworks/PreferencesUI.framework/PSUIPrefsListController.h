/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIPrefsListController : PSListController <DevicePINControllerDelegate, PSSearchControllerDelegate, RadiosPreferencesDelegate> {
    ACAccountStore * _accountStore;
    NSString * _bluetoothString;
    BOOL  _bluetoothValueIsClean;
    PSSpecifier * _carrierSelectionSpecifier;
    PSSpecifier * _castleSpecifier;
    BOOL  _didFirstLoad;
    PSSpecifier * _eqSpecifier;
    PSSpecifier * _ethernetSpecifier;
    PSSpecifier * _faceTimeSpecifier;
    PSSpecifier * _facebookSpecifier;
    PSSpecifier * _flickrSpecifier;
    FLPreferencesController * _followupController;
    PSSpecifier * _gameCenterSpecifier;
    PSSpecifier * _homeKitSpecifier;
    PSUIHomeKitVisibilityArbitrator * _homeKitVisibilityArbitrator;
    NSDictionary * _iconCache;
    NSObject<OS_dispatch_queue> * _iconCacheQueue;
    BOOL  _initiallyLoadingThirdPartySpecifiers;
    PSSpecifier * _messagesSpecifier;
    NSDictionary * _movedThirdPartySpecifiers;
    PSSpecifier * _notificationsSpecifier;
    NSSet * _originalDisplayIdentifiers;
    NSArray * _originalSpecifiers;
    PSSpecifier * _passcodeSpecifier;
    NSString * _pendingOffsetItemName;
    PSSpecifier * _personalHotspotSpecifier;
    BOOL  _refreshingThirdPartySpecifiers;
    PSSearchController * _searchController;
    NSString * _searchText;
    PSSpecifier * _siriSpecifier;
    BOOL  _skipSelectingGeneralOnLaunch;
    EAAccessory * _speakerAccessory;
    PSSpecifier * _tencentweiboSpecifier;
    NSArray * _thirdPartySpecifiers;
    PSSpecifier * _twitterSpecifier;
    VSAccountStore * _videoSubscriberAccountStore;
    PSSpecifier * _videoSubscriberSpecifier;
    PSSpecifier * _vimeoSpecifier;
    PSSpecifier * _wallpaperSpecifier;
    PSSpecifier * _weiboSpecifier;
    NSString * _wifiString;
    BOOL  _wifiValueIsClean;
}

@property (nonatomic, copy) NSString *bluetoothString;
@property (nonatomic, readonly) UIViewController<PSController> *categoryController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PSSearchController *searchController;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic) BOOL skipSelectingGeneralOnLaunch;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *wifiString;

+ (BOOL)airplaneMode;
+ (void)formatSearchEntries:(id)arg1 parent:(id)arg2;
+ (id)radiosPreferences;
+ (void)setAirplaneMode:(BOOL)arg1;

- (void).cxx_destruct;
- (void)NETRBStateChangedNotification:(id)arg1;
- (id)_accountStore;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)_beginObservingVideoSubscriberAccountStoreDidChangeNotification;
- (void)_insertOrRemovePaymentSpecifierAsNeededCompletion:(id /* block */)arg1;
- (void)_loadThirdPartySpecifiersIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_loadThirdPartySpecifiersWithCompletion:(id /* block */)arg1;
- (void)_localeChanged;
- (void)_newCarrierNotification;
- (id)_primarySpecifierOrdering;
- (void)_reallyLoadThirdPartySpecifiersForApps:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_setAirplaneMode:(BOOL)arg1;
- (void)_setupiCloudSpecifier:(id)arg1;
- (void)_setupiCloudSpecifier:(id)arg1 withPrimaryAccount:(id)arg2;
- (void)_setupiCloudSpecifierAsync:(id)arg1;
- (BOOL)_showCarrier;
- (void)_showControllerFromSpecifier:(id)arg1;
- (void)_showDetailTargetDidChange:(id)arg1;
- (id)_sidebarSpecifierForCategoryController;
- (void)_simStatusChanged:(struct __CFString { }*)arg1;
- (id)_specifierDictionaryForBundlePath:(id)arg1 identifier:(id)arg2 internalIcon:(BOOL)arg3 searchPlist:(id)arg4;
- (id)_specifierDictionaryForDeveloperBundlePath:(id)arg1 identifier:(id)arg2;
- (void)_videoSubscriberAccountAvailabilityDidChange:(id)arg1;
- (void)_videoSubscriberAccountStoreDidChange:(id)arg1;
- (void)airplaneModeChanged;
- (void)appleAccountsDidChange;
- (void)bluetoothPowerChanged:(id)arg1;
- (id)bluetoothString;
- (id)bluetoothValue:(id)arg1;
- (void)bluetoothValueFetch:(id)arg1;
- (id)categoryController;
- (id)cellularDataStatusForSpecifier:(id)arg1;
- (id)cellularDisabledStatusForSpecifier:(id)arg1;
- (void)checkDeveloperSettingsState;
- (void)clearCache;
- (id)configurePasscodeSpecifierFromSpecifiers:(id)arg1;
- (void)confirmationSpecifierCancelled:(id)arg1;
- (void)confirmationSpecifierConfirmed:(id)arg1;
- (id)currentNetwork:(id)arg1;
- (void)dealloc;
- (BOOL)deviceSupportsApplePay;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)displayIdentifiersChanged;
- (id)dndGlobalState:(id)arg1;
- (id)generalViewController;
- (id)getAirplaneMode:(id)arg1;
- (id)getTetheringStatus:(id)arg1;
- (BOOL)handlePendingURL;
- (void)iMessageSupportMayHaveChanged;
- (id)identifierForSelectedIndex;
- (id)init;
- (void)insertMovedThirdPartySpecifiersAnimated:(BOOL)arg1;
- (void)insertOrderedSpecifier:(id)arg1 animated:(BOOL)arg2;
- (BOOL)isBundleIDHiddenDueToRestrictions:(id)arg1;
- (BOOL)isSpecifierHiddenDueToRestrictions:(id)arg1;
- (void)lazyLoadSpecialBundleForSpecifier:(id)arg1;
- (void)loadPPTTestSpecifiers:(int)arg1;
- (void)loadThirdPartySpecifierIfNeededForBundleID:(id)arg1;
- (void)networkChanged;
- (id)passbookSpecifier;
- (id)phoneStatusForSpecifier:(id)arg1;
- (void)popToRoot;
- (void)refresh3rdPartyBundles;
- (void)reloadCellularRelatedSpecifiers;
- (void)reloadSpecifiers;
- (void)rerootNavigationController;
- (id)rootSpecifiersForSearchController:(id)arg1;
- (id)searchController;
- (void)searchController:(id)arg1 openURL:(id)arg2;
- (id)searchText;
- (void)selectGeneralCategory;
- (void)selectGeneralCategoryForced:(BOOL)arg1;
- (void)selectGeneralCategoryForced:(BOOL)arg1 showController:(BOOL)arg2;
- (void)setAirplaneMode:(id)arg1 specifier:(id)arg2;
- (void)setBluetoothString:(id)arg1;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setShowsCarrierSettingsMenu:(BOOL)arg1;
- (void)setSkipSelectingGeneralOnLaunch:(BOOL)arg1;
- (void)setSpeakerAccessory:(id)arg1 eqAvailable:(BOOL)arg2;
- (void)setWifiString:(id)arg1;
- (void)setupAppleAccountCategory:(id)arg1;
- (void)setupSearchBar;
- (BOOL)shouldDeferPushForSpecifierID:(id)arg1;
- (BOOL)shouldReloadSpecifiersOnResume;
- (BOOL)shouldShowEthernetSpecifier;
- (void)showPINSheet:(id)arg1;
- (BOOL)skipSelectingGeneralOnLaunch;
- (id)specifierForBundle:(id)arg1;
- (id)specifiers;
- (void)suspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateAccountSpecifiers;
- (void)updateEthernet;
- (void)updateHomeKitSpecifier;
- (void)updatePersonalHotspotWithState:(int)arg1 andReason:(int)arg2;
- (void)updateRestrictedSettings;
- (void)updateShowsCarrierSettingsMenuVisibility;
- (void)updateWeiboState;
- (void)updateWifi;
- (id)videoSubscriberAccountValue:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)wifiNetwork:(id)arg1;
- (void)wifiNetworkFetch:(id)arg1;
- (id)wifiString;
- (void)willBecomeActive;
- (void)willEnterForeground;

@end
