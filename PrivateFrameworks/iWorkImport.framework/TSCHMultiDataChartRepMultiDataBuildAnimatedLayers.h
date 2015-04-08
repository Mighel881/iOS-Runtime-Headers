/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer, NSArray;

@interface TSCHMultiDataChartRepMultiDataBuildAnimatedLayers : NSObject {
    CALayer *backgroundLayer;
    CALayer *dataSetNameLayer;
    NSArray *elementLayers;
    CALayer *legendLayer;
    NSArray *referenceLineLayers;
}

@property(retain) CALayer * backgroundLayer;
@property(retain) CALayer * dataSetNameLayer;
@property(copy) NSArray * elementLayers;
@property(retain) CALayer * legendLayer;
@property(copy) NSArray * referenceLineLayers;

+ (id)animatedLayers;

- (id)allBackgroundFadingLayers;
- (id)backgroundLayer;
- (id)dataSetNameLayer;
- (void)dealloc;
- (id)elementFadingLayers;
- (id)elementLayers;
- (id)layersAlreadyHaveProperTransforms;
- (id)layersRequiringGeometryTransformsBackgroundOnly:(BOOL)arg1;
- (id)legendLayer;
- (id)referenceLineLayers;
- (void)setBackgroundLayer:(id)arg1;
- (void)setDataSetNameLayer:(id)arg1;
- (void)setElementLayers:(id)arg1;
- (void)setLegendLayer:(id)arg1;
- (void)setReferenceLineLayers:(id)arg1;

@end
