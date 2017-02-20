/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIOnboardingController : NSObject {
    WLKUIAccessViewController * _accessVC;
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;

+ (id)eligibleBundleIDs;

- (void).cxx_destruct;
- (void)_runConsentFlow;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)dismiss;
- (void)present;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
