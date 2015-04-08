/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray;

@interface PKPaymentVerificationChannelsResponse : PKPaymentWebServiceResponse {
    NSArray *_verificationChannels;
}

@property(retain) NSArray * verificationChannels;

+ (id)responseWithData:(id)arg1 forPass:(id)arg2;

- (void)dealloc;
- (id)initWithData:(id)arg1 forPass:(id)arg2;
- (void)setVerificationChannels:(id)arg1;
- (id)verificationChannels;

@end
