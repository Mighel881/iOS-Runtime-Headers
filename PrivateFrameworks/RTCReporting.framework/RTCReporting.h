/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSXPCConnection;

@interface RTCReporting : NSObject {
    NSXPCConnection *_connection;
    int _counter;
    NSArray *_enabledBackendNames;
    int _intervalMultiplier;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loggingBlock;

    NSMutableDictionary *_periodicServiceDict;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    NSObject<OS_dispatch_source> *_timer;
}

@property(copy) id messageLoggingBlock;

+ (id)getPersistentIdentifierForDNU:(BOOL)arg1;
+ (BOOL)sendMsgToServer:(int)arg1 serverStoreBagName:(id)arg2 defaultSvrIP:(id)arg3 defaultSvrPort:(unsigned short)arg4 componentType:(int)arg5 version:(unsigned short)arg6 sessionID:(unsigned int)arg7 eventID:(unsigned short)arg8 method:(unsigned short)arg9 respCode:(unsigned short)arg10 dict:(id)arg11;
+ (BOOL)sendOneMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 error:(id*)arg6;

- (void)_myPeriodicTask:(unsigned short)arg1 type:(unsigned short)arg2;
- (void)dealloc;
- (void)fetchReportingStatesWithUserInfo:(id)arg1 fetchComplete:(id)arg2;
- (BOOL)flushMessages;
- (int)getUploadflag;
- (id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3;
- (id)initWithSessionInfo:(int)arg1 version:(unsigned short)arg2 sessionID:(unsigned int)arg3;
- (id)initWithSessionInfo:(int)arg1 version:(unsigned short)arg2 sessionID:(unsigned int)arg3 frameworksToCheck:(id)arg4;
- (id)messageLoggingBlock;
- (BOOL)registerPeriodicTask:(id)arg1 needToUpDate:(bool)arg2 needToReport:(bool)arg3 service_block:(id)arg4;
- (BOOL)registerPeriodicTaskForModule:(unsigned int)arg1 needToUpdate:(BOOL)arg2 needToReport:(BOOL)arg3 serviceBlock:(id)arg4;
- (BOOL)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 error:(id*)arg4;
- (void)sendMsgWithMethod:(unsigned short)arg1 respCode:(unsigned short)arg2 dict:(id)arg3;
- (BOOL)serverSupportsFileUpload;
- (void)setMessageLoggingBlock:(id)arg1;
- (BOOL)setReportToServer:(id)arg1 completionHandler:(id)arg2;
- (BOOL)setReportToServer:(int)arg1 serverStoreBagName:(id)arg2 defaultSvrIP:(id)arg3 defaultSvrPort:(unsigned short)arg4 msgBlock:(id)arg5;
- (void)setUserInfoDict:(id)arg1;
- (void)startConfigurationWithCompletionHandler:(id)arg1;
- (BOOL)startLogTimerWithInterval:(int)arg1 reportingFrequency:(int)arg2 reportingMethod:(unsigned short)arg3 reportingStatus:(unsigned short)arg4;
- (void)startLogTimerWithInterval:(int)arg1 reportingMultiplier:(int)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4;
- (void)stopLogTimer;
- (BOOL)stopLogTimerForSession;
- (BOOL)unregisterPeriodTask:(id)arg1 unservice_block:(id)arg2;
- (BOOL)unregisterPeriodTaskForModule:(unsigned int)arg1;
- (BOOL)uploadDataArray:(id)arg1 completionHandler:(id)arg2;
- (BOOL)uploadFileWithName:(id)arg1;
- (BOOL)uploadFileWithURL:(id)arg1 completionHandler:(id)arg2;

@end
