/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SAFmfVisibilitySetCompleted : SABaseClientBoundCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;
@property(copy) NSURL * searchContext;
@property(copy) NSURL * targetAppId;

+ (id)visibilitySetCompleted;
+ (id)visibilitySetCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;

@end
