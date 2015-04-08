/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation {
    BOOL _allowDefaultZoneSave;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _deleteCompletionBlock;

    BOOL _markZonesAsUserPurged;
    int _numZoneSaveAttempts;
    NSMutableDictionary *_pcsOplockFailureCountByZoneID;
    NSArray *_recordZoneIDsToDelete;
    NSMutableDictionary *_recordZonesByZoneID;
    NSMutableArray *_recordZonesToSave;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _saveCompletionBlock;

}

@property BOOL allowDefaultZoneSave;
@property(copy) id deleteCompletionBlock;
@property BOOL markZonesAsUserPurged;
@property int numZoneSaveAttempts;
@property(retain) NSMutableDictionary * pcsOplockFailureCountByZoneID;
@property(retain) NSArray * recordZoneIDsToDelete;
@property(retain) NSMutableDictionary * recordZonesByZoneID;
@property(retain) NSMutableArray * recordZonesToSave;
@property(copy) id saveCompletionBlock;

- (void).cxx_destruct;
- (void)_checkAndPrepareZones;
- (void)_fetchPCSDataForZone:(id)arg1 fromServer:(BOOL)arg2;
- (void)_fetchPCSDataForZonesFromServer:(BOOL)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2;
- (BOOL)_saveZonesToServer;
- (void)_sendErrorForFailedZones;
- (BOOL)allowDefaultZoneSave;
- (id)deleteCompletionBlock;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (BOOL)markZonesAsUserPurged;
- (id)nameForState:(unsigned int)arg1;
- (int)numZoneSaveAttempts;
- (id)pcsOplockFailureCountByZoneID;
- (id)recordZoneIDsToDelete;
- (id)recordZonesByZoneID;
- (id)recordZonesToSave;
- (id)saveCompletionBlock;
- (void)setAllowDefaultZoneSave:(BOOL)arg1;
- (void)setDeleteCompletionBlock:(id)arg1;
- (void)setMarkZonesAsUserPurged:(BOOL)arg1;
- (void)setNumZoneSaveAttempts:(int)arg1;
- (void)setPcsOplockFailureCountByZoneID:(id)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZonesByZoneID:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;
- (void)setSaveCompletionBlock:(id)arg1;

@end
