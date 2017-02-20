/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFBrowserServiceViewController : _SFBrowserContentViewController <SFServiceViewControllerProtocol, _SFActivityDelegate> {
    id /* block */  _customActivitiesFetchCompletionHandler;
    _SFWebViewUsageMonitor * _usageMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_didLoadWebView;
- (void)_dismiss;
- (void)_fetchCustomActivitiesForURL:(id)arg1 title:(id)arg2 completion:(id /* block */)arg3;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)_notifyInitialLoadDidFinish:(BOOL)arg1;
- (void)_recordHostAppIdAndURLForTapToRadar:(id)arg1;
- (BOOL)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2;
- (void)_updateRemoteSwipeGestureState;
- (void)_updateStatusBarAppearance;
- (void)_willAppearInRemoteViewController;
- (void)dealloc;
- (void)didDetectRemoteViewControllerViewIsHidden;
- (void)didFetchHostAppCustomActivities:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadURL:(id)arg1;
- (void)repostNotificationInViewService:(id)arg1;
- (void)safariActivity:(id)arg1 didFinish:(BOOL)arg2;
- (void)setIsRunningTransitionAnimation:(BOOL)arg1;
- (void)setShowingLinkPreview:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
