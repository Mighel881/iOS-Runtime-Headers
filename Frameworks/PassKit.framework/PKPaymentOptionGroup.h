/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString;

@interface PKPaymentOptionGroup : NSObject {
    BOOL _editable;
    NSString *_groupDisplayMode;
    NSString *_groupDisplayName;
    NSString *_groupType;
    int _indexForSelectedItem;
    NSArray *_items;
    NSString *_readOnlyDisplayName;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _selectionChangedHandler;

}

@property(readonly) NSString * abTitleDisplayName;
@property(readonly) NSString * addExistingDisplayName;
@property(readonly) NSString * addNewDisplayName;
@property(getter=isEditable) BOOL editable;
@property(retain) NSString * groupDisplayMode;
@property(retain) NSString * groupDisplayName;
@property(copy) NSString * groupType;
@property int indexForSelectedItem;
@property(retain) NSArray * items;
@property(retain) NSString * readOnlyDisplayName;
@property(copy) id selectionChangedHandler;

- (id)abTitleDisplayName;
- (id)addExistingDisplayName;
- (id)addNewDisplayName;
- (void)dealloc;
- (id)groupDisplayMode;
- (id)groupDisplayName;
- (id)groupType;
- (int)indexForSelectedItem;
- (id)init;
- (BOOL)isEditable;
- (id)items;
- (void)prependGroupItem:(id)arg1 promoteAndCoalesceDupes:(BOOL)arg2;
- (void)prependGroupItems:(id)arg1 afterItem:(id)arg2;
- (id)readOnlyDisplayName;
- (void)removeGroupItem:(id)arg1;
- (id)selectionChangedHandler;
- (void)setEditable:(BOOL)arg1;
- (void)setGroupDisplayMode:(id)arg1;
- (void)setGroupDisplayName:(id)arg1;
- (void)setGroupType:(id)arg1;
- (void)setIndexForSelectedItem:(int)arg1;
- (void)setItems:(id)arg1;
- (void)setReadOnlyDisplayName:(id)arg1;
- (void)setSelectionChangedHandler:(id)arg1;

@end
