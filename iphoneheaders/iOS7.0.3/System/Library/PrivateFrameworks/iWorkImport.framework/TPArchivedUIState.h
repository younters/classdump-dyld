/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSPObject.h>

@class TPArchivedLayoutState, TPArchivedViewState;

@interface TPArchivedUIState : TSPObject {

	TPArchivedLayoutState* _layoutState;
	TPArchivedViewState* _viewState;

}

@property (nonatomic,readonly) TPArchivedLayoutState * layoutState;              //@synthesize layoutState=_layoutState - In the implementation block
@property (nonatomic,readonly) TPArchivedViewState * viewState;                  //@synthesize viewState=_viewState - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)viewState;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(id)layoutState;
@end
