/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SABaseCommand : AceObject <SAAceCommand, SAAceSerializable, SiriCoreSessionObject>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)baseCommand;
+ (id)baseCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)refId;
- (void)setAceId:(id)arg1;
- (void)setRefId:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (void)siriCore_addSendCompletion:(id /* block */)arg1;
- (BOOL)siriCore_bufferingAllowedDuringActiveSession;
- (void)siriCore_dispatchSendCompletionsWithResult:(int)arg1 error:(id)arg2;
- (BOOL)siriCore_isRestartable;
- (BOOL)siriCore_isRetryable;
- (void)siriCore_logDiagnostics;
- (id)siriCore_serializedAceDataError:(id*)arg1;
- (BOOL)siriCore_supportsSendCompletions;

@end
