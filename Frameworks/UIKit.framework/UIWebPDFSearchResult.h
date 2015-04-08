/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString;

@interface UIWebPDFSearchResult : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } boundingBox;
    unsigned int pageIndex;
    NSArray *rects;
    NSArray *rotationAngles;
    NSString *string;
    NSArray *strings;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } boundingBox;
@property unsigned int pageIndex;
@property(retain) NSArray * rects;
@property(retain) NSArray * rotationAngles;
@property(retain) NSString * string;
@property(retain) NSArray * strings;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (void)dealloc;
- (unsigned int)pageIndex;
- (id)rects;
- (id)rotationAngles;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPageIndex:(unsigned int)arg1;
- (void)setRects:(id)arg1;
- (void)setRotationAngles:(id)arg1;
- (void)setString:(id)arg1;
- (void)setStrings:(id)arg1;
- (id)string;
- (id)strings;

@end
