/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface BLEMIDIAccessor : NSObject

+ (BOOL)deviceIsLocalPeripheral:(unsigned long)arg1;
+ (BOOL)deviceIsNullDevice:(unsigned long)arg1;
+ (BOOL)deviceIsOnline:(unsigned long)arg1;
+ (BOOL)deviceIsRemotePeripheral:(unsigned long)arg1;
+ (unsigned long)localPeripheral;
+ (id)localPeripheralName;
+ (void)logEvent:(char *)arg1 length:(unsigned short)arg2 timeStamp:(unsigned long long)arg3 intoBuffer:(char *)arg4;
+ (unsigned long)midiDeviceForUUID:(id)arg1;
+ (unsigned long)midiDeviceForUUID:(id)arg1 isLocalPeripheral:(BOOL)arg2 isRemotePeripheral:(BOOL)arg3;
+ (id)nameForMIDIDevice:(unsigned long)arg1;
+ (unsigned long)nullDevice;
+ (unsigned short)reconstructWithHighByte:(unsigned char)arg1 lowByte:(unsigned char)arg2 overflow:(BOOL)arg3;
+ (void)splitOffset:(unsigned short)arg1 intoHeaderByte:(char *)arg2 timeStampByte:(char *)arg3;
+ (unsigned short)timeStampOffset:(unsigned long long)arg1;
+ (unsigned long long)timeStampWithEpoch:(unsigned long long)arg1 offset:(unsigned short)arg2;
+ (id)uuidForMIDIDevice:(unsigned long)arg1;
+ (BOOL)uuidIsForgettable:(id)arg1;

@end
