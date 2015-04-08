/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class ALAssetRepresentation, ALAssetsLibrary, NSObject<OS_dispatch_queue>, NSString;

@interface TSPAssetReadChannel : NSObject <TSUStreamReadChannel> {
    ALAssetsLibrary *_library;
    NSObject<OS_dispatch_queue> *_readQueue;
    ALAssetRepresentation *_representation;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initWithRepresentation:(id)arg1 library:(id)arg2;
- (void)readWithHandler:(id)arg1;

@end
