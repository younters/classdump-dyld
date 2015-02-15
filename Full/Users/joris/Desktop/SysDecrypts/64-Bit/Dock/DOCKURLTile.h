/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Dock/Dock-Structs.h>
#import <Dock/Tile.h>

@class NSURL;

@interface DOCKURLTile : Tile {

	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
-(char)doAction:(unsigned)arg1 fromKeyboard:(char)arg2 ;
-(OpaqueMenuRefRef)createMenu:(/*function pointer*/void*)arg1 options:(int)arg2 ;
-(CFArrayRef)axCopyAttributeNames;
-(id)copyTilePlist;
-(id)copyInstallDictionary:(int)arg1 ;
-(int)axCopyAttributeValue:(CFStringRef)arg1 value:(const void*)arg2 ;
-(id)initWithURL:(id)arg1 label:(id)arg2 GUID:(unsigned)arg3 ;
-(id)initWithPlist:(id)arg1 GUID:(unsigned)arg2 ;
-(void)doCommand:(unsigned)arg1 ;
-(void)render;
-(NSURL *)url;
-(id)typeString;
@end
