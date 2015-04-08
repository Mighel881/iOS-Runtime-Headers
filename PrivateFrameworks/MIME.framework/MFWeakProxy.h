/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class MFWeakReferenceHolder;

@interface MFWeakProxy : NSProxy {
    unsigned int _hash;
    Class _objectClass;
    MFWeakReferenceHolder *_weakRef;
}

+ (id)weakProxyForObject:(id)arg1;

- (Class)class;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned int)hash;
- (id)initWithObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isProxy;
- (struct objc_method_description { SEL x1; char *x2; }*)methodDescriptionForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)self;
- (Class)superclass;

@end
