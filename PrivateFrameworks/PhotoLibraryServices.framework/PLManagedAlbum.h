/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSSet, NSString, NSURL, PLManagedAsset, UIImage;

@interface PLManagedAlbum : _PLManagedAlbum <PLUserEditableAlbumProtocol> {
    BOOL _albumShouldBeAutomaticallyDeleted;
    BOOL _needsPersistenceUpdate;
    BOOL _resolvingConflicts;
}

@property BOOL albumShouldBeAutomaticallyDeleted;
@property(readonly) unsigned int approximateCount;
@property(retain) NSSet * assetOrders;
@property(retain) NSOrderedSet * assets;
@property(readonly) unsigned int assetsCount;
@property unsigned int batchSize;
@property(readonly) BOOL canContributeToCloudSharedAlbum;
@property(readonly) BOOL canShowAvalancheStacks;
@property(readonly) BOOL canShowComments;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain,readonly) NSDate * endDate;
@property(retain,readonly) NSURL * groupURL;
@property BOOL hasUnseenContentBoolValue;
@property(readonly) unsigned int hash;
@property(retain) NSString * importSessionID;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isCloudSharedAlbum;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isFamilyCloudSharedAlbum;
@property(readonly) BOOL isFolder;
@property(readonly) BOOL isInTrash;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly) BOOL isOwnedCloudSharedAlbum;
@property(readonly) BOOL isPanoramasAlbum;
@property(readonly) BOOL isPendingPhotoStreamAlbum;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(readonly) BOOL isRecentlyAddedAlbum;
@property(readonly) BOOL isStandInAlbum;
@property(readonly) BOOL isUserLibraryAlbum;
@property(readonly) BOOL isWallpaperAlbum;
@property(retain) PLManagedAsset * keyAsset;
@property(retain,readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(copy,readonly) NSArray * localizedLocationNames;
@property(copy,readonly) NSString * localizedTitle;
@property(retain,readonly) NSMutableOrderedSet * mutableAssets;
@property(copy,readonly) NSString * name;
@property BOOL needsPersistenceUpdate;
@property int pendingItemsCount;
@property int pendingItemsType;
@property(readonly) unsigned int photosCount;
@property(retain,readonly) UIImage * posterImage;
@property BOOL resolvingConflicts;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(copy,readonly) id sortingComparator;
@property(retain,readonly) NSDate * startDate;
@property(readonly) Class superclass;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(retain,readonly) NSString * title;
@property(retain,readonly) NSMutableOrderedSet * userEditableAssets;
@property(retain,readonly) NSString * uuid;
@property(readonly) unsigned int videosCount;

+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)assetOrderByAbumUUIDs;
+ (id)baseSearchIndexPredicate;
+ (id)childKeyForOrdering;
+ (void)clearAssetOrderByAbumUUIDs;
+ (id)keyPathsForValuesAffectingApproximateCount;
+ (id)keyPathsForValuesAffectingPhotosCount;
+ (id)keyPathsForValuesAffectingVideosCount;
+ (id)pathToAssetAlbumOrderStructure;

- (unsigned int)_albumStandInCount;
- (id)_assetOrderByAssetUUID;
- (unsigned int)_cachedCountForMigration;
- (id)_expectedKeyAssets:(id)arg1;
- (id)_keysToBeObserved;
- (id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2;
- (void)_recalculateCachedCounts;
- (BOOL)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1;
- (void)_updateCountsIfNeeded:(id)arg1;
- (void)_updateKeyAssetsAndCountsIfNeeded;
- (void)_updateKeyAssetsIfNeeded:(id)arg1;
- (void)addAssetUsingiTunesAlbumOrder:(id)arg1;
- (BOOL)albumShouldBeAutomaticallyDeleted;
- (unsigned int)approximateCount;
- (unsigned int)assetsCount;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (id)childKeyForOrdering;
- (unsigned int)countOfInternalUserEditableAssets;
- (id)descriptionOfAssetOrderValues;
- (void)didSave;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)getInternalUserEditableAssets:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexInInternalUserEditableAssetsOfObject:(id)arg1;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
- (id)internalUserEditableAssetsAtIndexes:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isValidKindForPersistence;
- (id)migration_newOrderKeyChild:(id)arg1;
- (id)migration_sortedOrderKeysForChildrenUsingMap:(id)arg1;
- (id)mutableAssets;
- (BOOL)needsPersistenceUpdate;
- (id)objectInInternalUserEditableAssetsAtIndex:(unsigned int)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)persistMetadataToFileSystem;
- (unsigned int)photosCount;
- (void)prepareForDeletion;
- (void)refreshAssets;
- (void)registerForChanges;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)removeInternalUserEditableAssetsAtIndexes:(id)arg1;
- (void)removePersistedFileSystemData;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (BOOL)resolvingConflicts;
- (id)searchIndexContents;
- (void)setAlbumShouldBeAutomaticallyDeleted:(BOOL)arg1;
- (void)setNeedsPersistenceUpdate:(BOOL)arg1;
- (void)setResolvingConflicts:(BOOL)arg1;
- (void)sortAssetsUsingiTunesAlbumOrder;
- (BOOL)supportsAssetOrderKeys;
- (void)unregisterForChanges;
- (id)userEditableAssets;
- (unsigned int)videosCount;
- (void)willSave;

@end
