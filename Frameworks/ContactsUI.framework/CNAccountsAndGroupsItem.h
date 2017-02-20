/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAccountsAndGroupsItem : NSObject {
    BOOL  _bypassIfUnique;
    NSArray * _childItems;
    int  _containerType;
    NSString * _identifier;
    NSString * _name;
    id /* block */  _nameProvider;
    CNAccountsAndGroupsItem * _parentItem;
    BOOL  _selected;
    BOOL  _soloSelect;
    int  _type;
}

@property (nonatomic) BOOL bypassIfUnique;
@property (nonatomic, retain) NSArray *childItems;
@property (nonatomic) int containerType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly, copy) id /* block */ nameProvider;
@property (nonatomic) CNAccountsAndGroupsItem *parentItem;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (nonatomic) BOOL soloSelect;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (void)_setSelected:(BOOL)arg1;
- (id)arrayForDisplay:(BOOL)arg1;
- (BOOL)bypassIfUnique;
- (id)childItems;
- (int)containerType;
- (id)identifier;
- (id)initWithType:(int)arg1 nameProvider:(id /* block */)arg2;
- (BOOL)isSelected;
- (int)localizedCompare:(id)arg1;
- (id)name;
- (id /* block */)nameProvider;
- (id)parentItem;
- (void)setBypassIfUnique:(BOOL)arg1;
- (void)setChildItems:(id)arg1;
- (void)setContainerType:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentItem:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSoloSelect:(BOOL)arg1;
- (BOOL)soloSelect;
- (int)type;

@end
