/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <SYSerialization>, <SYStoreDelegate>, NMSMessageCenter, NSDictionary, NSError, NSMutableDictionary, NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSUUID, SYPersistentStore, SYRetryTimer, SYVectorClock;

@interface SYStore : NSObject <IDSServiceDelegate, NMSMessageCenterDelegate, SYChangeTrackingWithErrors> {
    BOOL _allowsDeletes;
    BOOL _alwaysWins;
    NSMutableIndexSet *_batchChunkUnackedIndices;
    unsigned long long _batchCounter;
    NSDictionary *_customIDSDeliveryOptions;
    NSString *_databaseFileName;
    BOOL _deferredFullSync;
    <SYStoreDelegate> *_delegate;
    BOOL _encryptPayloads;
    struct { 
        unsigned int delegateWillUpdate : 1; 
        unsigned int delegateWillUpdateWithCount : 1; 
        unsigned int delegateDidUpdate : 1; 
        unsigned int delegateDidCompleteFullSync : 1; 
        unsigned int delegateAllObjectsDeleted : 1; 
        unsigned int delegateAllObjects : 1; 
        unsigned int delegateShouldPerformInitialSync : 1; 
        unsigned int delegateBeginSyncingAllObjects : 1; 
        unsigned int delegateShouldDeleteOnFailedSync : 1; 
        unsigned int delegateErrorInFullSync : 1; 
        unsigned int delegateStoreEncounteredError : 1; 
        unsigned int delegateDidPair : 1; 
        unsigned int delegateDidUnpair : 1; 
        unsigned int delegateSentMessage : 1; 
        unsigned int delegatePeerProcessedMessage : 1; 
        unsigned int delegateSentLastSyncMessage : 1; 
    } _flags;
    BOOL _fullSyncWasRequestedBySlave;
    struct __CFString { } *_loggingFacility;
    NMSMessageCenter *_messageCenter;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _nextBatchStep;

    NSError *_overflowRetryError;
    NSObject<OS_dispatch_source> *_overflowRetryTimer;
    NSUUID *_pairedDeviceID;
    SYPersistentStore *_persistentStore;
    int _priority;
    NSObject<OS_dispatch_queue> *_qosTargetQueue;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _registeredNotificationHandlers;
    NSMutableDictionary *_sendSignals;
    <SYSerialization> *_serializer;
    NSString *_service;
    SYRetryTimer *_syncRetryTimer;
    BOOL _tracksChanges;
    SYVectorClock *_vectorClock;
}

@property BOOL allowsDeletes;
@property BOOL alwaysWins;
@property(copy) NSDictionary * customIDSDeliveryOptions;
@property(retain) NSString * databaseFileName;
@property(copy,readonly) NSString * debugDescription;
@property <SYStoreDelegate> * delegate;
@property unsigned int deliveryQOS;
@property(copy,readonly) NSString * description;
@property BOOL encryptPayloads;
@property BOOL fullSyncWasRequestedBySlave;
@property(readonly) BOOL hasCompletedFullSync;
@property(readonly) unsigned int hash;
@property(readonly) BOOL inDeltaSync;
@property struct __CFString { }* loggingFacility;
@property int maxBytesInFlight;
@property(retain) NMSMessageCenter * messageCenter;
@property(copy) id nextBatchStep;
@property(getter=isPaired,readonly) BOOL paired;
@property(retain) NSUUID * pairedDeviceID;
@property(retain) SYPersistentStore * persistentStore;
@property int priority;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property BOOL registeredNotificationHandlers;
@property(retain) <SYSerialization> * serializer;
@property(retain) NSString * service;
@property(readonly) int state;
@property(readonly) Class superclass;
@property double timeToLive;
@property BOOL tracksChanges;
@property(retain) SYVectorClock * vectorClock;

+ (id)fullSyncActivityDictionary;

