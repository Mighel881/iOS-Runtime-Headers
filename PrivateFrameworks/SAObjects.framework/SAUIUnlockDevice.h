/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray;

@interface SAUIUnlockDevice : SABaseClientBoundCommand {
}

@property(copy) NSArray * cancellationCommands;
@property(copy) NSArray * failureCommands;
@property(copy) NSArray * successCommands;

+ (id)unlockDevice;
+ (id)unlockDeviceWithDictionary:(id)arg1 context:(id)arg2;

- (id)cancellationCommands;
- (id)encodedClassName;
- (id)failureCommands;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setCancellationCommands:(id)arg1;
- (void)setFailureCommands:(id)arg1;
- (void)setSuccessCommands:(id)arg1;
- (id)successCommands;

@end
