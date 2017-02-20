/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRUserSettings : NSObject {
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) double bluetoothDeviceResumeDuration;
@property (nonatomic, readonly) double broadcastCommandWaitDuration;
@property (nonatomic, readonly) BOOL hasTelevisionSocketQOSLevelSet;
@property (nonatomic, readonly) double televisionDisconnectSleepDuration;
@property (nonatomic, readonly) double televisionDisconnectWaitDuration;
@property (nonatomic, readonly) double televisionNowPlayingInfoArtworkCoalesceDuration;
@property (nonatomic, readonly) double televisionNowPlayingInfoCoalesceDuration;
@property (getter=isTelevisionPairingAllowed, nonatomic) BOOL televisionPairingAllowed;
@property (nonatomic, readonly) double televisionSleepAssertionOnClientConnectDuration;
@property (nonatomic, readonly) int televisionSocketQOSLevel;
@property (nonatomic, readonly) double televisionTimeoutDuration;
@property (nonatomic, readonly) BOOL useDebugAVRouteWithoutVolumeControl;
@property (nonatomic, readonly) BOOL useNoDelayOptionForTelevisionSockets;
@property (nonatomic, readonly) BOOL usePeerToPeerTelevisionConnections;

+ (id)currentSettings;

- (BOOL)_boolValueForKey:(id)arg1 usingDefaultValue:(BOOL)arg2;
- (double)_doubleValueForKey:(id)arg1 usingDefaultValue:(BOOL)arg2;
- (double)bluetoothDeviceResumeDuration;
- (double)broadcastCommandWaitDuration;
- (void)dealloc;
- (BOOL)hasTelevisionSocketQOSLevelSet;
- (id)init;
- (BOOL)isTelevisionPairingAllowed;
- (void)setTelevisionPairingAllowed:(BOOL)arg1;
- (double)televisionDisconnectSleepDuration;
- (double)televisionDisconnectWaitDuration;
- (double)televisionNowPlayingInfoArtworkCoalesceDuration;
- (double)televisionNowPlayingInfoCoalesceDuration;
- (double)televisionSleepAssertionOnClientConnectDuration;
- (int)televisionSocketQOSLevel;
- (double)televisionTimeoutDuration;
- (BOOL)useDebugAVRouteWithoutVolumeControl;
- (BOOL)useNoDelayOptionForTelevisionSockets;
- (BOOL)usePeerToPeerTelevisionConnections;

@end
