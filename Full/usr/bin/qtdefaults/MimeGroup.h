/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/qtdefaults
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface MimeGroup : NSObject {

	int check;
	NSString* groupName;
	NSString* groupDescription;
	NSString* displayStr;
	NSMutableArray* mimeObjects;
	unsigned long groupID;
	unsigned long flags;
	unsigned selectCount;

}
-(id)init;
-(int)check;
-(void)setCheck:(int)arg1 ;
-(id)groupName;
-(void)setGroupName:(id)arg1 ;
-(id)groupDescription;
-(void)setGroupDescription:(id)arg1 ;
-(id)displayStr;
-(void)setDisplayStr:(id)arg1 ;
-(id)mimeObjects;
-(void)addMimeType:(id)arg1 ;
-(unsigned long)groupID;
-(void)setGroupID:(unsigned long)arg1 ;
-(unsigned long)flags;
-(void)setFlags:(unsigned long)arg1 ;
@end
