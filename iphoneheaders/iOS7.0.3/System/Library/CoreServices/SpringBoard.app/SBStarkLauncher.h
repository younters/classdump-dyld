/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:42:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SBStarkLauncher <NSObject>
@property (assign,nonatomic) float height; 
@property (nonatomic,readonly) SBStarkIconListModel * iconList; 
@property (nonatomic,readonly) BOOL hidesAutomatically; 
@property (nonatomic,readonly) BOOL obscuresControlBar; 
@property (nonatomic,retain) SBStarkFakeIconOperationController * fakeIconOperationController; 
@property (assign,nonatomic) <SBStarkAutoHideControlBarDelegate> * autoHideDelegate; 
@required
+(float)desiredHeightForBounds:(CGRect)arg1;
-(void)setAutoHideDelegate:(id)arg1;
-(void)setFakeIconOperationController:(id)arg1;
-(BOOL)obscuresControlBar;
-(BOOL)hidesAutomatically;
-(id)fakeIconOperationController;
-(id)iconList;
-(id)autoHideDelegate;
-(float)height;
-(void)setHeight:(float)arg1;
@end
