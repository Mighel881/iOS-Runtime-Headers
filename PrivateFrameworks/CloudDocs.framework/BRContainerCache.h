/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class <NSObject>, NSMutableDictionary;

@interface BRContainerCache : NSObject {
    <NSObject> *_containerStatusObserver;
    NSMutableDictionary *_containersByID;
    BOOL _didFetchAllContainers;
    struct br_pacer_t { } *_invalidationPacer;
}

+ (id)containerCache;

- (id)_allContainersByIDUnsafe;
- (id)allContainers;
- (id)allContainersByID;
- (id)containerByID:(id)arg1 forURL:(id)arg2;
- (void)containerListDidChange;
- (void)dealloc;
- (id)documentContainers;
- (id)init;
- (void)invalidate;
- (void)subscribeToContainerStatusUpdate;
- (void)unsubscribeToContainerStatusUpdate;

@end
