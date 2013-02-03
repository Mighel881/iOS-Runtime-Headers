/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@class NSData;

@interface MSMSPlatform : NSObject <MSPlatform> {
    NSData *_developmentPushToken;
    NSData *_productionPushToken;
}

@property(readonly) NSData * developmentPushToken;
@property(readonly) NSData * productionPushToken;

+ (id)thePlatform;

- (id)OSString;
- (id)OSVersion;
- (id)UDID;
- (id)_accountForPersonID:(id)arg1;
- (struct __CFString { }*)_facilityStringForFacility:(int)arg1;
- (id)appBundleInfoString;
- (id)authTokenForPersonID:(id)arg1;
- (id)baseURLForPersonID:(id)arg1;
- (Class)deletePluginClass;
- (id)developmentPushToken;
- (void)didDetectUnrecoverableCondition;
- (id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
- (id)hardwareString;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(void*)arg4;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(void*)arg7;
- (id)pathMediaStreamDir;
- (BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
- (BOOL)policyMayDownload;
- (BOOL)policyMayUpload;
- (id)productionPushToken;
- (Class)publisherPluginClass;
- (id)pushTokenForPersonID:(id)arg1;
- (void)setPushToken:(id)arg1 production:(BOOL)arg2;
- (Class)sharingPluginClass;
- (BOOL)shouldLogAtLevel:(int)arg1;
- (id)socketOptions;
- (Class)subscriberPluginClass;
- (id)theDaemon;

@end
