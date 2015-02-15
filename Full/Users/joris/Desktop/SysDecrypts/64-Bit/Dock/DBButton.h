/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Dock/Dock-Structs.h>
@class NSString;

@interface DBButton : NSObject {

	unsigned _connectionID;
	unsigned _windowID;
	NSString* _imageName;
	CGSize _size;
	unsigned char _state;
	float _scaleFactor;

}

@property (nonatomic,readonly) unsigned windowID; 
@property (assign,nonatomic) float scaleFactor;                //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) unsigned char state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) CGSize size;                    //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) int windowLevel; 
@property (assign,nonatomic) float alpha; 
-(id)initWithImageName:(id)arg1 andScaleFactor:(float)arg2 usingConnectionID:(unsigned)arg3 ;
-(void)orderAbove:(unsigned)arg1 ;
-(void)_renderWithState:(unsigned char)arg1 ;
-(void)moveTo:(CGPoint)arg1 ;
-(float)scaleFactor;
-(void)setScaleFactor:(float)arg1 ;
-(void)dealloc;
-(void)setState:(unsigned char)arg1 ;
-(unsigned char)state;
-(CGSize)size;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(unsigned)windowID;
-(void)setWindowLevel:(int)arg1 ;
@end
