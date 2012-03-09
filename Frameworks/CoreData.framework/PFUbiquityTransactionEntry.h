/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSNumber, PFUbiquityPeer, NSString, PFUbiquityStoreMetadata, NSDate, NSURL;

@interface PFUbiquityTransactionEntry : NSManagedObject  {
}

@property int transactionType;
@property(readonly) NSURL * transactionLogURL;
@property(retain) PFUbiquityStoreMetadata * storeMetadata;
@property(retain) PFUbiquityPeer * actingPeer;
@property(retain) NSString * knowledgeVectorString;
@property(retain) NSString * transactionLogFilename;
@property(retain) NSDate * transactionDate;
@property(retain) NSString * globalIDStr;
@property(retain) NSNumber * transactionNumber;
@property(retain) NSString * localIDStr;
@property(retain) NSNumber * transactionTypeNum;

+ (id)createTransactionEntriesForCompressedObjectIDs:(id)arg1 withTransactionType:(int)arg2 withImportContext:(id)arg3;
+ (id)createKnowledgeVectorByAddingKnowledgeVector:(id)arg1 toKnowledgeVector:(id)arg2;
+ (id)createSumForKnowlegeVectorString:(id)arg1;
+ (BOOL)canMergeKnowledgeVector:(id)arg1 withKnowledgeVector:(id)arg2;
+ (id)transactionEntriesMatchingGlobalObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)transactionEntriesMatchingLocalObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)transactionEntriesForPeerID:(id)arg1 withTransactionNumber:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)transactionEntriesForPeerID:(id)arg1 beforeTransacationNumber:(id)arg2 forStoreNamed:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)transactionEntryForGlobalIDString:(id)arg1 withActingPeerID:(id)arg2 atTransactionNumber:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)createPeerCodeDictionaryFromVector:(id)arg1;
+ (id)createKnowledgeVectorStringFromPeerDictionary:(id)arg1;
+ (id)transactionEntriesAfterPeerState:(id)arg1 forStoreName:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)transactionEntriesForGlobalIDStrings:(id)arg1 beforePeerState:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)newTransactionEntryForObjectWithCompressedGlobalID:(id)arg1 withTransactionType:(int)arg2 importContext:(id)arg3;

- (int)transactionType;
- (id)transactionLogURL;
- (id)initAndInsertIntoManagedObjectContext:(id)arg1;
- (void)setTransactionType:(int)arg1;

@end