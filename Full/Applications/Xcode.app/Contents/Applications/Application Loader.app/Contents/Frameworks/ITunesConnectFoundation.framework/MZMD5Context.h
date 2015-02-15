/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Frameworks/ITunesConnectFoundation.framework/ITunesConnectFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ITunesConnectFoundation/ITunesConnectFoundation-Structs.h>
@class NSString, NSError;

@interface MZMD5Context : NSObject {

	int _state;
	CC_MD5state_st _context;
	NSString* _md5;
	NSError* _error;

}
+(id)context;
-(id)md5WithError:(id*)arg1 ;
-(id)updateWithBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(int)state;
-(id)close;
-(id)error;
-(void)setError:(id)arg1 ;
-(id)open;
@end
