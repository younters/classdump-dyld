/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMPlatformCore.framework/Versions/A/IMPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSStackView.h>

@class NSButton, NSData;

@interface IMButtonStackView : NSStackView {

	NSButton* _prototype;
	long long _selectedTag;
	NSData* _prototypeData;

}

@property (__weak) id<IMButtonStackViewDelegate> delegate; 
@property (assign,nonatomic,__weak) NSButton * prototype;               //@synthesize prototype=_prototype - In the implementation block
@property (assign,nonatomic) long long selectedTag;                     //@synthesize selectedTag=_selectedTag - In the implementation block
@property (nonatomic,retain) NSData * prototypeData;                    //@synthesize prototypeData=_prototypeData - In the implementation block
+(id)unselectedColor;
+(id)selectedColor;
-(NSData *)prototypeData;
-(id)buttonWithTag:(long long)arg1 ;
-(void)setPrototypeData:(NSData *)arg1 ;
-(void)setSelectedTag:(long long)arg1 ;
-(void)p_delegateDidDeselectButtonWithTag:(long long)arg1 ;
-(void)p_delegateDidSelectButtonWithTag:(long long)arg1 ;
-(void)addButtonWithTag:(long long)arg1 title:(id)arg2 ;
-(void)removeButtonWithTag:(long long)arg1 ;
-(void)buttonClicked:(id)arg1 ;
-(id)init;
-(void)setPrototype:(NSButton *)arg1 ;
-(NSButton *)prototype;
-(long long)selectedTag;
@end
