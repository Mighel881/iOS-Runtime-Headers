/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CBCentralManager, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface BTLEBrowser : NSObject <CBCentralManagerDelegate> {
    NSMutableDictionary *_accessories;
    CBCentralManager *_centralManager;
    struct BTLEBrowserPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; id x2; } *_cfBrowser;
    void *_eventHandler_ctx;
    int (*_eventHandler_f)();
    NSObject<OS_dispatch_source> *_lostTimer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; } *_ucat;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_lostTimer;
- (void)_postEventType:(unsigned int)arg1 accessory:(id)arg2;
- (void)_start;
- (void)_stop:(long)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)dealloc;
- (id)initWithCFBrowser:(struct BTLEBrowserPrivate { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; id x2; }*)arg1;

@end
