/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/SFUInputStream.h>

@protocol SFUInputStream;
@class , OISFUCryptor;

@interface OISFUCryptoInputStream : NSObject <SFUInputStream> {

	<SFUInputStream>* mBaseStream;
	OISFUCryptor* mCryptor;
	long long mOffset;

}
-(void)dealloc;
-(long long)offset;
-(void)close;
-(BOOL)canSeek;
-(void)seekToOffset:(long long)arg1 ;
-(unsigned long)readToBuffer:(char*)arg1 size:(unsigned long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2 ;
@end
