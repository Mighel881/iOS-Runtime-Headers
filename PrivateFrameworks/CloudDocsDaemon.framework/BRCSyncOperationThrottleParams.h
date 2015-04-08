/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncOperationThrottleParams : NSObject {
    double inactivityKickbackDelay;
    double inactivityKickbackRatio;
    double maxWait;
    double minWait;
    double ratioOnFailure;
    double ratioOnQuotaErrorClear;
    double ratioOnSuccess;
}

@property double inactivityKickbackDelay;
@property double inactivityKickbackRatio;
@property double maxWait;
@property double minWait;
@property double ratioOnFailure;
@property double ratioOnQuotaErrorClear;
@property double ratioOnSuccess;

- (BOOL)check;
- (double)doubleForKey:(id)arg1 inParams:(id)arg2 defaults:(id)arg3;
- (double)inactivityKickbackDelay;
- (double)inactivityKickbackRatio;
- (id)initWithParams:(id)arg1 defaults:(id)arg2;
- (double)maxWait;
- (double)minWait;
- (double)ratioOnFailure;
- (double)ratioOnQuotaErrorClear;
- (double)ratioOnSuccess;
- (void)setInactivityKickbackDelay:(double)arg1;
- (void)setInactivityKickbackRatio:(double)arg1;
- (void)setMaxWait:(double)arg1;
- (void)setMinWait:(double)arg1;
- (void)setRatioOnFailure:(double)arg1;
- (void)setRatioOnQuotaErrorClear:(double)arg1;
- (void)setRatioOnSuccess:(double)arg1;
- (void)setupWithParams:(id)arg1 defaults:(id)arg2;

@end
