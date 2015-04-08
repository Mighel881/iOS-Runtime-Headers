/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSString;

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem {
}

@property(readonly) NSString * email;
@property(readonly) NSString * name;
@property(readonly) NSString * phone;

+ (int)dataType;

- (id)email;
- (BOOL)isValidWithError:(id*)arg1;
- (id)name;
- (id)phone;

@end
