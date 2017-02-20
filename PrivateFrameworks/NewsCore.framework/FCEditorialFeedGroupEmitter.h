/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCEditorialFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {
    unsigned int  _minPrecedingTopicGroups;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL emitsSingletonGroups;
@property (nonatomic, readonly, copy) NSString *groupEmitterIdentifier;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isRequiredByFollowingEmitters;
@property (nonatomic) unsigned int minPrecedingTopicGroups;
@property (nonatomic, readonly) BOOL requiresForYouCatchUpOperation;
@property (readonly) Class superclass;

+ (id)editorialFeedTransformationWithContext:(id)arg1;

- (BOOL)canEmitGroupsWithType:(int)arg1;
- (id)groupEmitterIdentifier;
- (id)initWithMinPrecedingTopicGroups:(unsigned int)arg1;
- (id)initWithNoDistanceRequirements;
- (unsigned int)minPrecedingTopicGroups;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (BOOL)requiresForYouCatchUpOperation;
- (void)setMinPrecedingTopicGroups:(unsigned int)arg1;
- (BOOL)wantsToEmitGroupInContext:(id)arg1 withCursor:(id)arg2 toCursor:(id)arg3;
- (BOOL)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;

@end
