/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface NSDocInfo : NSObject <NSCopying> {

	long time;
	unsigned short mode;
	struct {
		unsigned isDir : 1;
		unsigned isSingleFile : 1;
		unsigned isSoftLink : 1;
		unsigned _pad : 13;
	}  flags;

}
-(id)initWithFileAttributes:(id)arg1 ;
-(id)initFromInfo:(stat*)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end
