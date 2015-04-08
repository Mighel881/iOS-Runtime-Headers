/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData;

@interface CKDPZoneRetrieveChangesRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int maxChangedZones : 1; 
    } _has;
    unsigned int _maxChangedZones;
    NSData *_syncContinuationToken;
}

@property BOOL hasMaxChangedZones;
@property(readonly) BOOL hasSyncContinuationToken;
@property unsigned int maxChangedZones;
@property(retain) NSData * syncContinuationToken;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMaxChangedZones;
- (BOOL)hasSyncContinuationToken;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)maxChangedZones;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasMaxChangedZones:(BOOL)arg1;
- (void)setMaxChangedZones:(unsigned int)arg1;
- (void)setSyncContinuationToken:(id)arg1;
- (id)syncContinuationToken;
- (void)writeTo:(id)arg1;

@end
