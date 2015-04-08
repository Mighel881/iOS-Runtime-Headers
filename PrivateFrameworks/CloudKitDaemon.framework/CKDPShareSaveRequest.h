/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPShare, NSData;

@interface CKDPShareSaveRequest : PBRequest <NSCopying> {
    NSData *_protectedFullToken;
    CKDPShare *_share;
    NSData *_shortTokenHash;
}

@property(readonly) BOOL hasProtectedFullToken;
@property(readonly) BOOL hasShare;
@property(readonly) BOOL hasShortTokenHash;
@property(retain) NSData * protectedFullToken;
@property(retain) CKDPShare * share;
@property(retain) NSData * shortTokenHash;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasProtectedFullToken;
- (BOOL)hasShare;
- (BOOL)hasShortTokenHash;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)protectedFullToken;
- (BOOL)readFrom:(id)arg1;
- (void)setProtectedFullToken:(id)arg1;
- (void)setShare:(id)arg1;
- (void)setShortTokenHash:(id)arg1;
- (id)share;
- (id)shortTokenHash;
- (void)writeTo:(id)arg1;

@end
