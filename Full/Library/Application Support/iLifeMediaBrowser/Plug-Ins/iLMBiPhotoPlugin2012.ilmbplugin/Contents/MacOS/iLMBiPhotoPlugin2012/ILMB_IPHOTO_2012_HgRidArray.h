/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBiPhotoPlugin2012.ilmbplugin/Contents/MacOS/iLMBiPhotoPlugin2012
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLMBiPhotoPlugin2012/iLMBiPhotoPlugin2012-Structs.h>
#import <iLMBiPhotoPlugin2012/NSCopying.h>
#import <iLMBiPhotoPlugin2012/NSCoding.h>

@interface ILMB_IPHOTO_2012_HgRidArray : NSObject <NSCopying, NSCoding> {

	unsigned long long m_startOffset;
	unsigned m_ridCount;
	unsigned m_array[32];

}
-(char)isSet:(unsigned long long)arg1 ;
-(char)setRid:(unsigned long long)arg1 ;
-(void)orRids:(id)arg1 ;
-(void)andRids:(id)arg1 ;
-(void)diffRids:(id)arg1 ;
-(char)nextRid:(unsigned long long*)arg1 afterRid:(unsigned long long)arg2 ;
-(unsigned long long)_ridFromAddress:(unsigned long long)arg1 withOffset:(unsigned long long)arg2 ;
-(void)appendToIndexSet:(id)arg1 ;
-(void)appendToArrayOfNumbers:(id)arg1 ;
-(void)appendToSetOfNumbers:(id)arg1 ;
-(unsigned long long)countRidsNow;
-(char)lastRid:(unsigned long long*)arg1 ;
-(id)initWithOffset:(unsigned long long)arg1 ;
-(char)clearRid:(unsigned long long)arg1 ;
-(long long)rangeCompare:(unsigned long long)arg1 ;
-(char)inRange:(unsigned long long)arg1 ;
-(void)_setAllRids;
-(char)firstRid:(unsigned long long*)arg1 ;
-(char)isSubsetOf:(id)arg1 ;
-(char)overlapsWith:(id)arg1 ;
-(void)empty;
-(id)initWithBytes:(const char**)arg1 ;
-(void)appendToData:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(unsigned long long)start;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(unsigned long long)end;
@end
