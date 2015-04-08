/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString;

@interface ABPropertyIDSRequest : NSObject <IDSIDQueryControllerDelegate> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _idQueryResultHandler;

    NSString *_listenerID;
    NSArray *_propertyItems;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _requestResultBlock;

    NSString *_service;
}

@property(readonly) BOOL cancelled;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) id idQueryResultHandler;
@property(retain) NSString * listenerID;
@property(retain) NSArray * propertyItems;
@property(copy) id requestResultBlock;
@property(retain) NSString * service;
@property(readonly) Class superclass;

- (void)_requestStatusOnMainQueue:(BOOL)arg1;
- (void)cancel;
- (BOOL)cancelled;
- (void)dealloc;
- (id)idQueryResultHandler;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2 postToMainQueue:(BOOL)arg3 resultBlock:(id)arg4;
- (id)listenerID;
- (id)propertyItems;
- (id)requestResultBlock;
- (id)service;
- (void)setIdQueryResultHandler:(id)arg1;
- (void)setListenerID:(id)arg1;
- (void)setPropertyItems:(id)arg1;
- (void)setRequestResultBlock:(id)arg1;
- (void)setService:(id)arg1;

@end
