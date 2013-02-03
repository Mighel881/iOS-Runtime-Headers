/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AWDHistogram : NSObject {
    unsigned int *buckets;
    float *floatBuckets;
    unsigned int *histogram;
    unsigned int size;
}

- (void)addFloatValue:(float)arg1;
- (void)addValue:(unsigned int)arg1;
- (id)array;
- (void)dealloc;
- (id)initWithBuckets:(unsigned int*)arg1 size:(unsigned int)arg2;
- (id)initWithFloatBuckets:(float*)arg1 size:(unsigned int)arg2;
- (void)print;
- (void)reset;

@end
