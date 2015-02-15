/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/NSTableViewDataSource.h>

@class NSMutableArray, CriterionView, NSTextField, NSScrollView, NSPopUpButton, NSButton, NSPanel, NSTableView, NSString, NSWindow;

@interface CriteriaUIHelper : NSObject <NSTableViewDataSource> {

	NSMutableArray* _criteriaViews;
	char _isEditingHeader;
	char _criteriaWillBeUsedForMailboxes;
	CriterionView* _criterionView;
	NSTextField* _nameField;
	NSScrollView* _criteriaContainer;
	NSPopUpButton* _allCriteriaMustBeMetPopUp;
	NSButton* _includeTrashCheckbox;
	NSButton* _includeSentCheckbox;
	NSTextField* _performActionLabel;
	NSScrollView* _actionContainer;
	NSPanel* _headerListPanel;
	NSTableView* _headerListTable;
	NSButton* _addHeaderButton;
	NSString* _previousTitle;
	NSWindow* _parentWindow;
	id _objectWithCriteria;

}

@property (assign,nonatomic) char criteriaWillBeUsedForMailboxes;                    //@synthesize criteriaWillBeUsedForMailboxes=_criteriaWillBeUsedForMailboxes - In the implementation block
@property (nonatomic,retain) NSString * previousTitle;                               //@synthesize previousTitle=_previousTitle - In the implementation block
@property (assign,nonatomic,__weak) NSWindow * parentWindow;                         //@synthesize parentWindow=_parentWindow - In the implementation block
@property (nonatomic,retain) CriterionView * criterionView;                          //@synthesize criterionView=_criterionView - In the implementation block
@property (nonatomic,retain) NSTextField * nameField;                                //@synthesize nameField=_nameField - In the implementation block
@property (nonatomic,retain) NSScrollView * criteriaContainer;                       //@synthesize criteriaContainer=_criteriaContainer - In the implementation block
@property (nonatomic,retain) NSPopUpButton * allCriteriaMustBeMetPopUp;              //@synthesize allCriteriaMustBeMetPopUp=_allCriteriaMustBeMetPopUp - In the implementation block
@property (nonatomic,retain) NSButton * includeTrashCheckbox;                        //@synthesize includeTrashCheckbox=_includeTrashCheckbox - In the implementation block
@property (nonatomic,retain) NSButton * includeSentCheckbox;                         //@synthesize includeSentCheckbox=_includeSentCheckbox - In the implementation block
@property (nonatomic,retain) NSTextField * performActionLabel;                       //@synthesize performActionLabel=_performActionLabel - In the implementation block
@property (nonatomic,retain) NSScrollView * actionContainer;                         //@synthesize actionContainer=_actionContainer - In the implementation block
@property (nonatomic,retain) NSPanel * headerListPanel;                              //@synthesize headerListPanel=_headerListPanel - In the implementation block
@property (nonatomic,retain) NSTableView * headerListTable;                          //@synthesize headerListTable=_headerListTable - In the implementation block
@property (nonatomic,retain) NSButton * addHeaderButton;                             //@synthesize addHeaderButton=_addHeaderButton - In the implementation block
@property (assign,nonatomic) char isEditingHeader;                                   //@synthesize isEditingHeader=_isEditingHeader - In the implementation block
@property (assign,nonatomic,__weak) id objectWithCriteria;                           //@synthesize objectWithCriteria=_objectWithCriteria - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)packageUserCriteria:(id)arg1 withNoJunk:(char)arg2 noTrash:(char)arg3 noSent:(char)arg4 allUserCriteriaMustBeSatisfied:(char)arg5 ;
+(void)unpackUserCriteria:(id*)arg1 noJunkCriterion:(id*)arg2 noTrashCriterion:(id*)arg3 noSentCriterion:(id*)arg4 allCriteriaMustBeSatisfield:(char*)arg5 fromCriteria:(id)arg6 ;
+(id)headerList;
-(NSTableView *)headerListTable;
-(void)_headerTableBeganEditing:(id)arg1 ;
-(void)_headerTableEndedEditing:(id)arg1 ;
-(NSScrollView *)criteriaContainer;
-(NSTextField *)nameField;
-(char)criteriaWillBeUsedForMailboxes;
-(NSButton *)includeTrashCheckbox;
-(NSButton *)includeSentCheckbox;
-(NSPopUpButton *)allCriteriaMustBeMetPopUp;
-(void)setObjectWithCriteria:(id)arg1 ;
-(void)tileViews:(id)arg1 inContainer:(id)arg2 withChangeAtRow:(unsigned long long)arg3 removeIsEnabled:(char)arg4 ;
-(id)_createNewCriterionViewForSender:(id)arg1 ;
-(CriterionView *)criterionView;
-(id)objectWithCriteria;
-(void)setCriterionView:(CriterionView *)arg1 ;
-(void)connectNextKeyViewChain;
-(void)removeView:(id)arg1 fromViews:(id)arg2 inContainer:(id)arg3 ;
-(void)_updateHeaderListUI;
-(NSPanel *)headerListPanel;
-(void)_configureAllCriterionMenus;
-(void)_endEditingHeader;
-(NSButton *)addHeaderButton;
-(char)isEditingHeader;
-(void)setIsEditingHeader:(char)arg1 ;
-(void)_removeInvalidHeaders;
-(NSScrollView *)actionContainer;
-(NSTextField *)performActionLabel;
-(id)newCriterion;
-(void)putCriteriaFromUIIntoObject:(id)arg1 ;
-(void)sentMessagesMailboxCriterionAdded;
-(void)trashMailboxCriterionAdded;
-(void)configureCriteriaForObject:(id)arg1 ;
-(void)addCriterion:(id)arg1 ;
-(void)removeCriterion:(id)arg1 ;
-(void)userHasSelectedSenderInContacts:(char*)arg1 senderInPreviousRecipients:(char*)arg2 ;
-(void)editHeaderList;
-(void)resetHeaderListForObjectsWithCriteria:(id)arg1 ;
-(void)headerListOkClicked:(id)arg1 ;
-(void)headerListCancelClicked:(id)arg1 ;
-(void)addHeaderClicked:(id)arg1 ;
-(void)setNameField:(NSTextField *)arg1 ;
-(void)setCriteriaContainer:(NSScrollView *)arg1 ;
-(void)setAllCriteriaMustBeMetPopUp:(NSPopUpButton *)arg1 ;
-(void)setIncludeTrashCheckbox:(NSButton *)arg1 ;
-(void)setIncludeSentCheckbox:(NSButton *)arg1 ;
-(void)setPerformActionLabel:(NSTextField *)arg1 ;
-(void)setActionContainer:(NSScrollView *)arg1 ;
-(void)setHeaderListPanel:(NSPanel *)arg1 ;
-(void)setHeaderListTable:(NSTableView *)arg1 ;
-(void)setAddHeaderButton:(NSButton *)arg1 ;
-(NSString *)previousTitle;
-(void)setPreviousTitle:(NSString *)arg1 ;
-(void)setCriteriaWillBeUsedForMailboxes:(char)arg1 ;
-(void)dealloc;
-(NSWindow *)parentWindow;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(void)awakeFromNib;
-(void)setParentWindow:(NSWindow *)arg1 ;
@end
