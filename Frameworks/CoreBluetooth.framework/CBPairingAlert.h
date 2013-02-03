/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class UIAlertView, UIButton, <CBPairingAlertDelegate>, UITextField, NSNumber;

@interface CBPairingAlert : NSObject {
    UIAlertView *_alert;
    <CBPairingAlertDelegate> *_delegate;
    UIButton *_doneButton;
    NSNumber *_pairingType;
    UITextField *_passkeyField;
}

@property <CBPairingAlertDelegate> * delegate;

- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (id)initWithDeviceName:(id)arg1 pairingType:(id)arg2 passkey:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)show;
- (void)textDidChange:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end
