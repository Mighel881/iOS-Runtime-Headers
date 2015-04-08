/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, TNPageController, TNPdfHyperlinkController;

@interface TNRenderingExporter : TSARenderingExporter {
    BOOL _renderingAllSheets;
    NSMutableArray *mCanvasBasedSheets;
    TNPdfHyperlinkController *mHyperlinkController;
    TNPageController *mPageController;
    unsigned int mPageIndex;
    unsigned int mSheetIndex;
    struct vector<unsigned int, std::__1::allocator<unsigned int> > { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { 
            unsigned int *__first_; 
        } __end_cap_; 
    } mSheetPageCountArray;
    struct vector<unsigned int, std::__1::allocator<unsigned int> > { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { 
            unsigned int *__first_; 
        } __end_cap_; 
    } mSheetPageStartArray;
    unsigned int mTotalPagesCount;
}

@property(getter=isRenderingAllSheets) BOOL renderingAllSheets;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsRect;
- (id)currentInfos;
- (void)dealloc;
- (void)drawAllPagesWithContext:(struct CGContext { }*)arg1 returnSuccess:(BOOL*)arg2;
- (BOOL)drawCurrentPageInContext:(struct CGContext { }*)arg1 viewScale:(float)arg2 unscaledClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 createPage:(BOOL)arg4;
- (void)drawCurrentPageWithContext:(struct CGContext { }*)arg1 returnSuccess:(BOOL*)arg2;
- (unsigned int)inSheetPageIndexForPage:(unsigned int)arg1;
- (BOOL)incrementPage;
- (id)initWithDocumentRoot:(id)arg1;
- (BOOL)isPageInPortraitOrientation:(unsigned int)arg1;
- (BOOL)isRenderingAllSheets;
- (unsigned int)numberOfCanvasBasedSheets;
- (id)p_activeSheet;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_boundsRectForFirstPage;
- (id)p_canvasBasedSheets;
- (BOOL)p_isActiveSheetForm;
- (struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; })p_pageCountArray;
- (struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; })p_pageStartArray;
- (id)pageController;
- (unsigned int)pageCount;
- (int)pageIndexFromQuickLookSheet:(id)arg1;
- (BOOL)preparePage:(unsigned int)arg1;
- (double)progressForCurrentPage;
- (id)quickLookSheets;
- (void)setRenderingAllSheets:(BOOL)arg1;
- (void)setSheetIndex:(unsigned int)arg1 andPageIndex:(unsigned int)arg2;
- (void)setup;
- (unsigned int)sheetIndexForPage:(unsigned int)arg1;
- (void)teardown;
- (double)totalProgess;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unscaledClipRect;

@end