- (void).cxx_destruct;
- (BOOL)_allowDeltaSyncWithContext:(id)arg1 error:(id*)arg2;
- (id)_batchChunkUnackedIndices;
- (BOOL)_checkMessageHeader:(id)arg1 messageID:(id)arg2;
- (void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1;
- (void)_devicePaired:(id)arg1;
- (void)_deviceUnpaired:(id)arg1;
- (void)_handleIDSOverflowWithError:(id)arg1;
- (BOOL)_isPairedWithDevice:(id)arg1;
- (void)_listenForPrefsChangeNotifications;
- (id)_pathForMessageCenterCache;
- (void)_postBatchEndMessageWithState:(id)arg1 error:(id)arg2 then:(id)arg3;
- (void)_postBatchStartMessageWithState:(id)arg1 then:(id)arg2;
- (void)_prefsChanged;
- (void)_recordLastSeqNo:(id)arg1;
- (void)_restartBatchSyncWithState:(id)arg1 then:(id)arg2;
- (void)_retrySync;
- (void)_sendBatchChunk:(id)arg1 withState:(id)arg2 then:(id)arg3;
- (void)_setupMessageCenter_LOCKED;
- (BOOL)_shouldIgnoreSyncID:(id)arg1;
- (BOOL)_shouldSkipNonSyncMessages;
- (void)_syncEndedWithSyncID:(id)arg1;
- (void)_transaction:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 reportError:(id)arg5;
- (void)_updateMessageCenterPrefs:(id)arg1;
- (void)_vectorClockUpdated;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 completion:(id)arg2;
- (void)addObject:(id)arg1 context:(id)arg2;
- (void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (BOOL)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
- (BOOL)addObject:(id)arg1 error:(id*)arg2;
- (BOOL)allowsDeletes;
- (BOOL)alwaysWins;
- (void)blockingTransaction:(id)arg1;
- (void)blockingTransaction:(id)arg1 handlingError:(id)arg2;
- (id)customIDSDeliveryOptions;
- (id)databaseFileName;
- (void)dealloc;
- (id)decodeSYObject:(id)arg1;
- (id)delegate;
- (void)deleteObject:(id)arg1;
- (void)deleteObject:(id)arg1 completion:(id)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (BOOL)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
- (BOOL)deleteObject:(id)arg1 error:(id*)arg2;
- (unsigned int)deliveryQOS;
- (void)didEndDeltaSync;
- (id)encodeSYObject:(id)arg1;
- (BOOL)encryptPayloads;
- (BOOL)fullSyncWasRequestedBySlave;
- (void)handleBatchSyncChunk:(id)arg1 response:(id)arg2;
- (void)handleBatchSyncEnd:(id)arg1 response:(id)arg2;
- (void)handleBatchSyncStart:(id)arg1;
- (void)handleChangeMessage:(id)arg1;
- (void)handleFullSyncRequest:(id)arg1 response:(id)arg2;
- (void)handleObjectChanges:(id)arg1 contextInfo:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 reportError:(id)arg5;
- (void)handleSyncAllObjects:(id)arg1 response:(id)arg2;
- (BOOL)hasCompletedFullSync;
- (BOOL)inDeltaSync;
- (BOOL)inFullSync;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 isMasterStore:(BOOL)arg4;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 isMasterStore:(BOOL)arg4 tracksChanges:(BOOL)arg5;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 priority:(int)arg3 isMasterStore:(BOOL)arg4;
- (id)initWithService:(id)arg1 isGStore:(BOOL)arg2 priority:(int)arg3 isMasterStore:(BOOL)arg4 tracksChanges:(BOOL)arg5;
- (BOOL)isPaired;
- (void)logChanges:(id)arg1;
- (struct __CFString { }*)loggingFacility;
- (int)maxBytesInFlight;
- (id)messageCenter;
- (void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)newFullSyncContext;
- (id)newMessageHeader;
- (id)nextBatchStep;
- (BOOL)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2;
- (id)pairedDeviceID;
- (BOOL)peerState:(id)arg1 fromPeer:(id)arg2 matchesExpectationForChangeCount:(unsigned int)arg3 offsetAmount:(unsigned int*)arg4;
- (BOOL)performBatchedSyncToCurrentDBVersion;
- (void)performFullSync;
- (void)performFullSyncIfNecessary;
- (void)performFullSyncIfNecessaryAskingDelegate:(BOOL)arg1;
- (void)performFullSyncToCurrentDBVersion;
- (id)persistentStore;
- (void)postUserNotification:(id)arg1 message:(id)arg2;
- (int)priority;
- (void)processBatchChunkAck:(unsigned int)arg1;
- (void)processBatchChunkAtIndex:(unsigned int)arg1 encodedObjects:(id)arg2 error:(id*)arg3;
- (void)processBatchSyncEnd:(unsigned long long)arg1;
- (void)processBatchSyncStart;
- (id)queue;
- (BOOL)registeredNotificationHandlers;
- (void)remoteStoreAllObjects:(id)arg1 fromPeer:(id)arg2 clock:(id)arg3;
- (void)remoteStoreRequestFullSync;
- (void)sendChanges:(id)arg1 context:(id)arg2 options:(id)arg3 sentSignal:(id)arg4;
- (void)sendMessage:(id)arg1 ofType:(unsigned short)arg2 respondingTo:(id)arg3 userInfo:(id)arg4 idsOptions:(id)arg5;
- (id)serializer;
- (id)service;
- (void)setAllowsDeletes:(BOOL)arg1;
- (void)setAlwaysWins:(BOOL)arg1;
- (void)setCustomIDSDeliveryOptions:(id)arg1;
- (void)setDatabaseFileName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeliveryQOS:(unsigned int)arg1;
- (void)setEncryptPayloads:(BOOL)arg1;
- (void)setFullSyncWasRequestedBySlave:(BOOL)arg1;
- (void)setLoggingFacility:(struct __CFString { }*)arg1;
- (void)setMaxBytesInFlight:(int)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setNeedsFullSync;
- (void)setNeedsFullSyncWithContext:(id)arg1 idsOptions:(id)arg2;
- (void)setNextBatchStep:(id)arg1;
- (void)setPairedDeviceID:(id)arg1;
- (void)setPersistentStore:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setQueue:(id)arg1;
- (void)setRegisteredNotificationHandlers:(BOOL)arg1;
- (void)setSerializer:(id)arg1;
- (void)setService:(id)arg1;
- (void)setTimeToLive:(double)arg1;
- (void)setTracksChanges:(BOOL)arg1;
- (void)setVectorClock:(id)arg1;
- (void)setupDatabase;
- (void)setupMessageCenter;
- (void)setupPairingNotifications;
- (int)state;
- (double)timeToLive;
- (BOOL)tracksChanges;
- (void)transaction:(id)arg1;
- (void)transaction:(id)arg1 completion:(id)arg2;
- (void)transaction:(id)arg1 context:(id)arg2;
- (void)transaction:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (void)transaction:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4;
- (void)transaction:(id)arg1 handlingError:(id)arg2;
- (void)updateObject:(id)arg1;
- (void)updateObject:(id)arg1 completion:(id)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (BOOL)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
- (BOOL)updateObject:(id)arg1 error:(id*)arg2;
- (id)vectorClock;
- (void)willBeginDeltaSync;
- (id)wrapMessage:(id)arg1 ofType:(unsigned short)arg2 respondingTo:(id)arg3 userInfo:(id)arg4;

@end
