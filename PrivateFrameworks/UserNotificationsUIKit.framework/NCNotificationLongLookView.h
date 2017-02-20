/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationLongLookView : NCAnimatableBlurringView <NCContentSizeCategoryAdjusting, NCCustomContentContainingLookView, NCNotificationStaticContentAccepting, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    UIView * _actionsBackgroundView;
    UIView * _actionsClippingView;
    BOOL  _actionsHidden;
    NCKeyLineView * _actionsKeyLineView;
    UIInterfaceActionGroupView * _actionsView;
    unsigned int  _customContentLocation;
    struct CGSize { 
        float width; 
        float height; 
    }  _customContentSize;
    UIView * _customContentView;
    UIView * _headerClippingView;
    NCLookHeaderContentView * _headerContentView;
    UIView * _headerDivider;
    BOOL  _hidesNotificationContent;
    UITapGestureRecognizer * _lookViewTapGestureRecognizer;
    UIView * _mainContentClippingView;
    UIView * _mainContentView;
    NCNotificationContentView * _notificationContentView;
    UIScrollView * _scrollView;
    UIView * _topRubberbandingView;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (getter=isActionsHidden, nonatomic) BOOL actionsHidden;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (getter=isBackgroundBlurred, nonatomic) BOOL backgroundBlurred;
@property (getter=isBanner, nonatomic) BOOL banner;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } contentSizeExcludingActions;
@property (nonatomic) unsigned int customContentLocation;
@property (nonatomic) struct CGSize { float x1; float x2; } customContentSize;
@property (nonatomic, readonly) UIView *customContentView;
@property (nonatomic, copy) NSDate *date;
@property (getter=isDateAllDay, nonatomic, readonly) BOOL dateAllDay;
@property (nonatomic) int dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hidesNotificationContent;
@property (nonatomic, copy) NSString *hintText;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) UIButton *iconButton;
@property (nonatomic, retain) NSArray *interfaceActions;
@property (nonatomic, readonly) UITapGestureRecognizer *lookViewTapGestureRecognizer;
@property (nonatomic) unsigned int messageNumberOfLines;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) NSString *primarySubtitleText;
@property (nonatomic, copy) NSString *primaryText;
@property (getter=_scrollView, nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } sizeExcludingActions;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *thumbnail;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UIButton *utilityButton;

- (void).cxx_destruct;
- (void)_configureActionViewIfNecessaryWithActions:(id)arg1;
- (void)_configureActionsBackgroundViewIfNecessaryWithActions:(id)arg1;
- (void)_configureActionsClippingViewIfNecessaryWithActions:(id)arg1;
- (void)_configureActionsKeyLineViewIfNecessaryWithActions:(id)arg1;
- (void)_configureCustomContentViewIfNecessary;
- (void)_configureHeaderClippingViewIfNecessary;
- (void)_configureHeaderContentViewIfNecessary;
- (void)_configureLookViewTapGestureRecognizerIfNecessary;
- (void)_configureMainContentClippingViewIfNecessary;
- (void)_configureMainContentViewIfNecessary;
- (void)_configureNotificationContentViewIfNecessary;
- (void)_configureScrollViewIfNecessary;
- (struct CGSize { float x1; float x2; })_contentSizeThatFitsContentWithSizeExcludingActions:(struct CGSize { float x1; float x2; })arg1;
- (void)_layoutActionsView;
- (void)_layoutCustomContentView;
- (void)_layoutCustomContentViewInRelationToContentView;
- (void)_layoutHeader;
- (void)_layoutMainContentClippingView;
- (void)_layoutMainContentView;
- (void)_layoutNotificationContentView;
- (void)_layoutScrollView;
- (void)_layoutTopRubberbandingView;
- (BOOL)_lookViewTapGestureRecognizerShouldReceiveTouch:(id)arg1;
- (id)_scrollView;
- (struct CGSize { float x1; float x2; })_sizeThatFitsContentExcludingActionsWithSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })actionsSizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)adjustForContentSizeCategoryChange;
- (BOOL)adjustsFontForContentSizeCategory;
- (struct CGSize { float x1; float x2; })contentSizeExcludingActions;
- (struct CGSize { float x1; float x2; })contentSizeForSize:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)customContentLocation;
- (struct CGSize { float x1; float x2; })customContentSize;
- (id)customContentView;
- (id)date;
- (int)dateFormatStyle;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)hidesNotificationContent;
- (id)icon;
- (id)iconButton;
- (id)interfaceActions;
- (BOOL)isActionsHidden;
- (BOOL)isBackgroundBlurred;
- (BOOL)isBanner;
- (BOOL)isDateAllDay;
- (void)layoutSubviews;
- (int)lookStyle;
- (id)lookViewTapGestureRecognizer;
- (id)primarySubtitleText;
- (id)primaryText;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })scrollViewFrame;
- (id)secondaryText;
- (void)setActionsHidden:(BOOL)arg1;
- (void)setAdjustsFontForContentSizeCategory:(BOOL)arg1;
- (void)setBackgroundBlurred:(BOOL)arg1;
- (void)setBanner:(BOOL)arg1;
- (void)setCustomContentLocation:(unsigned int)arg1;
- (void)setCustomContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDate:(id)arg1;
- (void)setDateAllDay:(BOOL)arg1;
- (void)setDateFormatStyle:(int)arg1;
- (void)setHidesNotificationContent:(BOOL)arg1;
- (void)setIcon:(id)arg1;
- (void)setInterfaceActions:(id)arg1;
- (void)setPrimarySubtitleText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeExcludingActions;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFitsContentWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)timeZone;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;
- (id)utilityButton;

@end
