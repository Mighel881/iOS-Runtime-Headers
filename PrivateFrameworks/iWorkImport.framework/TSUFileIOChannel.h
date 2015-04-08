/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<OS_dispatch_io>, NSObject<OS_dispatch_queue>, NSString;

@interface TSUFileIOChannel : NSObject <TSURandomWriteChannel, TSUReadChannel, TSUStreamWriteChannel> {
    NSObject<OS_dispatch_io> *_channel;
    BOOL _isClosed;
    NSObject<OS_dispatch_queue> *_readQueue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isValid;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBarrier:(id)arg1;
- (void)close;
- (id)createRandomAccessChannel;
- (void)dealloc;
- (id)initForRandomWritingURL:(id)arg1 error:(id*)arg2;
- (id)initForReadingDescriptor:(int)arg1 queue:(id)arg2 cleanupHandler:(id)arg3;
- (id)initForReadingURL:(id)arg1 error:(id*)arg2;
- (id)initForStreamWritingURL:(id)arg1 error:(id*)arg2;
- (id)initWithType:(unsigned long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4 error:(id*)arg5;
- (id)initWithType:(unsigned long)arg1 channel:(id)arg2;
- (id)initWithType:(unsigned long)arg1 descriptor:(int)arg2 queue:(id)arg3 cleanupHandler:(id)arg4;
- (BOOL)isValid;
- (void)readFromOffset:(long long)arg1 length:(unsigned long)arg2 handler:(id)arg3;
- (void)readWithHandler:(id)arg1;
- (void)setLowWater:(unsigned long)arg1;
- (void)writeData:(id)arg1 offset:(long long)arg2 queue:(id)arg3 handler:(id)arg4;
- (void)writeData:(id)arg1 queue:(id)arg2 handler:(id)arg3;

@end
