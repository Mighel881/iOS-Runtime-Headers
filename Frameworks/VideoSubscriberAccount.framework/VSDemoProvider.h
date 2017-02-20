/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSDemoProvider : NSObject {
    NSString * _appIdentifier;
    NSURL * _appStoreRoomURL;
    NSArray * _authProtocols;
    NSArray * _authTemplates;
    VSCookieServer * _cookieServer;
    BOOL  _prohibited;
    NSString * _providerIdentifier;
    VSDemoProviderServer * _server;
    NSString * _vendorIdentifier;
}

@property (nonatomic, copy) NSString *appIdentifier;
@property (nonatomic, copy) NSURL *appStoreRoomURL;
@property (nonatomic, copy) NSArray *authProtocols;
@property (nonatomic, copy) NSArray *authTemplates;
@property (nonatomic, readonly, copy) NSURL *authURL;
@property (nonatomic, retain) VSCookieServer *cookieServer;
@property (nonatomic, copy) NSString *displayName;
@property (getter=isProhibited, nonatomic) BOOL prohibited;
@property (nonatomic, copy) NSString *providerIdentifier;
@property (nonatomic, retain) VSDemoProviderServer *server;
@property (nonatomic, copy) NSString *vendorIdentifier;

+ (id)deafultDemoProvidersStoreResponse;
+ (id)defaultDemoProviders;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)appStoreRoomURL;
- (id)authProtocols;
- (id)authTemplates;
- (id)authURL;
- (id)cookieServer;
- (id)displayName;
- (id)init;
- (BOOL)isProhibited;
- (id)providerIdentifier;
- (id)server;
- (void)setAppIdentifier:(id)arg1;
- (void)setAppStoreRoomURL:(id)arg1;
- (void)setAuthProtocols:(id)arg1;
- (void)setAuthTemplates:(id)arg1;
- (void)setCookieServer:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setProhibited:(BOOL)arg1;
- (void)setProviderIdentifier:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setVendorIdentifier:(id)arg1;
- (id)vendorIdentifier;

@end
