/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:43:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Notes.app/Contents/MacOS/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/NotesWindowController.h>

@class NSView, MainSplitView, NSSearchField, FolderListTreeController, NoteListArrayController, NSIndexSet, NSSegmentedControl, NSTimer, NSUserActivity, MainWindow;

@interface MainWindowController : NotesWindowController {

	NSView* _contentView;
	MainSplitView* _mainSplitView;
	NSSearchField* _searchField;
	FolderListTreeController* _folderListTreeController;
	NoteListArrayController* _noteListArrayController;
	NSIndexSet* _folderSelectionIndexSet;
	NSIndexSet* _noteSelectionIndexSet;
	NSSegmentedControl* _addNoteButton;
	id _currentSelection;
	NSTimer* _userActivityTimeoutTimer;
	NSUserActivity* _activityToResume;

}

@property (assign,nonatomic,__weak) NSView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) MainSplitView * mainSplitView;                                    //@synthesize mainSplitView=_mainSplitView - In the implementation block
@property (assign,nonatomic,__weak) NSSearchField * searchField;                                      //@synthesize searchField=_searchField - In the implementation block
@property (assign,nonatomic,__weak) NSSegmentedControl * addNoteButton;                               //@synthesize addNoteButton=_addNoteButton - In the implementation block
@property (assign,nonatomic,__weak) FolderListTreeController * folderListTreeController;              //@synthesize folderListTreeController=_folderListTreeController - In the implementation block
@property (assign,nonatomic,__weak) NoteListArrayController * noteListArrayController;                //@synthesize noteListArrayController=_noteListArrayController - In the implementation block
@property (nonatomic,retain) MainWindow * window; 
@property (nonatomic,retain) NSIndexSet * folderSelectionIndexSet;                                    //@synthesize folderSelectionIndexSet=_folderSelectionIndexSet - In the implementation block
@property (nonatomic,retain) NSIndexSet * noteSelectionIndexSet;                                      //@synthesize noteSelectionIndexSet=_noteSelectionIndexSet - In the implementation block
@property (nonatomic,retain) id currentSelection;                                                     //@synthesize currentSelection=_currentSelection - In the implementation block
@property (nonatomic,retain) NSTimer * userActivityTimeoutTimer;                                      //@synthesize userActivityTimeoutTimer=_userActivityTimeoutTimer - In the implementation block
@property (nonatomic,retain) NSUserActivity * activityToResume;                                       //@synthesize activityToResume=_activityToResume - In the implementation block
+(id)windowIdentifier;
+(id)keyPathsForValuesAffectingUserStyleSheetURL;
-(FolderListTreeController *)folderListTreeController;
-(MainSplitView *)mainSplitView;
-(void)_objectsChanged:(id)arg1 ;
-(void)setMainSplitView:(MainSplitView *)arg1 ;
-(NoteListArrayController *)noteListArrayController;
-(NSSegmentedControl *)addNoteButton;
-(void)_stopUserActivitySearch;
-(void)sortByTagOfSender:(id)arg1 ;
-(void)newNote:(id)arg1 ;
-(void)deleteNote:(id)arg1 ;
-(void)toggleFoldersList:(id)arg1 ;
-(void)showSelectedNotesInSingleWindows:(id)arg1 ;
-(void)selectNoteForActivity:(id)arg1 ;
-(void)_selectNoteInWindow:(id)arg1 ;
-(void)setActivityToResume:(NSUserActivity *)arg1 ;
-(void)setUserActivityTimeoutTimer:(NSTimer *)arg1 ;
-(NSUserActivity *)activityToResume;
-(NSTimer *)userActivityTimeoutTimer;
-(id)userStyleSheetURL;
-(double)padViewTopMargin;
-(void)beginNoteListSearch:(id)arg1 ;
-(void)setFolderListTreeController:(FolderListTreeController *)arg1 ;
-(void)setNoteListArrayController:(NoteListArrayController *)arg1 ;
-(NSIndexSet *)folderSelectionIndexSet;
-(void)setFolderSelectionIndexSet:(NSIndexSet *)arg1 ;
-(NSIndexSet *)noteSelectionIndexSet;
-(void)setNoteSelectionIndexSet:(NSIndexSet *)arg1 ;
-(void)setAddNoteButton:(NSSegmentedControl *)arg1 ;
-(NSSearchField *)searchField;
-(void)setSearchField:(NSSearchField *)arg1 ;
-(void)deleteFolder:(id)arg1 ;
-(void)_timeout:(id)arg1 ;
-(id)currentSelection;
-(void)dealloc;
-(MainWindow *)window;
-(NSView *)contentView;
-(void)setContentView:(NSView *)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)awakeFromNib;
-(void)restoreUserActivityState:(id)arg1 ;
-(void)setWindow:(MainWindow *)arg1 ;
-(id)windowNibName;
-(void)window:(id)arg1 willEncodeRestorableState:(id)arg2 ;
-(void)window:(id)arg1 didDecodeRestorableState:(id)arg2 ;
-(void)newFolder:(id)arg1 ;
-(void)setCurrentSelection:(id)arg1 ;
@end
