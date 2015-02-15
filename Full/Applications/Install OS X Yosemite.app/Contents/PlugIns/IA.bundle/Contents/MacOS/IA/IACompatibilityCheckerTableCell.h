/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:18:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Install OS X Yosemite.app/Contents/PlugIns/IA.bundle/Contents/MacOS/IA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IA/IA-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSImage, NSString, NSURL;

@interface IACompatibilityCheckerTableCell : NSTextFieldCell {

	NSImage* _appIcon;
	NSString* _appName;
	NSString* _appInfo;
	NSURL* _appURL;

}

@property (retain) NSImage * appIcon;               //@synthesize appIcon=_appIcon - In the implementation block
@property (retain) NSString * appName;              //@synthesize appName=_appName - In the implementation block
@property (retain) NSString * appInfo;              //@synthesize appInfo=_appInfo - In the implementation block
@property (retain) NSURL * appURL;                  //@synthesize appURL=_appURL - In the implementation block
+(double)cellHeight;
-(id)attributedTitleValue;
-(void)setAppURL:(NSURL *)arg1 ;
-(void)setAppInfo:(NSString *)arg1 ;
-(NSURL *)appURL;
-(NSString *)appInfo;
-(id)titleAttributes;
-(NSImage *)appIcon;
-(void)setAppIcon:(NSImage *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)imageRectForBounds:(CGRect)arg1 ;
-(NSString *)appName;
@end
