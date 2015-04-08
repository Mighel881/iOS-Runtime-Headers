/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData, NSMutableArray;

@interface GEODirectionsFeedback : PBCodable <NSCopying> {
    NSData *_directionResponseID;
    struct { double x1; unsigned int x2; BOOL x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } *_stepFeedbacks;
    unsigned int _stepFeedbacksCount;
    unsigned int _stepFeedbacksSpace;
    NSMutableArray *_trafficRerouteFeedbacks;
    NSMutableArray *_traversedRouteIDs;
}

@property(retain) NSData * directionResponseID;
@property(readonly) BOOL hasDirectionResponseID;
@property(readonly) struct { double x1; unsigned int x2; BOOL x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }* stepFeedbacks;
@property(readonly) unsigned int stepFeedbacksCount;
@property(retain) NSMutableArray * trafficRerouteFeedbacks;
@property(retain) NSMutableArray * traversedRouteIDs;

- (void)addStepFeedback:(struct { double x1; unsigned int x2; BOOL x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (void)addTraversedRouteIDs:(id)arg1;
- (void)clearStepFeedbacks;
- (void)clearTrafficRerouteFeedbacks;
- (void)clearTraversedRouteIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionResponseID;
- (BOOL)hasDirectionResponseID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDirectionResponseID:(id)arg1;
- (void)setStepFeedbacks:(struct { double x1; unsigned int x2; BOOL x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned int)arg2;
- (void)setTrafficRerouteFeedbacks:(id)arg1;
- (void)setTraversedRouteIDs:(id)arg1;
- (struct { double x1; unsigned int x2; BOOL x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })stepFeedbackAtIndex:(unsigned int)arg1;
- (struct { double x1; unsigned int x2; BOOL x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)stepFeedbacks;
- (unsigned int)stepFeedbacksCount;
- (id)trafficRerouteFeedbackAtIndex:(unsigned int)arg1;
- (id)trafficRerouteFeedbacks;
- (unsigned int)trafficRerouteFeedbacksCount;
- (id)traversedRouteIDs;
- (id)traversedRouteIDsAtIndex:(unsigned int)arg1;
- (unsigned int)traversedRouteIDsCount;
- (void)writeTo:(id)arg1;

@end
