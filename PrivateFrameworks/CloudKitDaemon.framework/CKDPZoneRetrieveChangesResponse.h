/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveChangesResponse : PBCodable <NSCopying> {
    NSMutableArray *_changedZones;
    struct { 
        unsigned int status : 1; 
    } _has;
    int _status;
    NSData *_syncContinuationToken;
}

@property(retain) NSMutableArray * changedZones;
@property BOOL hasStatus;
@property(readonly) BOOL hasSyncContinuationToken;
@property int status;
@property(retain) NSData * syncContinuationToken;

- (void).cxx_destruct;
- (void)addChangedZones:(id)arg1;
- (id)changedZones;
- (id)changedZonesAtIndex:(unsigned int)arg1;
- (unsigned int)changedZonesCount;
- (void)clearChangedZones;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStatus;
- (BOOL)hasSyncContinuationToken;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setChangedZones:(id)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (void)setSyncContinuationToken:(id)arg1;
- (int)status;
- (id)syncContinuationToken;
- (void)writeTo:(id)arg1;

@end
