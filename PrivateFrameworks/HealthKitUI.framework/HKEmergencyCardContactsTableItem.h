/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class NSMutableArray, NSString, UITableViewCell, _HKEmergencyContact;

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <ABPeoplePickerNavigationControllerDelegate, HKMedicalIDEditorCellEditDelegate, _EmergencyContactRelationshipPickerDelegate> {
    void *_addressBook;
    NSMutableArray *_cells;
    UITableViewCell *_lastDequeuedAddContactCell;
    _HKEmergencyContact *_selectedContact;
    BOOL _selectedContactIsBeingAdded;
}

@property void* addressBook;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addEmergencyContactToData:(id)arg1;
- (void)_configureAddContactCellLayoutForRowIndex:(int)arg1;
- (id)_dequeueAndConfigureContactEditCellForIndex:(int)arg1 inTableView:(id)arg2;
- (id)_dequeueAndConfigureContactViewCellForIndex:(int)arg1;
- (void)_didSelectPerson:(void*)arg1 identifier:(int)arg2;
- (void)_presentEmergencyContactPicker;
- (void*)addressBook;
- (BOOL)canEditRowAtIndex:(int)arg1;
- (int)commitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (int)editingStyleForRowAtIndex:(int)arg1;
- (void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2;
- (void)emergencyContactRelationshipPickerDidCancel:(id)arg1;
- (BOOL)hasPresentableData;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)medicalIDEditorCellDidTapLabel:(id)arg1;
- (int)numberOfRows;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)refreshFromData;
- (void)setAddressBook:(void*)arg1;
- (BOOL)shouldHighlightRowAtIndex:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)title;

@end
