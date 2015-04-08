/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPIdentifier, CKDPProtectionInfo, CKDPUserAlias, NSString;

@interface CKDPUser : PBCodable <NSCopying> {
    CKDPUserAlias *_alias;
    NSString *_firstName;
    CKDPIdentifier *_identifier;
    NSString *_lastName;
    CKDPProtectionInfo *_protectionInfo;
}

@property(retain) CKDPUserAlias * alias;
@property(retain) NSString * firstName;
@property(readonly) BOOL hasAlias;
@property(readonly) BOOL hasFirstName;
@property(readonly) BOOL hasIdentifier;
@property(readonly) BOOL hasLastName;
@property(readonly) BOOL hasProtectionInfo;
@property(retain) CKDPIdentifier * identifier;
@property(retain) NSString * lastName;
@property(retain) CKDPProtectionInfo * protectionInfo;

- (void).cxx_destruct;
- (id)alias;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)firstName;
- (BOOL)hasAlias;
- (BOOL)hasFirstName;
- (BOOL)hasIdentifier;
- (BOOL)hasLastName;
- (BOOL)hasProtectionInfo;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (id)lastName;
- (void)mergeFrom:(id)arg1;
- (id)protectionInfo;
- (BOOL)readFrom:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
