/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKLatestSummariesQueryServerDataObject : _HKQueryServerDataObject {
    NSCalendar * _calendar;
    NSDate * _summaryDate;
}

@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, retain) NSDate *summaryDate;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)calendar;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setSummaryDate:(id)arg1;
- (id)summaryDate;

@end
