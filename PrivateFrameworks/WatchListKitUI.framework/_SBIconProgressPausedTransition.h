/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface _SBIconProgressPausedTransition : _SBIconProgressTransition {
    double  _duration;
    float  _fraction;
    CAMediaTimingFunction * _timingFunction;
    BOOL  _toPaused;
    double  _totalElapsedTime;
}

+ (id)newTransitionToPaused:(BOOL)arg1;

- (id)_initToPaused:(BOOL)arg1;
- (void)_updateElapsedTimeFromFraction;
- (void)_updateTimingFunction;
- (void)_updateView:(id)arg1;
- (void)completeTransitionAndUpdateView:(id)arg1;
- (void)dealloc;
- (BOOL)isCompleteWithView:(id)arg1;
- (void)updateToPaused:(BOOL)arg1;
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;

@end
