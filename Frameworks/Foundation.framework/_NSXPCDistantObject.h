/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSXPCConnection, NSXPCInterface;

@interface _NSXPCDistantObject : NSObject <NSSecureCoding, NSXPCProxyCreating> {
    NSXPCConnection *_connection;
    BOOL _exported;
    unsigned long long _generationCount;
    struct __CFDictionary { } *_knownSelectors;
    unsigned long long _proxyNumber;
    NSXPCInterface *_remoteInterface;
    int _selectorLock;
}

@property(retain) NSXPCConnection * _connection;
@property BOOL _exported;
@property unsigned long long _generationCount;
@property unsigned long long _proxyNumber;
@property(retain) NSXPCInterface * _remoteInterface;

+ (BOOL)supportsSecureCoding;

- (id)_connection;
- (BOOL)_exported;
- (unsigned long long)_generationCount;
- (id)_initWithConnection:(id)arg1 exportedObject:(id)arg2 interface:(id)arg3;
- (id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4;
- (unsigned long long)_proxyNumber;
- (id)_remoteInterface;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(id)arg2;
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(id)arg2;
- (void)set_connection:(id)arg1;
- (void)set_exported:(BOOL)arg1;
- (void)set_generationCount:(unsigned long long)arg1;
- (void)set_proxyNumber:(unsigned long long)arg1;
- (void)set_remoteInterface:(id)arg1;

@end
