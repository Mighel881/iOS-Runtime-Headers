/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEORequester, NSNumber, NSString, PBRequest;

@interface _GEOServiceRequesterOp : NSObject <PBRequesterDelegate> {
    NSString *_appIdentifier;
    BOOL _cancelled;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    NSString *_debugRequestName;
    int _experimentDispatcherRequestType;
    int _experimentType;
    PBRequest *_request;
    GEORequester *_requester;
    NSNumber *_serviceTypeNumber;
    double _timeout;
    unsigned int _urlType;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_cleanup;
- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 appIdentifier:(id)arg2 urlType:(unsigned int)arg3 debugRequestName:(id)arg4 serviceType:(id)arg5 experimentType:(int)arg6 experimentDispatcherRequestType:(int)arg7 timeout:(double)arg8;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)startWithCompletionHandler:(id)arg1;

@end
