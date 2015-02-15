/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/Mail-Structs.h>
#import <Mail/Assistant.h>

@class NSMutableArray, NSView, NSTabView, NSMatrix, NSTextField, NSProgressIndicator, NSTableView, NSArray, NSDictionary, EmailImporter;

@interface ImportAssistant : Assistant {

	NSMutableArray* _importers;
	NSMutableArray* _startingImporters;
	double _currentTime;
	double _referenceTime;
	int _currentTab;
	NSView* _topView;
	NSTabView* _tabView;
	NSMatrix* _importClients;
	NSTextField* _explanatoryTextInImportClientTab;
	NSProgressIndicator* _progressWheelInImportClientTab;
	NSTextField* _statusLineInImportClientTab;
	NSMatrix* _importTypes;
	NSTextField* _explanatoryTextField;
	NSProgressIndicator* _progressWheel;
	NSTextField* _statusLineField;
	NSTableView* _tableView;
	NSProgressIndicator* _progressBar;
	NSTextField* _textFieldAboveField;
	NSTextField* _textFieldBelowField;
	NSTextField* _importFinishedField;
	id _activityToken;
	NSArray* _clients;
	NSDictionary* _client;
	EmailImporter* _importer;

}

@property (nonatomic,retain) NSView * topView;                                                         //@synthesize topView=_topView - In the implementation block
@property (assign,nonatomic,__weak) NSTabView * tabView;                                               //@synthesize tabView=_tabView - In the implementation block
@property (assign,nonatomic,__weak) NSMatrix * importClients;                                          //@synthesize importClients=_importClients - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * explanatoryTextInImportClientTab;                    //@synthesize explanatoryTextInImportClientTab=_explanatoryTextInImportClientTab - In the implementation block
@property (assign,nonatomic,__weak) NSProgressIndicator * progressWheelInImportClientTab;              //@synthesize progressWheelInImportClientTab=_progressWheelInImportClientTab - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * statusLineInImportClientTab;                         //@synthesize statusLineInImportClientTab=_statusLineInImportClientTab - In the implementation block
@property (assign,nonatomic,__weak) NSMatrix * importTypes;                                            //@synthesize importTypes=_importTypes - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * explanatoryTextField;                                //@synthesize explanatoryTextField=_explanatoryTextField - In the implementation block
@property (assign,nonatomic,__weak) NSProgressIndicator * progressWheel;                               //@synthesize progressWheel=_progressWheel - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * statusLineField;                                     //@synthesize statusLineField=_statusLineField - In the implementation block
@property (assign,nonatomic,__weak) NSTableView * tableView;                                           //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) NSProgressIndicator * progressBar;                                 //@synthesize progressBar=_progressBar - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * textFieldAboveField;                                 //@synthesize textFieldAboveField=_textFieldAboveField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * textFieldBelowField;                                 //@synthesize textFieldBelowField=_textFieldBelowField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * importFinishedField;                                 //@synthesize importFinishedField=_importFinishedField - In the implementation block
@property (nonatomic,retain) id activityToken;                                                         //@synthesize activityToken=_activityToken - In the implementation block
@property (nonatomic,readonly) NSArray * clients;                                                      //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSDictionary * client;                                                    //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) int currentTab;                                                           //@synthesize currentTab=_currentTab - In the implementation block
@property (nonatomic,retain) EmailImporter * importer;                                                 //@synthesize importer=_importer - In the implementation block
-(NSView *)topView;
-(void)setTopView:(NSView *)arg1 ;
-(id)initWithAssistentManager:(id)arg1 ;
-(void)goBackward;
-(void)setTextFieldAbove:(id)arg1 ;
-(void)importFinished;
-(void)setTextFieldBelow:(id)arg1 ;
-(void)askForMailboxLocation;
-(void)setStatusLine:(id)arg1 ;
-(void)updateProgressIndicatorByValue:(double)arg1 ;
-(NSMatrix *)importClients;
-(NSTextField *)explanatoryTextInImportClientTab;
-(NSProgressIndicator *)progressWheelInImportClientTab;
-(NSTextField *)statusLineInImportClientTab;
-(void)moveToTab:(int)arg1 ;
-(void)presentAlertSheetWithString:(id)arg1 ;
-(void)_endUserInitiatedActivity;
-(NSMatrix *)importTypes;
-(void)createNewImporter;
-(void)setExplanatoryText:(id)arg1 ;
-(void)setImporter:(EmailImporter *)arg1 ;
-(void)clearStatusLine;
-(void)_beginUserInitiatedActivity;
-(void)runImporter;
-(void)initializeProgressIndicator;
-(NSProgressIndicator *)progressWheel;
-(void)importClientSelected:(id)arg1 ;
-(NSTextField *)importFinishedField;
-(void)askForMailboxLocationAllowedFileTypes:(id)arg1 allowsMultipleSelection:(char)arg2 ;
-(NSTextField *)statusLineField;
-(char)shouldUpdateTextFields;
-(NSTextField *)textFieldAboveField;
-(void)updateTextField:(id)arg1 withValue:(id)arg2 ;
-(NSTextField *)textFieldBelowField;
-(NSTextField *)explanatoryTextField;
-(void)_setProgressStartOnItem:(id)arg1 ;
-(void)_updateProgressIndicatorToValue:(id)arg1 ;
-(void)_updateProgressIndicatorByValue:(id)arg1 ;
-(void)reloadTableView;
-(void)updateProgressIndicatorWithFraction:(double)arg1 ofItem:(id)arg2 ;
-(void)updateProgressIndicatorWithItem:(id)arg1 ;
-(void)setImportClients:(NSMatrix *)arg1 ;
-(void)setExplanatoryTextInImportClientTab:(NSTextField *)arg1 ;
-(void)setProgressWheelInImportClientTab:(NSProgressIndicator *)arg1 ;
-(void)setStatusLineInImportClientTab:(NSTextField *)arg1 ;
-(void)setImportTypes:(NSMatrix *)arg1 ;
-(void)setExplanatoryTextField:(NSTextField *)arg1 ;
-(void)setProgressWheel:(NSProgressIndicator *)arg1 ;
-(void)setStatusLineField:(NSTextField *)arg1 ;
-(void)setTextFieldAboveField:(NSTextField *)arg1 ;
-(void)setTextFieldBelowField:(NSTextField *)arg1 ;
-(void)setImportFinishedField:(NSTextField *)arg1 ;
-(EmailImporter *)importer;
-(NSProgressIndicator *)progressBar;
-(void)setProgressBar:(NSProgressIndicator *)arg1 ;
-(void)setActivityToken:(id)arg1 ;
-(id)activityToken;
-(int)currentTab;
-(void)setCurrentTab:(int)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(NSTableView *)tableView;
-(id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(CGRect*)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(CGPoint)arg6 ;
-(void)tableView:(id)arg1 didClickTableColumn:(id)arg2 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(NSDictionary *)client;
-(void)setClient:(NSDictionary *)arg1 ;
-(void)goForward;
-(void)setTableView:(NSTableView *)arg1 ;
-(id)windowTitle;
-(NSTabView *)tabView;
-(void)setTabView:(NSTabView *)arg1 ;
-(char)shouldStop;
-(NSArray *)clients;
@end
