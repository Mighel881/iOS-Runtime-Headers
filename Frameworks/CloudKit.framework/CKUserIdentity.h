/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKRecordID, NSData, NSString;

@interface CKUserIdentity : NSObject <NSSecureCoding> {
    NSString *_emailAddress;
    NSString *_firstName;
    BOOL _hasiCloudAccount;
    BOOL _hasiCloudAccountSupportingSharing;
    NSString *_lastName;
    NSData *_protectionData;
    CKRecordID *_userRecordID;
}

@property(copy) NSString * emailAddress;
@property(copy) NSString * firstName;
@property BOOL hasiCloudAccount;
@property BOOL hasiCloudAccountSupportingSharing;
@property(copy) NSString * lastName;
@property(copy,readonly) NSString * localizedDisplayName;
@property(retain) NSData * protectionData;
@property(copy) CKRecordID * userRecordID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_init;
- (id)ckShortDescription;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (unsigned int)hash;
- (BOOL)hasiCloudAccount;
- (BOOL)hasiCloudAccountSupportingSharing;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)lastName;
- (id)localizedDisplayName;
- (id)protectionData;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setHasiCloudAccount:(BOOL)arg1;
- (void)setHasiCloudAccountSupportingSharing:(BOOL)arg1;
- (void)setLastName:(id)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setUserRecordID:(id)arg1;
- (id)userRecordID;

@end
