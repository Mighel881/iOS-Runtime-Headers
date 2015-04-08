/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSMutableArray, NSObject<OS_dispatch_source>, NSString, PKAuthenticator, PKPassPaymentPayStateView, PKPassPaymentSummaryView, PKPaymentService, UIButton;

@interface PKPassPaymentContainerView : PKPassPaymentFooterContentView <PKAuthenticatorDelegate, PKBiometricEventObserver, PKPassPaymentPayStateViewDelegate, PKPassPaymentSummaryViewDelegate, PKPaymentServiceDelegate> {
    UIButton *_actionButton;
    BOOL _authenticating;
    PKAuthenticator *_authenticator;
    unsigned int _authenticatorState;
    int _currentPayState;
    unsigned int _deactivationReasons;
    NSObject<OS_dispatch_source> *_fingerdownTimeout;
    BOOL _inBackground;
    BOOL _isVisible;
    PKPassPaymentPayStateView *_payStateView;
    PKPaymentService *_paymentService;
    int _pendingPayState;
    NSString *_pendingPayStateTextOverride;
    BOOL _presentingPasscode;
    BOOL _recognizing;
    BOOL _requiresPasscodeDismissal;
    BOOL _returnToSummaryOnFingerOff;
    PKPassPaymentSummaryView *_summaryView;
    NSMutableArray *_transitionCompletionHandlers;
    BOOL _transitioning;
    BOOL _waitingForGlyphView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_activateForPayment;
- (void)_addTransitionCompletionHandler:(id)arg1;
- (void)_applyLatestTransactionAndMessageToSummaryView;
- (void)_applyPayState:(int)arg1;
- (void)_applyPayState:(int)arg1 afterDelay:(double)arg2;
- (void)_applyPayState:(int)arg1 withTextOverride:(id)arg2;
- (void)_applyPayState:(int)arg1 withTextOverride:(id)arg2 completionHandler:(id)arg3;
- (BOOL)_authenticationAllowed;
- (void)_authorizeForPaymentWithCredential:(id)arg1;
- (void)_beginPasscodeOnlyAuthentication;
- (void)_beginPaymentAuthorization;
- (void)_beginPaymentAuthorizationWithImmediatePasscode:(BOOL)arg1;
- (id)_buttonForState:(int)arg1;
- (id)_buttonWithTitle:(id)arg1 alignment:(int)arg2 action:(SEL)arg3;
- (BOOL)_canAuthenticateWithPasscode;
- (BOOL)_canAuthenticateWithTouchID;
- (void)_cancelFingeroffTimeout;
- (void)_deauthorizeForPayment;
- (id)_emphasisButtonForState:(int)arg1;
- (void)_emphasizeStateIfPossible:(int)arg1 withTextOverride:(id)arg2;
- (void)_endFingerprintAnimationWithSuccess:(BOOL)arg1 completion:(id)arg2;
- (void)_endPaymentAuthorization;
- (void)_endTransition:(BOOL)arg1;
- (void)_executeTransitionCompletionHandlers:(BOOL)arg1;
- (id)_filledButtonWithTitle:(id)arg1 alignment:(int)arg2 action:(SEL)arg3;
- (void)_handleAddDeactivationReasonNotification:(id)arg1;
- (void)_handleEnterBackgroundNotification:(id)arg1;
- (void)_handleEnterForegroundNotification:(id)arg1;
- (void)_handleRemoveDeactivationReasonNotification:(id)arg1;
- (BOOL)_isDeactivatedWithReasons:(unsigned int)arg1;
- (BOOL)_isForegroundActiveWithReasons:(unsigned int)arg1;
- (BOOL)_isInBackgroundWithReasons:(unsigned int)arg1;
- (BOOL)_isLifecycleNotificationRelevant:(id)arg1;
- (void)_lookupLatestMessageWithCompletion:(id)arg1;
- (void)_lookupLatestTransactionWithCompletion:(id)arg1;
- (void)_passcodeAuthenticationButtonPressed:(id)arg1;
- (void)_passcodeFallbackButtonPressed:(id)arg1;
- (void)_performAuthentication;
- (id)_preArmButtonTitle;
- (void)_prearmButtonPressed:(id)arg1;
- (void)_promoteToAuthorizedStateIfPossible;
- (void)_resetToIdleState;
- (void)_resetToIdleStateAfterDelay:(double)arg1;
- (void)_resetToIdleStateAfterDelay:(double)arg1 whileIgnoreField:(BOOL)arg2;
- (void)_resetToIdleStateWhileIgnoringField:(BOOL)arg1;
- (BOOL)_showSummaryState;
- (void)_startFingeroffTimeout;
- (void)_startFingerprintAnimation;
- (void)_transitionToState:(int)arg1 withTextOverride:(id)arg2 animated:(BOOL)arg3 completionHandler:(id)arg4;
- (void)_transitionViewsAnimated:(BOOL)arg1;
- (void)_updateAuthenticatorState;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned int)arg2;
- (void)dealloc;
- (void)didBecomeHiddenAnimated:(BOOL)arg1;
- (void)dismissPasscodeRemoteViewController;
- (id)initWithPass:(id)arg1;
- (void)layoutSubviews;
- (void)payStateView:(id)arg1 revealingCheckmark:(BOOL)arg2;
- (void)paymentDeviceDidEnterField;
- (void)paymentDeviceDidLeaveField;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifierDidCompleteTransaction:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidDeauthorize:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidFailTransaction:(id)arg1;
- (void)paymentServiceReceivedInterruption;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(id)arg2;
- (void)summaryView:(id)arg1 didDeleteMessage:(id)arg2;
- (void)willBecomeHiddenAnimated:(BOOL)arg1;
- (void)willBecomeVisibleAnimated:(BOOL)arg1;

@end
