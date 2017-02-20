/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSXPCStoreServerPerConnectionCache : NSObject {
    NSPersistentStoreCoordinator * _coordinator;
    NSMutableDictionary * _generationTokenMap;
    NSSQLitePrefetchRequestCache * _prefetchRequestCache;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;

- (id)coordinator;
- (void)dealloc;
- (id)initWithCoordinator:(id)arg1;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)localGenerationForRemoteGeneration:(id)arg1;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (void)registerQueryGeneration:(id)arg1 forRemoteGeneration:(id)arg2;
- (void)releaseQueryGenerationForRemoteGeneration:(id)arg1;

@end
