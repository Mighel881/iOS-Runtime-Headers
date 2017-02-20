/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFItemManager : NSObject <HFAccessoryObserver, HFCameraObserver, HFHomeManagerObserver, HFHomeObserver, HFResidentDeviceObserver, HFStateDumpSerializable, HFTemperatureUnitObserver> {
    HFItemManagerBatchedDelegateAdapter * _batchedDelegateAdapterAllowingReads;
    HFItemManagerBatchedDelegateAdapter * _batchedDelegateAdapterDisallowingReads;
    <HFItemManagerDelegate> * _delegate;
    NSMutableSet * _disableUpdateReasons;
    NAFuture * _firstFastUpdateFuture;
    NAFuture * _firstFullUpdateFuture;
    BOOL  _hasCreatedItemProviders;
    HMHome * _home;
    BOOL  _isRunningFastInitialUpdate;
    HMHome * _lastUpdatedHome;
    unsigned int  _overallLoadingState;
    NSArray * _sectionInfos;
    HFItem * _sourceItem;
    NSMutableDictionary * _suppressedCharacteristicUpdatesByReason;
}

@property (nonatomic, readonly) NSSet *allDisplayedItems;
@property (nonatomic, readonly) NSSet *allItems;
@property (nonatomic, retain) HFItemManagerBatchedDelegateAdapter *batchedDelegateAdapterAllowingReads;
@property (nonatomic, retain) HFItemManagerBatchedDelegateAdapter *batchedDelegateAdapterDisallowingReads;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HFItemManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableSet *disableUpdateReasons;
@property (nonatomic, readonly) NAFuture *firstFastUpdateFuture;
@property (nonatomic, readonly) NAFuture *firstFullUpdateFuture;
@property (getter=_hasCreatedItemProviders, setter=_setHasCreatedItemProviders:, nonatomic) BOOL hasCreatedItemProviders;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) BOOL isRunningFastInitialUpdate;
@property (nonatomic, retain) HMHome *lastUpdatedHome;
@property (nonatomic) unsigned int overallLoadingState;
@property (nonatomic, retain) NSArray *sectionInfos;
@property (nonatomic, retain) HFItem *sourceItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *suppressedCharacteristicUpdatesByReason;

+ (BOOL)_canReloadDuringUnitTests;

