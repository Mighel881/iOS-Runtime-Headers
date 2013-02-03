/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSDateComponents, EKPadAllDayViewContents, EKDayOccurrenceView, UILabel, UIScrollView, EKEvent, <EKPadAllDayViewDelegate>, NSCalendar, NSArray, NSTimeZone, NSMutableArray, UIImageView;

@interface EKPadAllDayView : UIView <EKPadAllDayViewContentsDelegate, UIScrollViewDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _drawsLeftBorder : 1;
    unsigned int _drawsAllBorders : 1;
    unsigned int _allowsOccurrenceSelection : 1;
    unsigned int _scrollbarShowsInside : 1;
    unsigned int _showsDayTitles : 1;
    unsigned int _drawsRightBorder : 1;
    unsigned int _showsLeftAllDayTitle : 1;
    unsigned int _dimsNonSelectedItems : 1;
    unsigned int _leftMarginIncludesTimeView : 1;
    unsigned int _showsHalfOfScrolledEvents : 1;
    UILabel *_allDayLabel;
    BOOL _allDayLabelHighlighted;
    NSCalendar *_calendar;
    } _contentFrame;
    EKPadAllDayViewContents *_contentView;
    NSMutableArray *_dayDates;
    NSMutableArray *_dayNames;
    unsigned int _daysToDisplay;
    <EKPadAllDayViewDelegate> *_delegate;
    EKEvent *_dimmedOccurrence;
    NSMutableArray *_dividerFaders;
    NSDateComponents *_endDate;
    float _eventFaderInset;
    NSMutableArray *_eventFaders;
    float _fixedDayWidth;
    NSMutableArray *_layedOutRows;
    int _maxOccurrencesWithoutScroller;
    float _minimumHeight;
    float _occurrenceHRightInset;
    int _orientation;
    int _outlineStyle;
    UIScrollView *_scroller;
    EKEvent *_scrollingToOccurrence;
    EKEvent *_selectedEvent;
    EKDayOccurrenceView *_selectedOccurrenceView;
    int _shouldAbbreviateDayNames;
    UIImageView *_splitterView;
    NSDateComponents *_startDate;
    int _style;
    BOOL _usesSmallText;
    float _verticalTopMargin;
}

@property(copy) NSCalendar * calendar;
@property <EKPadAllDayViewDelegate> * delegate;
@property(retain) EKEvent * dimmedOccurrence;
@property BOOL dimsNonSelectedItems;
@property(readonly) float faderInset;
@property(readonly) float firstEventYOffset;
@property float fixedDayWidth;
@property int maxOccurrencesWithoutScroller;
@property(readonly) float maximumHeight;
@property float minimumHeight;
@property(readonly) NSArray * occurrenceViews;
@property BOOL showsHalfOfScrolledEvents;
@property(copy) NSDateComponents * startDate;
@property int style;
@property(copy) NSTimeZone * timeZone;
@property BOOL usesSmallText;

+ (float)occurrenceHeight;

- (unsigned int)_calendarOrderForCalendar:(id)arg1;
- (id)_calendarOrderSortDescriptor;
- (double)_dateForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)_dayWidth;
- (float)_faderWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForOccurrenceBlock:(id)arg1 index:(unsigned int)arg2;
- (void)_loadFadersIfNeeded;
- (void)_localeChanged;
- (id)_numberOfDaysSortDescriptor;
- (void)_removeDayLabels;
- (float)_scrollbarOffset;
- (BOOL)_shouldAbbreviateDateTextLabels;
- (void)_significantTimeChanged;
- (void)_updateDayLabels;
- (void)_updateSelectedEventOccurrence;
- (void)addViewToScroller:(id)arg1;
- (float)bottomInset;
- (void)buildDayLabel;
- (id)calendar;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dayOccurrenceViewDragExited:(id)arg1;
- (void)dayOccurrenceViewStartTouch:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dealloc;
- (id)delegate;
- (id)dimmedOccurrence;
- (BOOL)dimsNonSelectedItems;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)emptySpaceClickForCalendarWeekDayEventContent:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (float)faderInset;
- (float)firstEventYOffset;
- (float)fixedDayWidth;
- (id)getSortedBlocksFromOccurrenceBlocks:(id)arg1;
- (float)heightForNumberOfOccurrences:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(int)arg2 numberOfDaysToDisplay:(unsigned int)arg3 opaque:(BOOL)arg4 backgroundColor:(id)arg5 scrollbarShowsInside:(BOOL)arg6;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAllDayLabelHighlighted;
- (void)layoutSubviews;
- (id)makeAllDayLabel:(BOOL)arg1;
- (int)maxOccurrencesWithoutScroller;
- (float)maximumHeight;
- (float)minimumHeight;
- (float)nextAvailableOccurrenceViewYOriginForDay:(double)arg1;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViewForOccurrence:(id)arg1;
- (id)occurrenceViews;
- (id)occurrenceVisibleRect:(id)arg1;
- (void)scrollToEvent:(id)arg1 animating:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (id)selectedOccurrenceView;
- (void)setAllDayLabelHighlighted:(BOOL)arg1;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmedOccurrence:(id)arg1;
- (void)setDimsNonSelectedItems:(BOOL)arg1;
- (void)setDrawsLeftBorder:(BOOL)arg1;
- (void)setDrawsRightBorder:(BOOL)arg1;
- (void)setFixedDayWidth:(float)arg1;
- (void)setLeftMarginIncludesTimeView:(BOOL)arg1;
- (void)setMaxOccurrencesWithoutScroller:(int)arg1;
- (void)setMinimumHeight:(float)arg1;
- (void)setOccurrenceHRightInset:(float)arg1;
- (void)setOccurrences:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOutlineStyle:(int)arg1;
- (void)setShowsDayTitles:(BOOL)arg1;
- (void)setShowsHalfOfScrolledEvents:(BOOL)arg1;
- (void)setShowsLeftAllDayTitle:(BOOL)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUsesSmallText:(BOOL)arg1;
- (void)setViewsDimmed:(BOOL)arg1 forEvent:(id)arg2;
- (BOOL)showsHalfOfScrolledEvents;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)startDate;
- (int)style;
- (id)timeZone;
- (void)updateDayLabels;
- (BOOL)usesSmallText;

@end
