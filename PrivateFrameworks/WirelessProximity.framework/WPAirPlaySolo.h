/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@class <WPAirPlaySoloDelegate>, NSString, XPCClient;

@interface WPAirPlaySolo : NSObject <XPCClientDelegate> {
    XPCClient *_connection;
    <WPAirPlaySoloDelegate> *_delegate;
    int _state;
}

@property(retain) XPCClient * connection;
@property(copy,readonly) NSString * debugDescription;
@property <WPAirPlaySoloDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property int state;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (void)connectionDied;
- (void)connectionInterrupted;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)messageArrived:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(int)arg1;
- (void)startConnectionlessAdvertisingWithData:(id)arg1;
- (void)startConnectionlessScanningWithData:(id)arg1;
- (void)startTrackingPeer:(id)arg1 withData:(id)arg2;
- (int)state;
- (void)stopConnectionlessAdvertising;
- (void)stopConnectionlessScanningWithData:(id)arg1;
- (void)stopTrackingPeer:(id)arg1 withData:(id)arg2;
- (void)updateState:(int)arg1;

@end