- (void).cxx_destruct;
- (void)_actuallyPerformExternalUpdateForItemsToRemove:(id)arg1 itemsToAdd:(id)arg2 itemsToUpdate:(id)arg3 logger:(id)arg4;
- (id)_allDisplayedItemsIncludingInternalItems;
- (id)_allItemsIncludingInternalItems;
- (id)_allSuppressedCharacteristics;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_batchItemUpdateFutureWrappers:(id)arg1 removedItems:(id)arg2 batchingIntervals:(id)arg3 logger:(id)arg4;
- (id)_cameraForCameraControl:(id)arg1;
- (id)_cameraForCameraStream:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (void)_createItemProvidersWithHome:(id)arg1;
- (id)_debug_itemDescriptions;
- (id)_debug_itemManagerDescription;
- (id)_debug_itemProviderDescriptions;
- (void)_debug_registerForStateDump;
- (id)_dependentHomeKitObjectsOfClass:(Class)arg1 inHomeKitObjects:(id)arg2;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (void)_didUpdateResultsForItem:(id)arg1;
- (id)_directItemDependenciesForHomeKitObjects:(id)arg1 class:(Class)arg2;
- (id)_footerTitleForSectionWithIdentifier:(id)arg1;
- (void)_handleAssertionFailureForComparatorMovingUnchangedItemsFrom:(id)arg1 to:(id)arg2;
- (BOOL)_hasCreatedItemProviders;
- (id)_homeFuture;
- (id)_identifierForSection:(unsigned int)arg1;
- (id)_indexPathForItem:(id)arg1 inDisplayedItemsArray:(id)arg2;
- (id)_internalItems;
- (id)_itemForSorting;
- (id)_itemProviders;
- (id)_itemsOfClass:(Class)arg1 inItems:(id)arg2 allowTransformedItems:(BOOL)arg3;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_itemsToUpdateForIncomingInvitation:(id)arg1;
- (id)_itemsToUpdateForModifiedAccessories:(id)arg1;
- (id)_itemsToUpdateForModifiedActionSets:(id)arg1;
- (id)_itemsToUpdateForModifiedActions:(id)arg1;
- (id)_itemsToUpdateForModifiedCameras:(id)arg1;
- (id)_itemsToUpdateForModifiedCharacteristics:(id)arg1;
- (id)_itemsToUpdateForModifiedEvents:(id)arg1;
- (id)_itemsToUpdateForModifiedMetadataForHomes:(id)arg1;
- (id)_itemsToUpdateForModifiedResidentDevices:(id)arg1;
- (id)_itemsToUpdateForModifiedRooms:(id)arg1;
- (id)_itemsToUpdateForModifiedServiceGroups:(id)arg1;
- (id)_itemsToUpdateForModifiedServiceTypes:(id)arg1;
- (id)_itemsToUpdateForModifiedServices:(id)arg1;
- (id)_itemsToUpdateForModifiedTriggers:(id)arg1;
- (id)_itemsToUpdateForModifiedUsers:(id)arg1;
- (id)_itemsToUpdateForModifiedZones:(id)arg1;
- (id)_itemsToUpdateForOutgoingInvitation:(id)arg1;
- (id)_itemsToUpdateForRemoteAccessChange;
- (unsigned int)_loadingStateForItem:(id)arg1;
- (BOOL)_notifyDelegateOfMoveIfNeededForItem:(id)arg1 oldDisplayedItemArray:(id)arg2 updatedDisplayedItemArray:(id)arg3 addedItems:(id)arg4 removedItems:(id)arg5 logger:(id)arg6;
- (unsigned int)_numberOfSections;
- (id)_performUpdateForItem:(id)arg1 isInternal:(BOOL)arg2 logger:(id)arg3 options:(id)arg4;
- (void)_registerForExternalUpdates;
- (id)_reloadAllItemProvidersFromSenderSelector:(SEL)arg1;
- (id)_reloadAndUpdateItemsForProviders:(id)arg1 updateItems:(id)arg2 senderSelector:(SEL)arg3;
- (id)_reloadItemProviders:(id)arg1 updateItems:(id)arg2 shouldUpdateExistingItems:(BOOL)arg3 senderSelector:(SEL)arg4 readValidator:(id /* block */)arg5;
- (void)_removeDelegateNotifications;
- (BOOL)_requiresNotificationsForCharacteristic:(id)arg1;
- (unsigned int)_sectionForItem:(id)arg1;
- (unsigned int)_sectionForItem:(id)arg1 assertOnNotFound:(BOOL)arg2;
- (unsigned int)_sectionForSectionIdentifier:(id)arg1;
- (unsigned int)_sectionForSectionIdentifier:(id)arg1 assertOnNotFound:(BOOL)arg2;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_sectionInfosEnsuringLoaded;
- (id)_serviceGroupItemForServiceGroup:(id)arg1 inItems:(id)arg2;
- (id)_serviceItemsToHideInSet:(id)arg1 allServiceGroupItems:(id)arg2;
- (void)_setHasCreatedItemProviders:(BOOL)arg1;
- (void)_setupDelegateNotifications;
- (BOOL)_shouldHideServiceItem:(id)arg1 containedInServiceGroupItem:(id)arg2;
- (BOOL)_shouldPerformFastInitialUpdates;
- (id)_sortedItems:(id)arg1 forSectionIdentifier:(id)arg2;
- (id /* block */)_standardReadValidator;
- (id)_styleForItem:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (void)_unregisterForExternalUpdates;
- (void)_updateExternalUpdatesEnabled:(BOOL)arg1 reloadItems:(BOOL)arg2;
- (void)_updateLoadingStateAndNotifyDelegateForItems:(id)arg1 canFinishTransaction:(BOOL)arg2;
- (void)_updateOverallLoadingStateAndNotifyDelegate;
- (void)_updateRepresentationForExternalItems:(id)arg1 updatedOrAddedItems:(id)arg2 removedItems:(id)arg3 logger:(id)arg4;
- (void)_updateRepresentationForInternalItems:(id)arg1 updatedItems:(id)arg2;
- (id)_updateResultsForItems:(id)arg1 removedItems:(id)arg2 senderSelector:(SEL)arg3 logger:(id)arg4 options:(id)arg5 readValidator:(id /* block */)arg6;
- (id)_updateResultsForItems:(id)arg1 senderSelector:(SEL)arg2 readValidator:(id /* block */)arg3;
- (void)_updateSections;
- (void)_updateSectionsWithLogger:(id)arg1 returningAddedSectionIndices:(id*)arg2 removedSectionIndicies:(id*)arg3;
- (void)_willUpdateSections;
- (void)accessory:(id)arg1 didUpdateApplicationDataForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateBundleID:(id)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareUpdateAvailable:(BOOL)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareVersion:(id)arg2;
- (void)accessory:(id)arg1 didUpdateHasAuthorizationDataForCharacteristic:(id)arg2;
- (void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateStoreID:(id)arg2;
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
- (void)accessoryDidUpdateAdditionalSetupRequired:(id)arg1;
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)accessoryDidUpdateName:(id)arg1;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (id)allDisplayedItems;
- (id)allItems;
- (id)batchedDelegateAdapterAllowingReads;
- (id)batchedDelegateAdapterDisallowingReads;
- (void)beginSuppressingUpdatesForCharacteristics:(id)arg1 withReason:(id)arg2;
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (void)cameraStream:(id)arg1 didUpdateAudioStreamSettingWithError:(id)arg2;
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)cameraStreamControlDidUpdateStreamState:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disableExternalUpdatesWithReason:(id)arg1;
- (id)disableUpdateReasons;
- (id)displayedItemAtIndexPath:(id)arg1;
- (id)displayedItemsInSection:(unsigned int)arg1;
- (id)displayedSectionIdentifierForSectionIndex:(unsigned int)arg1;
- (void)endDisableExternalUpdatesWithReason:(id)arg1;
- (void)endSuppressingUpdatesForCharacteristicsWithReason:(id)arg1 updateAffectedItems:(BOOL)arg2;
- (id)firstFastUpdateFuture;
- (id)firstFullUpdateFuture;
- (id)footerTitleForSection:(unsigned int)arg1;
- (id)hf_serializedStateDumpRepresentation;
- (id)home;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didAddActionSet:(id)arg2;
- (void)home:(id)arg1 didAddResidentDevice:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3;
- (void)home:(id)arg1 didAddServiceGroup:(id)arg2;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didEncounterError:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didExecuteActionSets:(id)arg2 failedActionSets:(id)arg3;
- (void)home:(id)arg1 didReadValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveActionSet:(id)arg2;
- (void)home:(id)arg1 didRemoveResidentDevice:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didUnblockAccessory:(id)arg2;
- (void)home:(id)arg1 didUpdateAccesoryInvitationsForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
- (void)home:(id)arg1 didUpdateTrigger:(id)arg2;
- (void)home:(id)arg1 didWriteValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
- (void)home:(id)arg1 remoteAccessStateDidChange:(unsigned int)arg2;
- (void)home:(id)arg1 willExecuteActionSets:(id)arg2;
- (void)home:(id)arg1 willReadValuesForCharacteristics:(id)arg2;
- (void)home:(id)arg1 willWriteValuesForCharacteristics:(id)arg2;
- (void)homeDidUpdateApplicationData:(id)arg1;
- (void)homeDidUpdateName:(id)arg1;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
- (void)homeManager:(id)arg1 residentProvisioningStatusChanged:(unsigned int)arg2;
- (void)homeManagerDidEndBatchNotifications:(id)arg1;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (void)homeManagerDidFinishUnknownChange:(id)arg1;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (void)homeManagerDidUpdatePrimaryHome:(id)arg1;
- (void)homeManagerWillStartBatchNotifications:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (BOOL)isRunningFastInitialUpdate;
- (id)lastUpdatedHome;
- (unsigned int)numberOfSections;
- (unsigned int)overallLoadingState;
- (void)recalculateVisibilityAndSortAllItems;
- (id)reloadAndUpdateAllItemsFromSenderSelector:(SEL)arg1;
- (id)reloadAndUpdateItemsForProviders:(id)arg1 senderSelector:(SEL)arg2;
- (void)residentDevice:(id)arg1 didUpdateCapabilities:(unsigned int)arg2;
- (void)residentDevice:(id)arg1 didUpdateEnabled:(BOOL)arg2;
- (void)residentDevice:(id)arg1 didUpdateName:(id)arg2;
- (void)residentDevice:(id)arg1 didUpdateStatus:(unsigned int)arg2;
- (unsigned int)sectionIndexForDisplayedSectionIdentifier:(id)arg1;
- (id)sectionInfos;
- (void)setBatchedDelegateAdapterAllowingReads:(id)arg1;
- (void)setBatchedDelegateAdapterDisallowingReads:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setIsRunningFastInitialUpdate:(BOOL)arg1;
- (void)setLastUpdatedHome:(id)arg1;
- (void)setOverallLoadingState:(unsigned int)arg1;
- (void)setSectionInfos:(id)arg1;
- (void)setSourceItem:(id)arg1;
- (void)setSuppressedCharacteristicUpdatesByReason:(id)arg1;
- (void)sortDisplayedItemsInSection:(int)arg1;
- (id)sourceItem;
- (id)suppressedCharacteristicUpdatesByReason;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnit:(BOOL)arg2;
- (id)titleForSection:(unsigned int)arg1;
- (id)updateResultsForItems:(id)arg1 senderSelector:(SEL)arg2;

@end
