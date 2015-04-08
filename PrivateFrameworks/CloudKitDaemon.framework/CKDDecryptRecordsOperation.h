/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSDictionary, NSObject<OS_dispatch_group>;

@interface CKDDecryptRecordsOperation : CKDDatabaseOperation {
    BOOL _forcePCSDecrypt;
    NSObject<OS_dispatch_group> *_recordDecryptGroup;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordDecryptedBlock;

    NSArray *_recordsToDecrypt;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property BOOL forcePCSDecrypt;
@property(retain) NSObject<OS_dispatch_group> * recordDecryptGroup;
@property(copy) id recordDecryptedBlock;
@property(retain) NSArray * recordsToDecrypt;
@property(retain) NSDictionary * webSharingIdentityDataByRecordID;

- (void).cxx_destruct;
- (void)_decryptRecord:(id)arg1;
- (void)_decryptRecord:(id)arg1 usingWebSharingIdentityData:(id)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProtectionDataForRecord:(id)arg1;
- (void)_handleShareProtectionDataForRecord:(id)arg1;
- (void)_handleZoneProtectionDataForRecord:(id)arg1;
- (void)_recordWasDecrypted:(id)arg1 withError:(id)arg2;
- (id)_unwrapAssetKey:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (id)_unwrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2 forField:(id)arg3;
- (id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (id)_unwrapPackageAssets:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2;
- (BOOL)forcePCSDecrypt;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)operationShouldBeFlowControlled;
- (id)recordDecryptGroup;
- (id)recordDecryptedBlock;
- (id)recordsToDecrypt;
- (void)setForcePCSDecrypt:(BOOL)arg1;
- (void)setRecordDecryptGroup:(id)arg1;
- (void)setRecordDecryptedBlock:(id)arg1;
- (void)setRecordsToDecrypt:(id)arg1;
- (void)setWebSharingIdentityDataByRecordID:(id)arg1;
- (BOOL)shouldCheckAppVersion;
- (id)webSharingIdentityDataByRecordID;

@end
