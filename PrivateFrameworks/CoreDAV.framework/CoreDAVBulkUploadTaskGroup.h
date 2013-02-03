/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableDictionary, NSString, NSDictionary, NSURL;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    void *_context;
    NSURL *_folderURL;
    NSMutableDictionary *_hrefToETag;
    NSMutableDictionary *_hrefToErrorItems;
    NSMutableDictionary *_hrefToStatus;
    NSString *_lastKnownCTag;
    unsigned int _multiPutBatchMaxNumResources;
    unsigned int _multiPutBatchMaxSize;
    NSMutableDictionary *_remainingHREFsToModDeleteActions;
    NSMutableDictionary *_remainingUUIDsToAddActions;
    NSMutableDictionary *_uuidToErrorItems;
    NSMutableDictionary *_uuidToHREF;
    NSMutableDictionary *_uuidToStatus;
    BOOL _validCTag;
}

@property(readonly) void* context;
@property(readonly) NSURL * folderURL;
@property(readonly) NSDictionary * hrefToETag;
@property(readonly) NSDictionary * hrefToErrorItems;
@property(readonly) NSDictionary * hrefToStatus;
@property unsigned int multiPutBatchMaxNumResources;
@property unsigned int multiPutBatchMaxSize;
@property(retain) NSString * nextCTag;
@property(readonly) NSDictionary * uuidToErrorItems;
@property(readonly) NSDictionary * uuidToHREF;
@property(readonly) NSDictionary * uuidToStatus;
@property(readonly) BOOL validCTag;

- (void)_sendNextBatch;
- (void*)context;
- (void)dealloc;
- (id)description;
- (id)folderURL;
- (id)hrefToETag;
- (id)hrefToErrorItems;
- (id)hrefToStatus;
- (id)initWithFolderURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 context:(void*)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;
- (unsigned int)multiPutBatchMaxNumResources;
- (unsigned int)multiPutBatchMaxSize;
- (Class)multiPutTaskClass;
- (id)nextCTag;
- (void)setMultiPutBatchMaxNumResources:(unsigned int)arg1;
- (void)setMultiPutBatchMaxSize:(unsigned int)arg1;
- (void)setNextCTag:(id)arg1;
- (void)startTaskGroup;
- (void)syncAway;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)uuidToErrorItems;
- (id)uuidToHREF;
- (id)uuidToStatus;
- (BOOL)validCTag;

@end
