/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:01:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Applications/Utilities/Reset Password.app/Contents/MacOS/Reset Password
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface LocalDatabaseUser : NSObject {

	NSString* userName;
	NSString* realNameString;
	long long uid;
	char isCrypt;
	NSString* GeneratedUID;

}
-(id)realNameString;
-(void)setRealNameString:(id)arg1 ;
-(void)setIsCrypt:(char)arg1 ;
-(char)isCrypt;
-(id)GeneratedUID;
-(void)setGeneratedUID:(id)arg1 ;
-(id)init;
-(id)userName;
-(void)setUserName:(id)arg1 ;
-(long long)uid;
-(void)setUid:(long long)arg1 ;
@end
