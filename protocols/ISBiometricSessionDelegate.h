/* Generated by RuntimeBrowser.
 */

@protocol ISBiometricSessionDelegate <NSObject>

@optional

- (void)sender:(id)arg1 didFallbackToPassword:(BOOL)arg2;
- (void)sender:(id)arg1 shouldContinueTouchIDSession:(BOOL)arg2;
- (void)sender:(id)arg1 willSendChallenge:(NSString *)arg2 andSignature:(NSString *)arg3;

@end
