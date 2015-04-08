/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPStorage;

@interface TSTRichTextPayload : TSPObject <TSPCopying> {
    TSWPStorage *mStorage;
}

@property(retain) TSWPStorage * storage;

+ (id)payloadWithStorage:(id)arg1;

- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 storage:(id)arg2;
- (id)initWithStorage:(id)arg1;
- (BOOL)requiresRichText;
- (void)saveToArchiver:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;
- (id)string;

@end
