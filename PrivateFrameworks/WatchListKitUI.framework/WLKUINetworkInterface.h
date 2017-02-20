/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUINetworkInterface : IKJSObject <WLKUINetworkInterface> {
    BOOL  _suppressServerConfigNotifications;
}

- (void)_fireInitConfigCallbackWithUUID:(id)arg1;
- (void)_handleAppLibChange:(id)arg1;
- (void)_handleServerConfigChange:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)dealloc;
- (void)fetchConfiguration:(BOOL)arg1 :(id)arg2;
- (id)initWithAppContext:(id)arg1;
- (void)invalidateConfiguration;
- (id)makeRequest:(id)arg1 :(id)arg2;

@end
