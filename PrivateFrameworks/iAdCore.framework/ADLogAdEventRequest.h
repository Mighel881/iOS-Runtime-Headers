/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADLogMetaData, NSMutableArray;

@interface ADLogAdEventRequest : PBRequest {
    NSMutableArray *_events;
    ADLogMetaData *_metaData;
}

@property(retain) NSMutableArray * events;
@property(readonly) BOOL hasMetaData;
@property(retain) ADLogMetaData * metaData;

+ (void)initialize;

- (void)addEvent:(id)arg1;
- (void)clearEvents;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventAtIndex:(unsigned int)arg1;
- (id)events;
- (unsigned int)eventsCount;
- (BOOL)hasMetaData;
- (id)metaData;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setEvents:(id)arg1;
- (void)setMetaData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
