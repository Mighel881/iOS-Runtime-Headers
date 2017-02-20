/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactHeaderEditView : CNContactHeaderView <CNPropertyGroupItemDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _editingGroups;
    UITableView * _editingTable;
    <CNPropertyCellDelegate> * _namePropertyDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *editingGroups;
@property (readonly) unsigned int hash;
@property (nonatomic) <CNPropertyCellDelegate> *namePropertyDelegate;
@property (readonly) Class superclass;

+ (id)contactHeaderViewWithContact:(id)arg1 editingGroups:(id)arg2;

- (void).cxx_destruct;
- (id)_phoneticNameForValue:(id)arg1 property:(id)arg2;
- (BOOL)becomeFirstResponder;
- (id)editingGroups;
- (BOOL)hasPhoto;
- (id)initWithContact:(id)arg1 editingGroups:(id)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)namePropertyDelegate;
- (BOOL)photoIsModified;
- (void)propertyItem:(id)arg1 willChangeValue:(id)arg2;
- (void)reloadDataPreservingChanges:(BOOL)arg1;
- (id)selectEditingGroupAtIndex:(unsigned int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setEditingGroups:(id)arg1;
- (void)setEditingGroups:(id)arg1 withUpdate:(BOOL)arg2;
- (void)setNamePropertyDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateConstraints;
- (void)updateFontSizes;

@end
