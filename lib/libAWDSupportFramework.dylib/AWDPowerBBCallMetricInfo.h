/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBBCallMetricInfo : PBCodable <NSCopying> {
    unsigned int _callDuration;
    struct { 
        unsigned int callDuration : 1; 
        unsigned int powerMicroWatt : 1; 
        unsigned int threshold : 1; 
    } _has;
    unsigned int _powerMicroWatt;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _rxTxDurations;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _sleepStateDurations;
    unsigned int _threshold;
}

@property unsigned int callDuration;
@property BOOL hasCallDuration;
@property BOOL hasPowerMicroWatt;
@property BOOL hasThreshold;
@property unsigned int powerMicroWatt;
@property(readonly) unsigned int* rxTxDurations;
@property(readonly) unsigned int rxTxDurationsCount;
@property(readonly) unsigned int* sleepStateDurations;
@property(readonly) unsigned int sleepStateDurationsCount;
@property unsigned int threshold;

- (void)addRxTxDurations:(unsigned int)arg1;
- (void)addSleepStateDurations:(unsigned int)arg1;
- (unsigned int)callDuration;
- (void)clearRxTxDurations;
- (void)clearSleepStateDurations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCallDuration;
- (BOOL)hasPowerMicroWatt;
- (BOOL)hasThreshold;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)powerMicroWatt;
- (BOOL)readFrom:(id)arg1;
- (unsigned int*)rxTxDurations;
- (unsigned int)rxTxDurationsAtIndex:(unsigned int)arg1;
- (unsigned int)rxTxDurationsCount;
- (void)setCallDuration:(unsigned int)arg1;
- (void)setHasCallDuration:(BOOL)arg1;
- (void)setHasPowerMicroWatt:(BOOL)arg1;
- (void)setHasThreshold:(BOOL)arg1;
- (void)setPowerMicroWatt:(unsigned int)arg1;
- (void)setRxTxDurations:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setSleepStateDurations:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setThreshold:(unsigned int)arg1;
- (unsigned int*)sleepStateDurations;
- (unsigned int)sleepStateDurationsAtIndex:(unsigned int)arg1;
- (unsigned int)sleepStateDurationsCount;
- (unsigned int)threshold;
- (void)writeTo:(id)arg1;

@end
