/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/tmutil
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <tmutil/Volume.h>

@class Snapshot;

@interface SnapshotVolume : Volume {

	Snapshot* _parentSnapshot;

}
+(char)URLIsValidSnapshotVolume:(id)arg1 ;
-(unsigned long long)bytesUsed;
-(unsigned long long)_calculateDeepSize;
-(char)isPhysicalVolume;
-(char)setName:(id)arg1 error:(id*)arg2 ;
-(char)setUUID:(id)arg1 error:(id*)arg2 ;
-(id)previousUUID;
-(id)previousName;
-(char)setPreviousUUID:(id)arg1 error:(id*)arg2 ;
-(char)setPreviousName:(id)arg1 error:(id*)arg2 ;
-(id)parentSnapshot;
-(id)UUID;
-(void)dealloc;
@end
