/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class <IUGeniusMixQueueFeederDataSource>;

@interface IUGeniusMixQueueFeeder : IUMediaQueryQueueFeeder {
    unsigned int _currentPlaylistOffset;
    <IUGeniusMixQueueFeederDataSource> *_dataSource;
    BOOL _disableNewPlaylists;
    BOOL _disableRepeat;
}

@property(retain) <IUGeniusMixQueueFeederDataSource> * dataSource;

- (void)_appDefaultChangedNotification:(id)arg1;
- (BOOL)_configureWithMix:(id)arg1 dataSource:(id)arg2 startEntityIndex:(unsigned int)arg3 startPlayback:(BOOL)arg4;
- (void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (unsigned int)indexOfMediaItem:(id)arg1;
- (id)init;
- (unsigned int)itemCount;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)mediaItemAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfPaths;
- (id)pathAtIndex:(unsigned int)arg1;
- (id)query;
- (unsigned int)realRepeatType;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2;
- (void)setDataSource:(id)arg1;
- (BOOL)shouldReloadForChangeFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (void)shuffleItemsWithAnchor:(unsigned int*)arg1;

@end
