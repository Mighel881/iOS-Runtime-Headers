/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData, NSNumber, NSString;

@interface MCEmailAccountPayloadBase : MCPayload {
    BOOL _SMIMEEnabled;
    NSNumber *_SMIMEEnabledNum;
    NSData *_SMIMEEncryptionIdentityPersistentID;
    NSString *_SMIMEEncryptionIdentityUUID;
    BOOL _SMIMEPerMessageSwitchEnabled;
    NSNumber *_SMIMEPerMessageSwitchEnabledNum;
    NSData *_SMIMESigningIdentityPersistentID;
    NSString *_SMIMESigningIdentityUUID;
    BOOL _isRecentsSyncingDisabled;
    NSNumber *_isRecentsSyncingDisabledNum;
    BOOL _preventAppSheet;
    NSNumber *_preventAppSheetNum;
    BOOL _preventMove;
    NSNumber *_preventMoveNum;
}

@property BOOL SMIMEEnabled;
@property(retain) NSNumber * SMIMEEnabledNum;
@property(retain) NSData * SMIMEEncryptionIdentityPersistentID;
@property(retain) NSString * SMIMEEncryptionIdentityUUID;
@property BOOL SMIMEPerMessageSwitchEnabled;
@property(retain) NSNumber * SMIMEPerMessageSwitchEnabledNum;
@property(retain) NSData * SMIMESigningIdentityPersistentID;
@property(retain) NSString * SMIMESigningIdentityUUID;
@property BOOL isRecentsSyncingDisabled;
@property(retain) NSNumber * isRecentsSyncingDisabledNum;
@property BOOL preventAppSheet;
@property(retain) NSNumber * preventAppSheetNum;
@property BOOL preventMove;
@property(retain) NSNumber * preventMoveNum;

- (void).cxx_destruct;
- (BOOL)SMIMEEnabled;
- (id)SMIMEEnabledNum;
- (id)SMIMEEncryptionIdentityPersistentID;
- (id)SMIMEEncryptionIdentityUUID;
- (BOOL)SMIMEPerMessageSwitchEnabled;
- (id)SMIMEPerMessageSwitchEnabledNum;
- (id)SMIMESigningIdentityPersistentID;
- (id)SMIMESigningIdentityUUID;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (BOOL)isRecentsSyncingDisabled;
- (id)isRecentsSyncingDisabledNum;
- (id)payloadDescriptionKeyValueSections;
- (BOOL)preventAppSheet;
- (id)preventAppSheetNum;
- (BOOL)preventMove;
- (id)preventMoveNum;
- (void)setIsRecentsSyncingDisabled:(BOOL)arg1;
- (void)setIsRecentsSyncingDisabledNum:(id)arg1;
- (void)setPreventAppSheet:(BOOL)arg1;
- (void)setPreventAppSheetNum:(id)arg1;
- (void)setPreventMove:(BOOL)arg1;
- (void)setPreventMoveNum:(id)arg1;
- (void)setSMIMEEnabled:(BOOL)arg1;
- (void)setSMIMEEnabledNum:(id)arg1;
- (void)setSMIMEEncryptionIdentityPersistentID:(id)arg1;
- (void)setSMIMEEncryptionIdentityUUID:(id)arg1;
- (void)setSMIMEPerMessageSwitchEnabled:(BOOL)arg1;
- (void)setSMIMEPerMessageSwitchEnabledNum:(id)arg1;
- (void)setSMIMESigningIdentityPersistentID:(id)arg1;
- (void)setSMIMESigningIdentityUUID:(id)arg1;
- (id)stubDictionary;

@end
