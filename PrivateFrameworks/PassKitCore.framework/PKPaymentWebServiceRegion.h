/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray, NSString, NSURL;

@interface PKPaymentWebServiceRegion : NSObject <NSSecureCoding> {
    NSURL *_brokerURL;
    NSArray *_certificates;
    int _consistencyCheckBackoffLevel;
    NSString *_lastUpdatedTag;
    NSURL *_paymentServicesURL;
    NSString *_pushTopic;
    NSString *_trustedServiceManagerPushTopic;
    NSURL *_trustedServiceManagerURL;
}

@property(retain) NSURL * brokerURL;
@property(retain) NSArray * certificates;
@property int consistencyCheckBackoffLevel;
@property(retain) NSString * lastUpdatedTag;
@property(retain) NSURL * paymentServicesURL;
@property(retain) NSString * pushTopic;
@property(retain) NSString * trustedServiceManagerPushTopic;
@property(retain) NSURL * trustedServiceManagerURL;

+ (BOOL)supportsSecureCoding;

- (id)brokerURL;
- (id)certificates;
- (int)consistencyCheckBackoffLevel;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastUpdatedTag;
- (id)paymentServicesURL;
- (id)pushTopic;
- (void)setBrokerURL:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setConsistencyCheckBackoffLevel:(int)arg1;
- (void)setLastUpdatedTag:(id)arg1;
- (void)setPaymentServicesURL:(id)arg1;
- (void)setPushTopic:(id)arg1;
- (void)setTrustedServiceManagerPushTopic:(id)arg1;
- (void)setTrustedServiceManagerURL:(id)arg1;
- (id)trustedServiceManagerPushTopic;
- (id)trustedServiceManagerURL;

@end
