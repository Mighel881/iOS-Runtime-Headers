/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSURL;

@interface TSUTemporaryDirectoryManager : NSObject {
    NSURL *_baseDirectoryURL;
}

+ (id)baseDirectoryURL;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_clearDirectories:(id)arg1;
- (id)_readDirectories;
- (id)init;
- (id)newDirectory;

@end
