/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLMoviePlayerControllerDelegate>, AVPlayer, AVPlayerItem, NSString, PLMoviePlayerView, PLTVOutWindow, UIAlertView;

@interface PLMoviePlayerController : NSObject {
    BOOL _TVOutEnabled;
    UIAlertView *_alertView;
    BOOL _audioSessionActive;
    unsigned int _backgroundTaskId;
    unsigned int _bufferingState;
    <PLMoviePlayerControllerDelegate> *_delegate;
    BOOL _exited;
    BOOL _forceDisableTVOut;
    BOOL _forceUpdateCurrentTime;
    BOOL _hasPendingTime;
    BOOL _isActiveController;
    BOOL _isExternalPlayback;
    BOOL _isPreparedForPlayback;
    BOOL _isSeeking;
    double _lastSetCurrentTimeTime;
    NSString *_originalAudioCategory;
    double _pendingTime;
    unsigned int _pendingTimeSnapOption;
    unsigned int _playbackState;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    PLTVOutWindow *_tvOutWindow;
    PLMoviePlayerView *_view;
}

@property BOOL TVOutEnabled;
@property(readonly) unsigned int bufferingState;
@property double currentTime;
@property <PLMoviePlayerControllerDelegate> * delegate;
@property(readonly) double duration;
@property(setter=_setForceDisableTVOut:) BOOL forceDisableTVOut;
@property BOOL isActiveController;
@property(readonly) BOOL isPreparedForPlayback;
@property(readonly) float playbackRate;
@property(readonly) unsigned int playbackState;
@property(retain,readonly) AVPlayer * player;
@property(retain,readonly) PLMoviePlayerView * view;

+ (id)AVAssetURLWithPath:(id)arg1;
+ (BOOL)_isNetworkSupportedPath:(id)arg1;
+ (BOOL)_isStreamableAsset:(id)arg1;

- (BOOL)TVOutEnabled;
- (BOOL)_allowsExternalPlayback;
- (id)_asset;
- (void)_delayedUpdateFromPendingTime;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_didLoadValueOfKey:(id)arg1 forAsset:(id)arg2;
- (void)_dispatchOnMainThreadWithBlock:(id)arg1;
- (void)_displayVideoView;
- (void)_exitPlayer:(int)arg1;
- (void)_loadAsset:(id)arg1;
- (void)_pausePlaybackForNotification;
- (void)_playbackFailedWithError:(id)arg1;
- (void)_playerItemDidReachEndNotification:(id)arg1;
- (void)_playerItemFailedToPlayToEnd:(id)arg1;
- (void)_playerItemFailedToPlayToEndNotification:(id)arg1;
- (id)_playerKeysToObserve;
- (void)_playerRateDidChange:(id)arg1;
- (void)_registerForNotifications;
- (void)_restoreTVOutVideoIfNecessary;
- (void)_screenDidConnect:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_serverConnectionDidDie:(id)arg1;
- (void)_setBufferingState:(unsigned int)arg1;
- (void)_setForceDisableTVOut:(BOOL)arg1;
- (void)_setPlaybackState:(unsigned int)arg1;
- (void)_setPlayerAudioSessionActive:(BOOL)arg1;
- (void)_setPlayerItem:(id)arg1;
- (void)_setupPlayer;
- (void)_setupTVOutWindow;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_streamBufferFull;
- (void)_streamLikelyToKeepUp;
- (void)_streamRanDry;
- (void)_streamUnlikelyToKeepUp;
- (void)_tearDownPlayer;
- (void)_tearDownTVOutWindow;
- (void)_unregisterForNotifications;
- (void)_updateAudioSession;
- (void)_updateBackgroundViewInformation;
- (void)_updateDisableAirPlayMirroringDuringPlayback;
- (void)_updateFromPendingTime;
- (void)_updateTVOutEnabled;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (void)_willResignNotification:(id)arg1;
- (void)_willSuspendNotification:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (unsigned int)bufferingState;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (void)didBecomeActiveController;
- (double)duration;
- (int)externalPlaybackType;
- (BOOL)forceDisableTVOut;
- (id)init;
- (BOOL)isActiveController;
- (BOOL)isExternalPlayback;
- (BOOL)isPreparedForPlayback;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)pauseDueToInsufficientData;
- (void)play;
- (void)playDueToEnoughData;
- (void)playFromBeginning;
- (float)playbackRate;
- (unsigned int)playbackState;
- (id)player;
- (void)requestToBecomeActiveController;
- (void)requestToResignAsActiveController;
- (void)resetPlayer;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned int)arg2;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned int)arg2 forceUpdate:(BOOL)arg3;
- (void)setDelegate:(id)arg1;
- (void)setIsActiveController:(BOOL)arg1;
- (void)setPlayerItem:(id)arg1 startTime:(double)arg2;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)stop;
- (void)tearDownTVOutWindow;
- (BOOL)videoOutActive;
- (id)view;
- (void)willResignAsActiveController;

@end
