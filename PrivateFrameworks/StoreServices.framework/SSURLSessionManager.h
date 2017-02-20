/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSURLSessionManager : NSObject <NSCacheDelegate, NSURLSessionDataDelegate> {
    NSObject<OS_dispatch_queue> * _eventQueue;
    SSMetricsController * _metricsController;
    NSMutableDictionary * _sessions;
    NSObject<OS_dispatch_queue> * _sessionsQueue;
    NSMapTable * _taskDelegates;
    NSObject<OS_dispatch_queue> * _taskDelegatesQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *eventQueue;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SSMetricsController *metricsController;
@property (nonatomic, retain) NSMutableDictionary *sessions;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sessionsQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMapTable *taskDelegates;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *taskDelegatesQueue;

+ (id)_DNSServerIPAddresses;
+ (id)_bagPerformanceValues;
+ (id)_bagValueForKey:(id)arg1;
+ (double)_localTimeIntervalToServerTimeInterval:(double)arg1;
+ (id)_resolvedIPAddressFromTask:(id)arg1;
+ (BOOL)_shouldCreateLocalCache;
+ (double)_timingDataMetricToServerTimeInterval:(id)arg1;
+ (id)eventFromTimingData:(id)arg1 task:(id)arg2;
+ (id)eventFromTimingData:(id)arg1 task:(id)arg2 error:(id)arg3;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)_PIDFromAuditTokenData:(id)arg1;
- (id)_URLCacheForDelegate:(id)arg1;
- (id)_URLCacheIDForDelegate:(id)arg1;
- (id)_delegateForTask:(id)arg1;
- (void)_insertEventIntoDatabase:(id)arg1;
- (void)_removeDelegateForTask:(id)arg1;
- (id)_sessionConfigurationWithDelegate:(id)arg1 collectTimingData:(BOOL)arg2;
- (id)_sessionIDWithDelegate:(id)arg1 collectTimingData:(BOOL)arg2;
- (id)_sessionWithDelegate:(id)arg1;
- (void)_setDelegate:(id)arg1 forTask:(id)arg2;
- (BOOL)_shouldDisableCellularForDelegate:(id)arg1;
- (BOOL)_shouldRequireCelluarForDelegate:(id)arg1;
- (BOOL)_shouldSetCookiesForDelegate:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)eventQueue;
- (id)init;
- (id)metricsController;
- (id)sessions;
- (id)sessionsQueue;
- (void)setEventQueue:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (void)setSessions:(id)arg1;
- (void)setSessionsQueue:(id)arg1;
- (void)setTaskDelegates:(id)arg1;
- (void)setTaskDelegatesQueue:(id)arg1;
- (id)taskDelegates;
- (id)taskDelegatesQueue;

@end
