/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PKArchive : NSObject
+(id)_allArchiveClasses;
+(id)archiveWithPath:(id)arg1 ;
-(id)initForReadingFromPath:(id)arg1 ;
-(id)archivePath;
-(id)fileAttributesAtPath:(id)arg1 ;
-(char)extractItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(char)_extractFile:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(id)dataForPath:(id)arg1 ;
-(char)verifyReturningError:(id*)arg1 ;
-(id)archiveSignatures;
-(id)archiveSignatureDate;
-(id)archiveDigest;
-(char)closeArchive;
-(id)description;
-(char)fileExistsAtPath:(id)arg1 ;
-(id)enumeratorAtPath:(id)arg1 ;
@end
