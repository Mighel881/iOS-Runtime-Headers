/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlertController : NSObject <TLAlertPlaybackBackEndController> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _accessQueueLabel;
    NSMapTable * _alertContexts;
    TLAlertQueuePlayerController * _queuePlayerController;
    TLAlertSystemSoundController * _systemSoundController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (int)_playbackBackEndForAlert:(id)arg1;
+ (BOOL)_shouldStopAlertForUserInterruption:(id)arg1;
+ (id)sharedAlertController;

- (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (id)_controllerForPlaybackBackEnd:(int)arg1;
- (void)_didCompletePlaybackOfAlert:(id)arg1;
- (void)_didReachTimeoutForAlert:(id)arg1;
- (void)_performBlockOnAccessQueue:(id /* block */)arg1;
- (id)_prepareForPlayingAlert:(id)arg1;
- (id)_queuePlayerController;
- (BOOL)_stopAllAlertsInCurrentProcess;
- (void)_stopPlayingAlerts:(id)arg1 withOptions:(struct { double x1; })arg2 playbackCompletionType:(int)arg3 completionHandler:(id /* block */)arg4;
- (void)_stopRepeatedlyPlayingAlert:(id)arg1 withOptions:(unsigned int)arg2 completionHandler:(id /* block */)arg3 targetQueue:(id)arg4;
- (id)_systemSoundController;
- (void)dealloc;
- (void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(BOOL)arg2;
- (id)init;
- (void)performBlockOnAudioEventQueue:(id /* block */)arg1;
- (void)playAlert:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (BOOL)stopAllAlerts;
- (void)stopPlayingAlerts:(id)arg1 withOptions:(struct { double x1; })arg2 playbackCompletionType:(int)arg3 completionHandler:(id /* block */)arg4;
- (void)stopRepeatedlyPlayingAlert:(id)arg1 withOptions:(unsigned int)arg2 completionHandler:(id /* block */)arg3 targetQueue:(id)arg4;
- (void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;

@end
