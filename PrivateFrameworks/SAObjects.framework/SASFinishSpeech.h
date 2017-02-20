/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASFinishSpeech : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *endpoint;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *orderedContext;
@property (nonatomic) int packetCount;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)finishSpeech;
+ (id)finishSpeechWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)endpoint;
- (id)groupIdentifier;
- (id)orderedContext;
- (int)packetCount;
- (void)setEndpoint:(id)arg1;
- (void)setOrderedContext:(id)arg1;
- (void)setPacketCount:(int)arg1;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (BOOL)siriCore_isRestartable;

@end
