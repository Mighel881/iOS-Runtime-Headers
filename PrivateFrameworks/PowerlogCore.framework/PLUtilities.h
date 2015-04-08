/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLUtilities : NSObject {
}

+ (int)MavRev;
+ (id)MavRevStringQuery;
+ (void)_deallocatePortArray:(unsigned int*)arg1 withCount:(unsigned int)arg2;
+ (id)allSubClassesForClass:(Class)arg1;
+ (BOOL)alsCurveHigherThanDefault;
+ (short)canLogMode:(id)arg1 fullMode:(BOOL)arg2;
+ (id)dateFromTimeval:(struct timeval { int x1; int x2; })arg1;
+ (double)defaultBatteryEnergyCapacity;
+ (id)deviceBootTime;
+ (unsigned long long)dispatchTimeInSeconds:(double)arg1;
+ (id)displayTypeStringQuery;
+ (id)extractDateStringAndUUIDStringFromFilePath:(id)arg1;
+ (BOOL)gasGaugeEnabled;
+ (int)getAudioRevOfDevice;
+ (int)getDisplayTypeOfDevice;
+ (int)getProcessorRevOfDevice;
+ (int)getTorchTypeOfDevice;
+ (void)handleSQLResult:(int)arg1;
+ (BOOL)hasBaseband;
+ (id)hashString:(id)arg1;
+ (BOOL)internalBuild;
+ (BOOL)isICE;
+ (BOOL)isIPod;
+ (BOOL)isMav1;
+ (BOOL)isMav10;
+ (BOOL)isMav2;
+ (BOOL)isMav4;
+ (BOOL)isMav5;
+ (BOOL)isMav7;
+ (BOOL)isPingPongChargingWith:(BOOL)arg1 andBatteryLevelPercent:(double)arg2;
+ (BOOL)isValidString:(id)arg1;
+ (BOOL)isWiFiChipset4324;
+ (BOOL)isWiFiChipset43291;
+ (BOOL)isWiFiChipset4330;
+ (BOOL)isWiFiChipset4334;
+ (BOOL)isWiFiChipset43342;
+ (BOOL)isWiFiChipset4345;
+ (BOOL)isWiFiChipset4350;
+ (short)logModeForEntryKey:(id)arg1 withKey:(id)arg2 andValue:(id)arg3;
+ (id)modeForEntryKey:(id)arg1 withKeyName:(id)arg2;
+ (BOOL)nonUIBuild;
+ (unsigned int)pidForName:(id)arg1;
+ (void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (id)processNameForPid:(int)arg1;
+ (BOOL)runningAsMobileUser;
+ (id)runningAsUser;
+ (double)scaledPowerBasedOnPoint:(double)arg1 withPowerModel:(id)arg2;
+ (double)secondsFromMachTime:(unsigned long long)arg1;
+ (void)setMobileOwnerForFile:(id)arg1;
+ (id)shortUUIDString;
+ (id)torchTypeStringQuery;
+ (id)workQueue;
+ (id)workQueueForClass:(Class)arg1;
+ (id)workQueueForKey:(id)arg1;

@end
