/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSUDateFormatter : NSObject {
    NSString *mDateOnlyFormatString;
    struct __CFDateFormatter { } *mFullDateFormatter;
    NSString *mTimeOnlyFormatString;
}

+ (id)dateFormatStringSpecialSymbols;
+ (id)datePortionOfDateTimeFormatString:(id)arg1;
+ (id)defaultDateTimeFormatForLocale:(id)arg1;
+ (unsigned int)p_DateTimeSplitLocationInFormatString:(id)arg1;
+ (id)shortMonthNamesForNonCachedCurrentLocale;
+ (id)supportedDateFormatsForLocale:(id)arg1;
+ (id)supportedTimeFormatsForLocale:(id)arg1;
+ (id)timePortionOfDateTimeFormatString:(id)arg1;

- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)arg1;

@end
