/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HAPMetadataCharacteristic, HMDHAPMetadataCharacteristicValue;

@interface HMDHAPMetadataCharacteristic : NSObject <NSSecureCoding> {
    HAPMetadataCharacteristic *_hapCharacteristicMetadata;
    HMDHAPMetadataCharacteristicValue *_valueMetadata;
}

@property(retain) HAPMetadataCharacteristic * hapCharacteristicMetadata;
@property(retain) HMDHAPMetadataCharacteristicValue * valueMetadata;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)hapCharacteristicMetadata;
- (id)initWithCoder:(id)arg1;
- (id)initWithHAPCharacteristic:(id)arg1;
- (void)setHapCharacteristicMetadata:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)valueMetadata;

@end
