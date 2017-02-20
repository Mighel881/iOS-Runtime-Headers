/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision {
    struct { 
        int type; 
        unsigned long long value; 
        unsigned long long reserved; 
    }  _allowance;
    unsigned long long  _baselineValue;
    unsigned long long  _consumedValue;
    NSObject<OS_dispatch_queue> * _queue;
    BSMachPortSendRight * _taskRight;
    BSTimer * _timer;
}

@property (nonatomic) struct { int x1; unsigned long long x2; unsigned long long x3; } allowance;
@property (nonatomic) int type;

+ (id)provisionWithAllowance:(struct { int x1; unsigned long long x2; unsigned long long x3; })arg1;
+ (id)provisionWithResourceType:(int)arg1 timeInterval:(double)arg2;

- (void)_beginMonitoring;
- (double)_getElapsedCPUTimeForTaskPort:(unsigned int)arg1;
- (void)_prepareForReuse;
- (BOOL)_queue_calculateValueConsumed:(out unsigned long long*)arg1;
- (void)_queue_evaluateConsumption;
- (void)_queue_noteAllowanceExhausted;
- (void)_queue_stopMonitoring;
- (BOOL)_queue_updateConsumption;
- (void)_stopMonitoring;
- (void)_updateProgress;
- (struct { int x1; unsigned long long x2; unsigned long long x3; })allowance;
- (BOOL)allowanceRemaining:(out struct { int x1; unsigned long long x2; unsigned long long x3; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithAllowance:(struct { int x1; unsigned long long x2; unsigned long long x3; })arg1;
- (BOOL)isResourceProvision;
- (void)setAllowance:(struct { int x1; unsigned long long x2; unsigned long long x3; })arg1;
- (id)succinctDescriptionBuilder;
- (int)type;

@end
