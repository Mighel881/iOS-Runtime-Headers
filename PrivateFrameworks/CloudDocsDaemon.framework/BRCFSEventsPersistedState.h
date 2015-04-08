/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCAccountSession, NSUUID;

@interface BRCFSEventsPersistedState : NSObject <NSSecureCoding> {
    unsigned long long _latestEventID;
    unsigned long long _rootID;
    BRCAccountSession *_session;
    NSUUID *_streamUUID;
}

@property unsigned long long latestEventID;
@property unsigned long long rootID;
@property(retain) NSUUID * streamUUID;

+ (id)loadFromClientStateInSession:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)latestEventID;
- (unsigned long long)rootID;
- (void)setLatestEventID:(unsigned long long)arg1;
- (void)setRootID:(unsigned long long)arg1;
- (void)setStreamUUID:(id)arg1;
- (id)streamUUID;

@end
