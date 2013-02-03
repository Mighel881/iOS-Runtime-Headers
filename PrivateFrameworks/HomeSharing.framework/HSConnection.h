/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class HSFairPlayInfo, HSConnectionStream, SSAccount, NSString, NSDictionary, NSURL;

@interface HSConnection : NSObject {
    SSAccount *_account;
    NSURL *_baseURL;
    HSConnectionStream *_concurrentConnectionStream;
    int _connectionState;
    HSConnectionStream *_connectionStream;
    int _connectionType;
    struct dispatch_queue_s { } *_queue;
    struct __CFReadStream { } *_readStream;
    BOOL authenticationRequired;
    unsigned int basePlaylistContainerID;
    NSString *buildIdentifier;
    NSDictionary *cookies;
    unsigned int databaseID;
    unsigned int databaseRevision;
    HSFairPlayInfo *fairPlayInfo;
    NSString *homeSharingGroupID;
    NSString *password;
    unsigned int sessionID;
    NSString *userAgent;
    NSString *username;
}

@property(retain) SSAccount * account;
@property(getter=isAuthenticationRequired) BOOL authenticationRequired;
@property unsigned int basePlaylistContainerID;
@property(readonly) NSURL * baseURL;
@property(copy) NSString * buildIdentifier;
@property int connectionState;
@property(readonly) int connectionType;
@property(copy) NSDictionary * cookies;
@property unsigned int databaseID;
@property unsigned int databaseRevision;
@property(retain) HSFairPlayInfo * fairPlayInfo;
@property(copy) NSString * homeSharingGroupID;
@property(copy) NSString * password;
@property unsigned int sessionID;
@property(copy) NSString * userAgent;
@property(copy) NSString * username;

- (void)_continueFPSetupNegotiationWithData:(id)arg1 internalConnectionCompletionHandler:(id)arg2;
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id)arg1;
- (void)_notifyServerOfActivity;
- (void)_sendRequest:(id)arg1 onConnectionStream:(id)arg2 withInternalResponseHandler:(id)arg3;
- (id)account;
- (unsigned int)basePlaylistContainerID;
- (id)baseURL;
- (id)buildIdentifier;
- (void)checkForDatabaseUpdatesWithCompletionHandler:(id)arg1;
- (void)connectWithCompletionHandler:(id)arg1;
- (int)connectionState;
- (int)connectionType;
- (id)cookies;
- (unsigned int)databaseID;
- (unsigned int)databaseRevision;
- (void)dealloc;
- (void)disconnect;
- (id)fairPlayInfo;
- (id)homeSharingGroupID;
- (id)initWithBaseURL:(id)arg1 connectionType:(int)arg2;
- (id)initWithBaseURL:(id)arg1;
- (BOOL)isAuthenticationRequired;
- (id)password;
- (void)sendConcurrentRequest:(id)arg1 withResponseHandler:(id)arg2;
- (void)sendRequest:(id)arg1 withResponseHandler:(id)arg2;
- (unsigned int)sessionID;
- (void)setAccount:(id)arg1;
- (void)setAuthenticationRequired:(BOOL)arg1;
- (void)setBasePlaylistContainerID:(unsigned int)arg1;
- (void)setBuildIdentifier:(id)arg1;
- (void)setConnectionState:(int)arg1;
- (void)setCookies:(id)arg1;
- (void)setDatabaseID:(unsigned int)arg1;
- (void)setDatabaseRevision:(unsigned int)arg1;
- (void)setFairPlayInfo:(id)arg1;
- (void)setHomeSharingGroupID:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setSessionID:(unsigned int)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)userAgent;
- (id)username;

@end
