/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface CKDModifySharesOperation : CKDDatabaseOperation {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _deleteCompletionBlock;

    BOOL _haveOutstandingMetadatas;
    int _numShareSaveAttempts;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _saveCompletionBlock;

    NSMutableArray *_shareMetadatas;
}

@property(copy) id deleteCompletionBlock;
@property BOOL haveOutstandingMetadatas;
@property int numShareSaveAttempts;
@property(copy) id saveCompletionBlock;
@property(retain) NSMutableArray * shareMetadatas;

- (void).cxx_destruct;
- (void)_addOwnerToShares;
- (void)_callbackForMetadata:(id)arg1;
- (BOOL)_cleanPublicPCSforShare:(id)arg1 withError:(id*)arg2;
- (id)_createNewPCSDataForShare:(id)arg1 error:(id*)arg2;
- (BOOL)_decryptPCSDataForMetadata:(id)arg1;
- (void)_determineEnvironment;
- (void)_fetchPCSDataForDeletingMetadata:(id)arg1;
- (void)_fetchPCSDataForMetadata:(id)arg1;
- (void)_fetchPCSDataForShares;
- (void)_fetchParticipantsForShares;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handlePCSData:(id)arg1 forDeletingMetadata:(id)arg2 withError:(id)arg3;
- (void)_handlePCSData:(id)arg1 forMetadata:(id)arg2 withError:(id)arg3;
- (void)_handleShareDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleShareFetched:(id)arg1 forMetadata:(id)arg2 error:(id)arg3;
- (void)_handleShareSaved:(id)arg1 forMetadata:(id)arg2 responseCode:(id)arg3;
- (id)_ownerUserIdentity;
- (BOOL)_performMetadataCallbacks;
- (void)_preparePCSDataForShares;
- (BOOL)_removeSelfFromPublicPCSForShareInfo:(id)arg1 error:(id*)arg2;
- (void)_saveSharesToServer;
- (BOOL)_serializePCSDataForShare:(id)arg1 error:(id*)arg2;
- (BOOL)_serializePublicPCSForShareInfo:(id)arg1 error:(id*)arg2;
- (BOOL)_updateSharePublicPCS:(id)arg1 error:(id*)arg2;
- (id)deleteCompletionBlock;
- (BOOL)haveOutstandingMetadatas;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned int)arg1;
- (int)numShareSaveAttempts;
- (id)saveCompletionBlock;
- (void)setDeleteCompletionBlock:(id)arg1;
- (void)setHaveOutstandingMetadatas:(BOOL)arg1;
- (void)setNumShareSaveAttempts:(int)arg1;
- (void)setSaveCompletionBlock:(id)arg1;
- (void)setShareMetadatas:(id)arg1;
- (id)shareMetadatas;

@end
