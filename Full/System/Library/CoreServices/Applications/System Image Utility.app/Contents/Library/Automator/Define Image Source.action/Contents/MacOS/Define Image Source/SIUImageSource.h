/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/System Image Utility.app/Contents/Library/Automator/Define Image Source.action/Contents/MacOS/Define Image Source
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class AMPathPopUpButton, NSMutableArray, SIUSourcesList, NSOperationQueue, NSLock, NSArray;

@interface SIUImageSource : AMBundleAction {

	AMPathPopUpButton* sourcePopupButton;
	NSMutableArray* _esdItems;
	NSMutableArray* _volumeItems;
	SIUSourcesList* _sourcesList;
	NSOperationQueue* _operationQueue;
	NSLock* _updateLock;

}

@property (nonatomic,retain) NSLock * updateLock;                            //@synthesize updateLock=_updateLock - In the implementation block
@property (nonatomic,retain) NSArray * volumeItems;                          //@synthesize volumeItems=_volumeItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * esdItems;                      //@synthesize esdItems=_esdItems - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) SIUSourcesList * sourcesList;                   //@synthesize sourcesList=_sourcesList - In the implementation block
-(void)setVolumeItems:(NSArray *)arg1 ;
-(void)setEsdItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)esdItems;
-(NSArray *)volumeItems;
-(void)sourcesChanged:(id)arg1 ;
-(void)setUpdateLock:(NSLock *)arg1 ;
-(void)setSourcesList:(SIUSourcesList *)arg1 ;
-(SIUSourcesList *)sourcesList;
-(NSLock *)updateLock;
-(void)chooseDiskImage:(id)arg1 ;
-(void)updateSourcesMenu:(id)arg1 ;
-(void)updateSourcePopupButton:(id)arg1 ;
-(void)changeSource:(id)arg1 ;
-(id)getActionDetail;
-(id)runWithInput:(id)arg1 error:(id*)arg2 ;
-(void)opened;
-(void)closed;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
@end
