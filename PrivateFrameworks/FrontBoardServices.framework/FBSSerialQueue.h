/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface FBSSerialQueue : NSObject {
    NSArray *_mainRunLoopModes;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_runLoopSemaphore;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

+ (id)queueWithDispatchQueue:(id)arg1;
+ (id)queueWithMainRunLoopModes:(id)arg1;

- (id)_initWithDispatchQueue:(id)arg1 mainRunLoopModes:(id)arg2;
- (void)assertOnQueue;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)performAsync:(id)arg1;

@end
