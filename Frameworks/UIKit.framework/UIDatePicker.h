/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimeZone, NSLocale, NSCalendar, NSDate, UIPickerView;

@interface UIDatePicker : UIControl <NSCoding> {
    UIPickerView *_pickerView;
}

@property(copy) NSCalendar * calendar;
@property double countDownDuration;
@property(retain) NSDate * date;
@property int datePickerMode;
@property(getter=_dateUnderSelectionBar,readonly) NSDate * dateUnderSelectionBar;
@property(retain) NSLocale * locale;
@property(retain) NSDate * maximumDate;
@property(retain) NSDate * minimumDate;
@property int minuteInterval;
@property(retain) NSTimeZone * timeZone;
@property(getter=_usesBlackChrome,setter=_setUsesBlackChrome:) BOOL usesBlackChrome;

- (float)_contentWidth;
- (id)_dateUnderSelectionBar;
- (void)_insertPickerView;
- (id)_locale;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setHidesLabels:(BOOL)arg1;
- (void)_setHighlightsToday:(BOOL)arg1;
- (void)_setLocale:(id)arg1;
- (void)_setUsesBlackChrome:(BOOL)arg1;
- (BOOL)_usesBlackChrome;
- (void)awakeFromNib;
- (id)calendar;
- (double)countDownDuration;
- (id)date;
- (id)dateComponents;
- (int)datePickerMode;
- (void)encodeWithCoder:(id)arg1;
- (int)hour;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)locale;
- (id)maximumDate;
- (id)minimumDate;
- (int)minute;
- (int)minuteInterval;
- (int)second;
- (void)setCalendar:(id)arg1;
- (void)setCountDownDuration:(double)arg1;
- (void)setDate:(id)arg1 animate:(BOOL)arg2;
- (void)setDate:(id)arg1 animated:(BOOL)arg2;
- (void)setDate:(id)arg1;
- (void)setDateComponents:(id)arg1;
- (void)setDatePickerMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlightsToday:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (void)setMinuteInterval:(int)arg1;
- (void)setStaggerTimeIntervals:(BOOL)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)setTimeZone:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (double)timeInterval;
- (id)timeZone;

@end
