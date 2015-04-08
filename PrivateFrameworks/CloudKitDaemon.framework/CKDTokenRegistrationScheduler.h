/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface CKDTokenRegistrationScheduler : NSObject <CKDSystemAvailabilityWatcher> {
    NSMutableDictionary *_callbackBlocks;
    NSMutableDictionary *_callbackTimers;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_requests;
    NSObject<OS_dispatch_source> *_scheduleTimer;
}

@property(retain) NSMutableDictionary * callbackBlocks;
@property(retain) NSMutableDictionary * callbackTimers;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(retain) NSMutableSet * requests;
@property(retain) NSObject<OS_dispatch_source> * scheduleTimer;
@property(readonly) Class superclass;

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (void)_refreshToken:(id)arg1 appContainerTuple:(id)arg2 apsEnvironmentString:(id)arg3 usesAPSPublicToken:(int)arg4 darkWakeEnabled:(BOOL)arg5 completionBlock:(id)arg6;
- (void)_removeToken:(id)arg1 appContainerTuple:(id)arg2 apsEnvironmentString:(id)arg3 usesAPSPublicToken:(int)arg4 darkWakeEnabled:(BOOL)arg5 completionBlock:(id)arg6;
- (void)_scheduleTokenRefresh;
- (id)callbackBlocks;
- (id)callbackTimers;
- (void)dealloc;
- (void)ensureTokenRefreshForAppContainerTuple:(id)arg1 apsEnvironmentString:(id)arg2 useAPSPublicToken:(BOOL)arg3 darkWakeEnabled:(BOOL)arg4 completionBlock:(id)arg5;
- (void)forceTokenRefreshForAllClients;
- (void)handlePublicPushTokenDidUpdate:(id)arg1;
- (void)handlePushTokenDidUpdate:(id)arg1;
- (id)init;
- (id)queue;
- (void)refreshAllClientsNow;
- (id)requests;
- (id)scheduleTimer;
- (void)scheduleTokenRefresh;
- (void)setCallbackBlocks:(id)arg1;
- (void)setCallbackTimers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setScheduleTimer:(id)arg1;
- (void)systemAvailabilityChanged:(BOOL)arg1;
- (void)tokenRefreshChanged;
- (void)unregisterAllTokensWithCompletionHandler:(id)arg1;
- (void)unregisterTokenForAppContainerTuple:(id)arg1;

@end
