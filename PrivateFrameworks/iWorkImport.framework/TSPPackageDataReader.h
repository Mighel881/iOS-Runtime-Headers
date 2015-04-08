/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, NSURL, TSPDocumentProperties, TSPPackage;

@interface TSPPackageDataReader : NSObject <TSPFileCoordinatorDelegate> {
    NSURL *_URL;
    TSPPackage *_package;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) TSPDocumentProperties * documentProperties;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isPasswordProtected;
@property(readonly) BOOL isValid;
@property(readonly) int packageType;
@property(readonly) NSString * passwordHint;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)checkPassword:(id)arg1;
- (id)documentProperties;
- (BOOL)hasDataAtRelativePath:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1 decryptionKey:(id)arg2;
- (BOOL)isPasswordProtected;
- (BOOL)isValid;
- (struct CGDataProvider { }*)newCGDataProviderAtRelativePath:(id)arg1;
- (struct CGImage { }*)newCGImageAtRelativePath:(id)arg1;
- (struct CGImageSource { }*)newCGImageSourceAtRelativePath:(id)arg1;
- (int)packageType;
- (id)passwordHint;
- (void)performReadUsingAccessor:(id)arg1;

@end
