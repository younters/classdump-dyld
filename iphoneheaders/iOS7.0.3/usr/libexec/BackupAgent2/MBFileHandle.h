/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:54:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <BackupAgent2/BackupAgent2-Structs.h>
@class NSString;

@interface MBFileHandle : NSObject

@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) int fd; 
-(id)encryptionKeyWithError:(id*)arg1 ;
-(BOOL)validateEncryptionKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)closeWithError:(id*)arg1 ;
-(BOOL)readFromPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)statWithBuffer:(stat*)arg1 error:(id*)arg2 ;
-(int)writeWithBytes:(const void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(int)readWithBytes:(void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)writeToPath:(id)arg1 error:(id*)arg2 ;
-(int)fd;
-(id)path;
@end
