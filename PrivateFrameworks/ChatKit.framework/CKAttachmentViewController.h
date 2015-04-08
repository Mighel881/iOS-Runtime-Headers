/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKAttachmentViewControllerDelegate>, CKAttachmentCollectionView, CKConversation, CKFeedCollectionViewLayout, CKQLPreviewController, CKTranscriptRecipientsController, NSArray, NSMutableArray, NSString, UIBarButtonItem, UICollectionViewFlowLayout;

@interface CKAttachmentViewController : CKViewController <CKAttachmentCellDelegate, CKFeedCollectionViewLayoutDatasource, CKFeedCollectionViewLayoutDelegate, CKTranscriptRecipientsControllerDelegate, QLPreviewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    CKAttachmentCollectionView *_collectionView;
    CKConversation *_conversation;
    <CKAttachmentViewControllerDelegate> *_delegate;
    UIBarButtonItem *_deleteButton;
    CKFeedCollectionViewLayout *_feedLayout;
    UICollectionViewFlowLayout *_flowLayout;
    BOOL _initialLoad;
    NSMutableArray *_mediaObjects;
    CKQLPreviewController *_qlPreviewController;
    CKTranscriptRecipientsController *_recipientsController;
    UIBarButtonItem *_saveButton;
    BOOL _selectingAttachments;
    NSArray *_visibleMediaObjects;
}

@property(retain) CKAttachmentCollectionView * collectionView;
@property(retain) CKConversation * conversation;
@property(copy,readonly) NSString * debugDescription;
@property <CKAttachmentViewControllerDelegate> * delegate;
@property(retain) UIBarButtonItem * deleteButton;
@property(copy,readonly) NSString * description;
@property(retain) CKFeedCollectionViewLayout * feedLayout;
@property(retain) UICollectionViewFlowLayout * flowLayout;
@property(readonly) unsigned int hash;
@property(getter=isInitialLoad) BOOL initialLoad;
@property(retain) NSMutableArray * mediaObjects;
@property(retain) CKQLPreviewController * qlPreviewController;
@property(retain) CKTranscriptRecipientsController * recipientsController;
@property(retain) UIBarButtonItem * saveButton;
@property(getter=isSelectingAttachments) BOOL selectingAttachments;
@property(readonly) Class superclass;
@property(retain) NSArray * visibleMediaObjects;

- (void)_chatItemsChanged:(id)arg1;
- (void)_configureCell:(id)arg1 withCollectionView:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)_deleteAttachments:(id)arg1;
- (void)_deleteSelectedAttachments:(id)arg1;
- (void)_faultInAttachments;
- (void)_hideCurrentPreviewItemForPreviewController:(id)arg1;
- (id)_iconForFileURL:(id)arg1 UTIType:(id)arg2;
- (void)_loadAttachments;
- (id)_mediaObjectsForAttachments:(id)arg1;
- (void)_prewarmNextChunk;
- (void)_saveAttachments:(id)arg1;
- (void)_saveSelectedAttachments:(id)arg1;
- (void)_showAllPreviewItemsForPreviewController:(id)arg1;
- (void)_updateMediaObjects:(id)arg1;
- (void)_updateToolbar;
- (struct CGImage { }*)cgImageForUIImage:(id)arg1;
- (id)collectionView;
- (BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(int)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3;
- (struct CKFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; })collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(struct CKFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; })arg5;
- (struct CKFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; })collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(int)arg3 andSection:(int)arg4 proposedMetrics:(struct CKFeedSeparatorMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; })arg5;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(float*)arg3 minimumNumberOfTilesToOmit:(int*)arg4 forSection:(int)arg5;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(int)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(int)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(int)arg3 withSection:(int)arg4;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(int)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(struct CGSize { float x1; float x2; })arg4;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(int)arg3 andHeaderForGroupID:(id)arg4;
- (int)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(int)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (id)deleteButton;
- (id)feedLayout;
- (id)flowLayout;
- (id)initWithConversation:(id)arg1;
- (BOOL)isInitialLoad;
- (BOOL)isSelectingAttachments;
- (void)loadView;
- (id)mediaObjects;
- (unsigned int)numberOfItemsInSection:(unsigned int)arg1 forFeedLayout:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (unsigned int)numberOfSectionsInFeedLayout:(id)arg1;
- (void)performAction:(SEL)arg1 forAttachmentCell:(id)arg2;
- (void)previewController:(id)arg1 didTransitionToState:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (BOOL)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)previewController:(id)arg1 willTransitionToState:(int)arg2;
- (id)qlPreviewController;
- (id)recipientsController;
- (id)saveButton;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)selectAttachments:(id)arg1;
- (id)selectedAttachmentIndexes;
- (void)setCollectionView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setFeedLayout:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setInitialLoad:(BOOL)arg1;
- (void)setMediaObjects:(id)arg1;
- (void)setQlPreviewController:(id)arg1;
- (void)setRecipientsController:(id)arg1;
- (void)setSaveButton:(id)arg1;
- (void)setSelectingAttachments:(BOOL)arg1;
- (void)setVisibleMediaObjects:(id)arg1;
- (void)transcriptRecipientsControllerDidChangeSize:(id)arg1;
- (BOOL)transcriptRecipientsControllerShouldShowAttachmentsHeader:(id)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (id)visibleMediaObjects;

@end
