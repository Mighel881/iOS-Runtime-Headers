/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDQueueDictionary, NSString, NSXPCListener;

@interface ACDAuthenticationDialogManager : NSObject <ACDAuthenticationDialogManagerProtocol> {
    NSString *_activeAccountID;
    NSXPCListener *_authenticationDialogListener;
    ACDQueueDictionary *_dialogRequestQueues;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_confirmUserWantsToOpenAuthenticationURLForAccount:(id)arg1;
- (void)_launchDialogContainerAppForAccount:(id)arg1 shouldConfirm:(BOOL)arg2 completion:(id)arg3;
- (void)authenticationDialogCrashed;
- (void)authenticationDialogDidFinishWithSuccess:(BOOL)arg1 response:(id)arg2;
- (void)contextForAuthenticationDialog:(id)arg1;
- (id)init;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(id)arg4;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(BOOL)arg4 completion:(id)arg5;

@end
