/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@class CBATTRequest, NSData, NSString;

@interface BTLETransaction : NSObject {
    NSString *_identifier;
    NSString *_replyCharacteristic;
    NSData *_replyData;
    CBATTRequest *_request;
    BOOL _waitingToUpdate;
}

@property(copy) NSString * identifier;
@property(copy) NSString * replyCharacteristic;
@property(copy) NSData * replyData;
@property(retain) CBATTRequest * request;
@property(readonly) NSString * requestCharacteristic;
@property(copy) NSData * requestData;
@property BOOL waitingToUpdate;

- (void)dealloc;
- (id)identifier;
- (id)replyCharacteristic;
- (id)replyData;
- (id)request;
- (id)requestCharacteristic;
- (id)requestData;
- (void)setIdentifier:(id)arg1;
- (void)setReplyCharacteristic:(id)arg1;
- (void)setReplyData:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestData:(id)arg1;
- (void)setWaitingToUpdate:(BOOL)arg1;
- (BOOL)waitingToUpdate;

@end
