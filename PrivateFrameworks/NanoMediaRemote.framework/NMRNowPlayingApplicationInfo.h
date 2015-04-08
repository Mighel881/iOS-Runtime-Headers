/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@class NSString, _NMRNowPlayingApplicationStateProtobuf;

@interface NMRNowPlayingApplicationInfo : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRNowPlayingApplicationStateProtobuf *_protobuf;
}

@property(copy) NSString * companionBundleIdentifier;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * localizedDisplayName;
@property unsigned int playbackState;
@property(readonly) Class superclass;
@property(copy) NSString * watchBundleIdentifier;

- (void).cxx_destruct;
- (id)companionBundleIdentifier;
- (id)init;
- (id)initWithProtobufData:(id)arg1;
- (id)localizedDisplayName;
- (unsigned int)playbackState;
- (id)protobufData;
- (void)setCompanionBundleIdentifier:(id)arg1;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setWatchBundleIdentifier:(id)arg1;
- (id)watchBundleIdentifier;

@end
