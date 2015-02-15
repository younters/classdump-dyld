/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/loginwindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSWindow, NSProgressIndicator;

@interface DTFUSDisplay : NSObject {

	unsigned _display;
	NSWindow* _window;
	NSProgressIndicator* _indicator;

}

@property (readonly) NSWindow * window;                            //@synthesize window=_window - In the implementation block
@property (readonly) NSProgressIndicator * indicator;              //@synthesize indicator=_indicator - In the implementation block
-(void)abortTransition;
-(void)appear;
-(void)transition;
-(NSProgressIndicator *)indicator;
-(void)dealloc;
-(NSWindow *)window;
-(id)initWithScreen:(id)arg1 ;
@end
