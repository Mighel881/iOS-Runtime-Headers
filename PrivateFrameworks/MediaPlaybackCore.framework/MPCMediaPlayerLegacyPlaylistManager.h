/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaPlayerLegacyPlaylistManager : MPAVPlaylistManager <MPCQueueBehaviorManaging> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    BOOL  _disableQueueModifications;
    BOOL  _disableSoftQueueFaulting;
    NSMutableIndexSet * _failedSoftQueueIndexes;
    int  _hardQueueInsertionIndex;
    NSMutableArray * _hardQueueSourceContexts;
    MPMutableBidirectionalDictionary * _identifiersToIndexes;
    BOOL  _ignoreHardQueueInvalidation;
    BOOL  _ignoreNextIndexChanges;
    BOOL  _ignoreSoftQueueInvalidation;
    MPAVItem * _lastPlayedSoftQueueItem;
    unsigned int  _maximumModifiedPlaylistIterationIndex;
    unsigned int  _maximumPlaylistIndex;
    unsigned int  _minimumPlaylistIndex;
    int  _nextCurrentIndex;
    _MPCAVItemSourceContext * _repeatPlaylistIdentifer;
    MPQueueFeeder * _softQueueFeeder;
    _MPCAVPlaylistIteration * _softQueueModifications;
}

@property (nonatomic, readonly) BOOL allowsUserVisibleUpcomingItems;
@property (nonatomic, readonly) BOOL canSeek;
@property (nonatomic, readonly) BOOL canSkipToPreviousItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableQueueModifications;
@property (nonatomic) int hardQueueInsertionIndex;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } hardQueuePlaylistIndexRange;
@property (nonatomic, retain) NSMutableArray *hardQueueSourceContexts;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MPAVItem *lastPlayedSoftQueueItem;
@property (nonatomic) int nextCurrentIndex;
@property (nonatomic, readonly) int playbackMode;
@property (nonatomic, copy) _MPCAVItemSourceContext *repeatPlaylistIdentifer;
@property (nonatomic, retain) MPQueueFeeder *softQueueFeeder;
@property (nonatomic, retain) _MPCAVPlaylistIteration *softQueueModifications;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } softQueuePlaylistIndexRange;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL userCanChangeShuffleAndRepeatType;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_handleConfiguredQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2;
- (int)_hardQueueIndexForIndex:(int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_hardQueuePlaylistIndexRangeIncludingCurrentItem:(BOOL)arg1;
- (void)_insertSoftQueueSourceContext:(id)arg1 atIndex:(int)arg2;
- (id)_itemForPlaylistIndex:(int)arg1;
- (id)_itemForSourceContext:(id)arg1;
- (BOOL)_itemIsHardQueueItem:(id)arg1;
- (BOOL)_itemIsSoftQueueItem:(id)arg1;
- (id)_metadataItemForSourceContext:(id)arg1;
- (void)_notifyQueueFeederContentsChanged;
- (int)_playlistIndexOfItemIdentifier:(id)arg1;
- (id)_playlistIterationForQueueFeeder:(id)arg1 withMaxQueueIndexToPreload:(unsigned int)arg2;
- (int)_prepareToQueuePlaybackIndex:(int)arg1 selectionDirection:(int)arg2;
- (id)_queueFeeder:(id)arg1 itemForIdentifier:(id)arg2;
- (BOOL)_removeHardQueueItems;
- (id)_removeSoftQueueSourceContextAtIndex:(int)arg1;
- (int)_softQueueIndexForIndex:(int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_softQueuePlaylistIndexRangeIncludingCurrentItem:(BOOL)arg1;
- (id)_softQueueSourceContextForIndex:(int)arg1;
- (id)_sourceContextForPlaylistIndex:(unsigned int)arg1;
- (void)_willFinishReloadWithQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2;
- (void)addPlaybackContext:(id)arg1 toQueueWithInsertionType:(int)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)canSkipToPreviousItem;
- (void)clearHardQueue;
- (void)clearSoftQueue;
- (int)currentIndex;
- (BOOL)disableQueueModifications;
- (unsigned int)displayCountForItem:(id)arg1;
- (unsigned int)displayIndexForItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeStateRestorationWithCompletionHandler:(id /* block */)arg1;
- (void)handlePlaybackFailureForItem:(id)arg1;
- (int)hardQueueInsertionIndex;
- (struct _NSRange { unsigned int x1; unsigned int x2; })hardQueuePlaylistIndexRange;
- (id)hardQueueSourceContexts;
- (id)identifierAtIndex:(unsigned int)arg1 queueFeeder:(id)arg2;
- (unsigned int)indexOfItemWithIdentifier:(id)arg1 queueFeeder:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)itemForPlaylistIndex:(int)arg1;
- (id)lastPlayedSoftQueueItem;
- (id)metadataItemForPlaylistIndex:(int)arg1;
- (void)moveItemAtPlaybackIndex:(int)arg1 toPlaybackIndex:(int)arg2 intoHardQueue:(BOOL)arg3;
- (int)nextCurrentIndex;
- (void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3;
- (id)playlistFeeder;
- (id)playlistFeederForPlaylistIndex:(int)arg1;
- (int)playlistIndexOfIndex:(int)arg1 inPlaylistFeeder:(id)arg2;
- (int)playlistIndexOfItem:(id)arg1;
- (int)playlistIndexOfItemIdentifier:(id)arg1;
- (int)playlistIndexOfQueueIdentifier:(id)arg1 inPlaylistFeeder:(id)arg2;
- (int)playlistIndexWithDelta:(int)arg1 fromIndex:(int)arg2 ignoreElapsedTime:(BOOL)arg3 didReachEnd:(BOOL*)arg4;
- (unsigned int)playlistItemCount;
- (BOOL)preventsHardQueueModificationsForItem:(id)arg1;
- (id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;
- (void)queueFeeder:(id)arg1 didChangeContentsWithPreferredStartIndex:(unsigned int)arg2 error:(id)arg3;
- (void)queueFeeder:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;
- (void)queueFeederDidInvalidateRealShuffleType:(id)arg1;
- (void)removeItemAtPlaybackIndex:(int)arg1;
- (id)repeatPlaylistIdentifer;
- (void)setCurrentIndex:(int)arg1 selectionDirection:(int)arg2;
- (void)setDisableQueueModifications:(BOOL)arg1;
- (void)setHardQueueInsertionIndex:(int)arg1;
- (void)setHardQueueSourceContexts:(id)arg1;
- (void)setLastPlayedSoftQueueItem:(id)arg1;
- (void)setNextCurrentIndex:(int)arg1;
- (BOOL)setPlaylistFeeder:(id)arg1 startIndex:(int)arg2 keepPlaying:(BOOL)arg3;
- (void)setRepeatMode:(int)arg1;
- (void)setRepeatPlaylistIdentifer:(id)arg1;
- (void)setSoftQueueFeeder:(id)arg1;
- (void)setSoftQueueModifications:(id)arg1;
- (id)softQueueFeeder;
- (id)softQueueModifications;
- (struct _NSRange { unsigned int x1; unsigned int x2; })softQueuePlaylistIndexRange;
- (BOOL)supportsAddToQueue;
- (BOOL)userCanChangeShuffleAndRepeatType;

@end
