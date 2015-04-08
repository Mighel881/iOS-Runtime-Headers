/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSInputStream, PBMessageStreamReader;

@interface BRCPackageManifestReader : NSEnumerator {
    PBMessageStreamReader *_reader;
    NSInputStream *_stream;
}

@property Class itemClass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)done;
- (id)initWithAsset:(id)arg1;
- (id)initWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2;
- (id)initWithInputStream:(id)arg1;
- (id)initWithURL:(id)arg1;
- (Class)itemClass;
- (id)nextObject;
- (void)setItemClass:(Class)arg1;

@end
