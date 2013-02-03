/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPHomeSharingML3DataProvider, NSError, NSData, SSAuthorizationRequest, NSURL;

@interface MPHomeSharingErrorResolver : MPAVErrorResolver <SSAuthorizationRequestDelegate> {
    unsigned long long _accountID;
    MPHomeSharingML3DataProvider *_dataProvider;
    NSError *_error;
    NSURL *_keybagURL;
    SSAuthorizationRequest *_request;
    NSData *_tokenData;
}

@property(retain) MPHomeSharingML3DataProvider * dataProvider;

- (BOOL)_errorIsFairPlayError:(id)arg1;
- (void)authorizationRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)dataProvider;
- (void)dealloc;
- (id)initWithTokenData:(id)arg1 forAccountID:(unsigned long long)arg2 keybagURL:(id)arg3;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)resolveError:(id)arg1;
- (void)setDataProvider:(id)arg1;

@end
