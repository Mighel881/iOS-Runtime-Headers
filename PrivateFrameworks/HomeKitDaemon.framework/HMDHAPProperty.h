/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HAPMetadataProperty;

@interface HMDHAPProperty : NSObject <NSSecureCoding> {
    HAPMetadataProperty *_hapPropertyMetadata;
}

@property(retain) HAPMetadataProperty * hapPropertyMetadata;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)hapPropertyMetadata;
- (id)initWithCoder:(id)arg1;
- (id)initWithHAPProperty:(id)arg1;
- (void)setHapPropertyMetadata:(id)arg1;

@end
