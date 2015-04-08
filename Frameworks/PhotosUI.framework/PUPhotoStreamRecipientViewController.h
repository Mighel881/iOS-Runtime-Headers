/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class ABPeoplePickerNavigationController, IDSBatchIDQueryController, MFComposeRecipientView, MFContactsSearchManager, MFContactsSearchResultsModel, NSArray, NSMutableSet, NSNumber, NSString, UIScrollView, UITableView;

@interface PUPhotoStreamRecipientViewController : UIViewController <ABPeoplePickerNavigationControllerDelegate, IDSBatchIDQueryControllerDelegate, MFComposeRecipientViewDelegate, MFContactsSearchConsumer, UIPopoverPresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    float _bottomTableOffset;
    NSNumber *_currentSearchTaskID;
    id _delegate;
    IDSBatchIDQueryController *_idsBatchIDQueryController;
    float _lastHeight;
    ABPeoplePickerNavigationController *_peoplePickerPresentedController;
    NSArray *_properties;
    UIScrollView *_recipientContainerView;
    MFComposeRecipientView *_recipientView;
    struct CGSize { 
        float width; 
        float height; 
    } _recipientViewSize;
    MFContactsSearchManager *_searchManager;
    NSArray *_searchResults;
    MFContactsSearchResultsModel *_searchResultsModel;
    UITableView *_searchResultsTable;
    BOOL _showingPeoplePicker;
    NSMutableSet *_validPhoneNumbers;
    BOOL _wasFirstResponder;
}

@property float bottomTableOffset;
@property(copy,readonly) NSString * debugDescription;
@property id delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSArray * recipients;
@property(readonly) Class superclass;

+ (void)recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3;

- (void).cxx_destruct;
- (void*)_addressBook;
- (void)_dismissPeoplePicker;
- (void)_searchForRecipientWithText:(id)arg1;
- (id)_searchManager;
- (id)_selectedNormalizedPhoneForRecipient:(id)arg1;
- (void)_setSearchResults:(id)arg1;
- (void)beganNetworkActivity;
- (float)bottomTableOffset;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 requestDeleteRecipientAtIndex:(int)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (BOOL)composeRecipientViewIsShowingPeoplePicker:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned int)arg2 taskID:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)endedNetworkActivity;
- (void)finishedSearchingForType:(unsigned int)arg1;
- (void)finishedTaskWithID:(id)arg1;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)makeRecipientViewFirstResponder;
- (void)makeRecipientViewResignFirstResponder;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)recipients;
- (void)setBottomTableOffset:(float)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldShowCardForPerson:(void*)arg1 peoplePicker:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
