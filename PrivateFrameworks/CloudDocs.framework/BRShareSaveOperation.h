/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKShare;

@interface BRShareSaveOperation : BROperation {
    CKShare *_share;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shareSaveCompletionBlock;

}

@property(retain) CKShare * share;
@property(copy) id shareSaveCompletionBlock;

- (void)dealloc;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1;
- (void)main;
- (void)setShare:(id)arg1;
- (void)setShareSaveCompletionBlock:(id)arg1;
- (id)share;
- (id)shareSaveCompletionBlock;

@end
