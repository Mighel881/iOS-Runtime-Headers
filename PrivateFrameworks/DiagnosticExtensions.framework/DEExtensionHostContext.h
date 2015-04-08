/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

@class NSString;

@interface DEExtensionHostContext : NSExtensionContext <DEExtensionHostProtocol> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)attachmentListWithHandler:(id)arg1;
- (void)attachmentsWithParams:(id)arg1 withHandler:(id)arg2;
- (void)canEnableLoggingWithHandler:(id)arg1;
- (void)disableLoggingWithHandler:(id)arg1;
- (void)enableLoggingWithHandler:(id)arg1;
- (id)extensionAPIProxy;
- (BOOL)hasEntitlement;
- (void)initExtensionWithHandler:(id)arg1;
- (void)isLoggingEnabledHandler:(id)arg1;

@end
