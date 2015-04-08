/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKRecordID, NSString;

@interface CKUserIdentityFetchInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString *_emailAddress;
    CKRecordID *_recordID;
}

@property(copy) NSString * emailAddress;
@property(copy) CKRecordID * recordID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)recordID;
- (void)setEmailAddress:(id)arg1;
- (void)setRecordID:(id)arg1;

@end
