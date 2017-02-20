/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreAVItem : MPAVItem {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDictionary * _alternativeConfigurationOptions;
    unsigned int  _assetQuality;
    NSString * _assetSourceStoreFrontID;
    NSNumber * _bookmarkTime;
    BOOL  _didDeferLeaseStart;
    long long  _equivalencySourceAdamID;
    BOOL  _hasEverPrioritizedPlayerItem;
    BOOL  _hasPrioritizedPlayWhileDownloadSession;
    BOOL  _hasPrioritizedStreamingDownloadSession;
    BOOL  _hasValidAssetQuality;
    BOOL  _isActivePlayerItem;
    unsigned int  _options;
    MPStorePlayWhileDownloadSession * _playWhileDownloadSession;
    MPMediaPlaybackItemMetadata * _playbackItemMetadata;
    SBCPlaybackPositionDomain * _playbackPositionDomain;
    SBCPlaybackPositionEntity * _playbackPositionEntity;
    int  _playbackPositionEntityRevision;
    SBCPlaybackPositionValueService * _playbackPositionService;
    unsigned int  _preferredAssetQuality;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    unsigned int  _streamType;
    MPStreamingDownloadSession * _streamingDownloadSession;
}

@property (nonatomic, readonly, copy) NSDictionary *alternativeConfigurationOptions;
@property (nonatomic, copy) NSString *assetSourceStoreFrontID;
@property (nonatomic) long long equivalencySourceAdamID;
@property (nonatomic, readonly) unsigned int options;
@property (nonatomic, readonly) MPMediaPlaybackItemMetadata *playbackItemMetadata;
@property (nonatomic, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, copy) NSString *requestingBundleVersion;
@property (nonatomic, readonly) unsigned int streamType;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)_assetURLForCachedLocalPlaybackAssetFilePathForPlaybackItemMetadata:(id)arg1 withMinimumAssetQuality:(unsigned int)arg2 assetOptions:(id)arg3 returningProtectionType:(unsigned int*)arg4 assetQuality:(unsigned int*)arg5 usesPurchaseBundle:(BOOL*)arg6;
+ (unsigned int)_currentPreferredAssetQualityForPlaybackItemMetadata:(id)arg1;
+ (BOOL)hasNominalAmountBeenPlayedForElapsedTime:(double)arg1 startTime:(double)arg2 stopTime:(double)arg3;
+ (BOOL)isPlaybackItemMetadataStreamingForAssetCreation:(id)arg1 returningProtectionType:(unsigned int*)arg2;
+ (BOOL)isPlaybackItemMetadataValidForAssetCreation:(id)arg1;
+ (double)nominalHasBeenPlayedThresholdForDuration:(double)arg1;
+ (BOOL)shouldIncrementPlayCountForElapsedTime:(double)arg1 startTime:(double)arg2 stopTime:(double)arg3;

- (void).cxx_destruct;
- (void)_applyLoudnessInfo;
- (id)_bookmarkTime;
- (id)_chapterTitleForTime:(double)arg1;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (double)_expectedStartTimeWithPlaybackInfo:(id)arg1;
- (double)_expectedStopTimeWithPlaybackInfo:(id)arg1;
- (BOOL)_getAssetURL:(id*)arg1 playWhileDownloadSession:(id*)arg2 assetQuality:(unsigned int*)arg3 error:(id*)arg4 usingStoreDownload:(id)arg5 assetOptions:(id)arg6 shouldStartDownload:(BOOL)arg7;
- (void)_handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2;
- (void)_handleUpdatedLikedState:(int)arg1 completion:(id /* block */)arg2;
- (void)_loadMediaItemWithCompletionHandler:(id /* block */)arg1;
- (void)_mediaPlaybackItemMetadataDidChangeNotification:(id)arg1;
- (void)_mediaPlaybackItemMetadataLikedStateDidChangeNotification:(id)arg1;
- (id)_newTimeMarkersForChapterType:(int)arg1;
- (int)_persistedLikedState;
- (id)_playbackPositionDomain;
- (id)_playbackPositionEntity;
- (id)_playbackPositionEntityWithLoadedStoreUbiquitousIdentifier:(id)arg1;
- (id)_playbackPositionService;
- (void)_prioritizeDownloadSessionsIfNeeded;
- (BOOL)_shouldRememberBookmarkTime;
- (id)_storeUbiquitousIdentifier;
- (void)_updateBookmarkTimeIfNecessary:(double)arg1 isCheckpoint:(BOOL)arg2;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (id)album;
- (id)albumArtist;
- (long long)albumStoreID;
- (unsigned int)albumTrackCount;
- (unsigned int)albumTrackNumber;
- (BOOL)allowsAirPlayFromCloud;
- (BOOL)allowsEQ;
- (BOOL)allowsExternalPlayback;
- (id)alternativeConfigurationOptions;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1;
- (id)artist;
- (long long)artistStoreID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkers;
- (id)assetSourceStoreFrontID;
- (BOOL)canSeedGenius;
- (id)chapterTimeMarkers;
- (id)composer;
- (id)copyrightText;
- (int)customAVEQPreset;
- (void)dealloc;
- (id)description;
- (BOOL)didDeferLeaseStart;
- (unsigned int)discCount;
- (unsigned int)discNumber;
- (id)displayableText;
- (double)durationFromExternalMetadata;
- (long long)equivalencySourceAdamID;
- (id)externalContentIdentifier;
- (id)genre;
- (void)handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2;
- (BOOL)hasAlternatesForTypes:(unsigned int)arg1;
- (id)init;
- (id)initWithPlaybackItemMetadata:(id)arg1 options:(unsigned int)arg2;
- (BOOL)isAssetURLValid;
- (BOOL)isCloudItem;
- (BOOL)isExplicitTrack;
- (BOOL)isLikedStateEnabled;
- (BOOL)isStreamable;
- (BOOL)isStreamingLowQualityAsset;
- (BOOL)isSupportedDefaultPlaybackSpeed:(int)arg1;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (id)mediaItem;
- (id)modelObject;
- (id)modelSong;
- (long long)mpcReporting_equivalencySourceAdamID;
- (id)mpcReporting_requestingBundleIdentifier;
- (id)mpcReporting_requestingBundleVersion;
- (void)notePlaybackFinishedByHittingEnd;
- (unsigned int)options;
- (unsigned long long)persistentID;
- (id)playbackInfo;
- (id)playbackItemMetadata;
- (void)prepareForRate:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)reevaluateType;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setAlternateAudioTrackLocale:(id)arg1;
- (void)setAssetSourceStoreFrontID:(id)arg1;
- (void)setEquivalencySourceAdamID:(long long)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setRating:(float)arg1;
- (void)setRequestingBundleIdentifier:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;
- (id)storeDownload;
- (long long)storeItemInt64ID;
- (int)storePlaybackEndpointType;
- (long long)storeSubscriptionAdamID;
- (unsigned int)streamType;
- (BOOL)supportsLikedState;
- (BOOL)supportsRewindAndFastForward15Seconds;
- (id)titlesForTime:(double)arg1;
- (int)type;
- (id)urlTimeMarkers;
- (BOOL)useEmbeddedChapterData;
- (float)userRating;
- (BOOL)usesSubscriptionLease;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (void)_registerCustomEntityValueHandlers;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (BOOL)mpcReporting_isValidReportingItem;
- (BOOL)mpcReporting_shouldReportPlayEventsToStore;

@end
