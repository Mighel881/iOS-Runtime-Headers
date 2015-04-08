/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CPLChangeBatch : NSObject <NSFastEnumeration, NSSecureCoding> {
    NSMutableDictionary *_additionalRecords;
    NSMutableDictionary *_localResources;
    NSMutableArray *_records;
}

@property(readonly) NSArray * records;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addAdditionalRecord:(id)arg1;
- (void)_addChange:(id)arg1 resultBatch:(id)arg2 changesPerIdentifier:(id)arg3 changesPerClass:(id)arg4;
- (id)_additionalRecords;
- (id)_initWithRecords:(id)arg1;
- (void)_setAdditionalRecords:(id)arg1;
- (void)_setRecords:(id)arg1;
- (void)addRecord:(id)arg1;
- (void)addRecordsFromBatch:(id)arg1;
- (id)additionalRecordWithIdentifier:(id)arg1;
- (void)appendLocalResources:(id)arg1 forItemWithCloudIdentifier:(id)arg2;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)cplFullDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extractDeletesFromBatchDeletedRecordIdentifiers:(id*)arg1 trashedRecordIdentifiers:(id*)arg2;
- (void)extractInitialDownloadBatch:(id*)arg1 shouldConsiderRecordFilter:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecords:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localResourceOfType:(unsigned int)arg1 forItemWithCloudIdentifier:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)records;
- (void)sortBatch;
- (id)summaryDescription;

@end
