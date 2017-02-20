/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLColorAgent : PLAgent {
    PLTimer * _colorAgentTimer;
    BOOL  _displayActive;
    PLEntryNotificationOperatorComposition * _displayOffNotification;
    PLEntryNotificationOperatorComposition * _displayOnNotification;
}

@property (retain) PLTimer *colorAgentTimer;
@property BOOL displayActive;
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification;
@property (retain) PLEntryNotificationOperatorComposition *displayOnNotification;

+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointRGBEvent;
+ (void)load;

- (void).cxx_destruct;
- (void)captureScreenPixelValues;
- (id)colorAgentTimer;
- (void)dealloc;
- (BOOL)displayActive;
- (id)displayOffNotification;
- (id)displayOnNotification;
- (id)init;
- (void)initOperatorDependancies;
- (void)logEventPointColorEval:(unsigned char)arg1 withG:(unsigned char)arg2 withB:(unsigned char)arg3 withInvR:(unsigned char)arg4 withInvG:(unsigned char)arg5 withInvB:(unsigned char)arg6;
- (void)setColorAgentTimer:(id)arg1;
- (void)setDisplayActive:(BOOL)arg1;
- (void)setDisplayOffNotification:(id)arg1;
- (void)setDisplayOnNotification:(id)arg1;

@end
