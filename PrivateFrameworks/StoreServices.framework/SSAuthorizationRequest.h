/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSAuthorizationRequestDelegate>, NSNumber, NSString;

@interface SSAuthorizationRequest : SSRequest <SSXPCCoding> {
    NSNumber *_accountIdentifier;
    NSString *_keybagPath;
    NSString *_reason;
    id _token;
}

@property(readonly) NSNumber * accountIdentifier;
@property(readonly) id authorizationToken;
@property(copy,readonly) NSString * debugDescription;
@property <SSAuthorizationRequestDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * keybagPath;
@property(copy) NSString * reason;
@property(readonly) Class superclass;

- (id)accountIdentifier;
- (id)authorizationToken;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithAuthorizationToken:(id)arg1 accountIdentifier:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)keybagPath;
- (id)reason;
- (void)setKeybagPath:(id)arg1;
- (void)setReason:(id)arg1;
- (BOOL)start;
- (void)startWithAuthorizationResponseBlock:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;

@end
