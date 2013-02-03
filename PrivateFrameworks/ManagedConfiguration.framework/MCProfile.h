/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSString, NSData, NSDate, NSDictionary;

@interface MCProfile : NSObject {
    NSString *_UUID;
    NSDictionary *_context;
    NSString *_displayName;
    BOOL _encrypted;
    NSDate *_expiryDate;
    NSString *_identifier;
    NSDate *_installDate;
    BOOL _isLocked;
    BOOL _isStub;
    BOOL _needsReboot;
    NSString *_organization;
    NSString *_productBuildVersion;
    NSString *_productVersion;
    NSData *_profileData;
    NSString *_profileDescription;
    NSString *_removalPasscode;
    NSArray *_signerCertificates;
    struct dispatch_queue_s { } *_signerEvaluationQueue;
    BOOL _signerHasBeenEvaluated;
    NSString *_signerSummary;
    struct dispatch_queue_s { } *_trustEvaluationQueue;
    BOOL _trustHasBeenEvaluated;
    int _trustLevel;
    int _version;
}

@property(readonly) NSString * UUID;
@property(readonly) NSString * UUIDHashFileName;
@property(retain) NSDictionary * context;
@property(retain) NSString * displayName;
@property(readonly) NSDate * earliestCertificateExpiryDate;
@property(getter=isEncrypted) BOOL encrypted;
@property(readonly) NSDate * expiryDate;
@property(readonly) NSString * friendlyName;
@property(readonly) NSString * identifier;
@property(retain) NSDate * installDate;
@property(readonly) NSArray * installationWarnings;
@property(readonly) BOOL isManagedByProfileService;
@property(readonly) BOOL isSigned;
@property(readonly) BOOL isStub;
@property(readonly) NSArray * localizedPayloadSummaryByType;
@property(getter=isLocked) BOOL locked;
@property(readonly) BOOL needsReboot;
@property(readonly) NSString * organization;
@property(readonly) NSArray * payloads;
@property(readonly) NSString * productBuildVersion;
@property(readonly) NSString * productVersion;
@property(retain) NSData * profileData;
@property(readonly) NSString * profileDescription;
@property(readonly) NSString * profileIDHashFileName;
@property(retain) NSString * removalPasscode;
@property(readonly) NSString * removalPasscode;
@property(readonly) struct __SecCertificate { }* signerCertificate;
@property(retain) NSArray * signerCertificates;
@property(retain) NSString * signerSummary;
@property(readonly) NSString * stubFileName;
@property(readonly) int trustLevel;
@property(readonly) int version;

+ (int)_evaluateCertificateChain:(id)arg1;
+ (int)_evaluateSignerTrust:(struct __SecTrust { }*)arg1;
+ (id)_malformedProfileError;
+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (BOOL)checkString:(id)arg1 isOneOfStrings:(id)arg2 key:(id)arg3 errorDomain:(id)arg4 errorCode:(int)arg5 errorString:(id)arg6 outError:(id*)arg7;
+ (int)evaluateTrustOfData:(id)arg1;
+ (id)missingFieldErrorWithField:(id)arg1;
+ (id)profileDictionaryFromProfileData:(id)arg1 outWasEncrypted:(BOOL*)arg2 outError:(id*)arg3;
+ (id)profileWithData:(id)arg1 context:(id)arg2 fileName:(id)arg3 allowEmptyPayload:(BOOL)arg4 outError:(id*)arg5;
+ (id)profileWithData:(id)arg1 context:(id)arg2 fileName:(id)arg3 outError:(id*)arg4;
+ (id)profileWithData:(id)arg1 context:(id)arg2 outError:(id*)arg3;
+ (id)profileWithData:(id)arg1 fileName:(id)arg2 outError:(id*)arg3;
+ (id)profileWithData:(id)arg1 outError:(id*)arg2;
+ (id)profileWithDictionary:(id)arg1 fileName:(id)arg2 originalData:(id)arg3 wasEncrypted:(BOOL)arg4 allowEmptyPayload:(BOOL)arg5 outError:(id*)arg6;
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 invalidDataCode:(int)arg4 invalidDataErrorString:(id)arg5 outError:(id*)arg6;
+ (id)removeOptionalObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 invalidDataCode:(int)arg5 invalidDataErrorString:(id)arg6 outError:(id*)arg7;
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)arg1 key:(id)arg2 errorDomain:(id)arg3 missingDataCode:(int)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(int)arg6 invalidDataErrorString:(id)arg7 outError:(id*)arg8;
+ (id)removeRequiredObjectInDictionary:(id)arg1 key:(id)arg2 type:(Class)arg3 errorDomain:(id)arg4 missingDataCode:(int)arg5 missingDataErrorString:(id)arg6 invalidDataCode:(int)arg7 invalidDataErrorString:(id)arg8 outError:(id*)arg9;
+ (id)signerSummaryOfData:(id)arg1 outSignerCertificates:(id*)arg2;

- (id)UUID;
- (id)UUIDHashFileName;
- (void)__evaluateSignerCertificates;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)earliestCertificateExpiryDate;
- (void)evaluateSignerTrust;
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(id)arg1;
- (id)expiryDate;
- (id)friendlyName;
- (id)identifier;
- (id)initWithDictionary:(id)arg1 originalData:(id)arg2 wasEncrypted:(BOOL)arg3 allowEmptyPayload:(BOOL)arg4 outError:(id*)arg5;
- (id)installDate;
- (id)installationWarnings;
- (BOOL)isEncrypted;
- (BOOL)isLocked;
- (BOOL)isManagedByProfileService;
- (BOOL)isSigned;
- (BOOL)isStub;
- (id)localizedPayloadSummaryByType;
- (id)malformedProfileErrorWithError:(id)arg1;
- (BOOL)needsReboot;
- (id)organization;
- (id)payloadWithUUID:(id)arg1;
- (id)payloads;
- (id)productBuildVersion;
- (id)productVersion;
- (id)profileData;
- (id)profileDescription;
- (id)profileIDHashFileName;
- (id)removalPasscode;
- (id)removalPasscode;
- (void)setContext:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEncrypted:(BOOL)arg1;
- (void)setInstallDate:(id)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setProfileData:(id)arg1;
- (void)setRemovalPasscode:(id)arg1;
- (void)setSignerCertificates:(id)arg1;
- (void)setSignerSummary:(id)arg1;
- (struct __SecCertificate { }*)signerCertificate;
- (id)signerCertificates;
- (id)signerSummary;
- (id)stubDictionary;
- (id)stubFileName;
- (int)trustLevel;
- (int)version;
- (BOOL)writeStubToDirectory:(id)arg1;
- (BOOL)writeStubToPath:(id)arg1;

@end
