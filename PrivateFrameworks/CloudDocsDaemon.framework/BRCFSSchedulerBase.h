/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCAccountSession, BRCDeadlineToken, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, PQLNameInjection;

@interface BRCFSSchedulerBase : NSObject <BRCLifeCycle> {
    BOOL _hasActiveWork;
    BOOL _hasWork;
    NSObject<OS_dispatch_group> *_hasWorkGroup;
    BOOL _isCancelled;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_schedulerQueue;
    BRCDeadlineToken *_schedulerToken;
    BRCAccountSession *_session;
    PQLNameInjection *_tableName;
}

@property(readonly) BOOL closed;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL hasActiveWork;
@property BOOL hasWork;
@property(retain) NSObject<OS_dispatch_group> * hasWorkGroup;
@property(readonly) unsigned int hash;
@property BOOL isCancelled;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canRetryThrottleID:(long long)arg1 zone:(id)arg2;
- (void)_close;
- (void)_computeStamps:(struct throttle_stamps { unsigned int x1; int x2; long long x3; long long x4; long long x5; }*)arg1 throttleID:(long long)arg2 zone:(id)arg3 throttle:(id)arg4 hasBeenTried:(BOOL)arg5;
- (void)_deleteThrottleID:(long long)arg1 zone:(id)arg2;
- (void)_describe:(id)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4;
- (id)_initWithSession:(id)arg1 name:(id)arg2 tableName:(id)arg3;
- (void)_schedule;
- (void)_scheduleDone:(long long)arg1 nextWork:(long long)arg2;
- (void)_signalForNextWork:(long long)arg1;
- (long long)_updateStamps:(struct throttle_stamps { unsigned int x1; int x2; long long x3; long long x4; long long x5; }*)arg1 throttle:(id)arg2 now:(long long)arg3;
- (void)cancel;
- (void)close;
- (BOOL)closed;
- (void)deleteExpiredThrottles;
- (void)deleteThrottlesForZone:(id)arg1;
- (id)descriptionForThrottleID:(long long)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4;
- (id)descriptionForZone:(id)arg1 now:(long long)arg2 context:(id)arg3;
- (BOOL)hasActiveWork;
- (BOOL)hasWork;
- (id)hasWorkGroup;
- (BOOL)isCancelled;
- (void)resume;
- (void)setHasActiveWork:(BOOL)arg1;
- (void)setHasWork:(BOOL)arg1;
- (void)setHasWorkGroup:(id)arg1;
- (void)setIsCancelled:(BOOL)arg1;
- (void)suspend;
- (void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3;

@end
