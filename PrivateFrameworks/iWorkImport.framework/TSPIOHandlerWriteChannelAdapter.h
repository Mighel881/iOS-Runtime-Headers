/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSString;

@interface TSPIOHandlerWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {
    NSError *_error;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initWithHandler:(id)arg1;
- (void)setError:(id)arg1;
- (void)writeData:(id)arg1;

@end
