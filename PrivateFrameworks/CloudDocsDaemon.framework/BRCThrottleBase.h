/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSString;

@interface BRCThrottleBase : NSObject {
    unsigned int _finalRetryCount;
    unsigned int _initialRetryCount;
    long long _maximumNsecsBetweenRetries;
    long long _minimumNsecsBetweenRetries;
    NSString *_name;
    long long _nsecsBeforeForgettingCounter;
}

@property(readonly) NSString * name;
@property(readonly) long long nsecsBeforeForgettingCounter;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 andParameters:(id)arg2;
- (BOOL)isBlocking;
- (id)name;
- (long long)nsecsBeforeForgettingCounter;
- (long long)nsecsToNextRetry:(long long)arg1 retryCount:(unsigned int*)arg2 now:(long long)arg3;
- (long long)retryBackoff:(unsigned int)arg1;

@end
