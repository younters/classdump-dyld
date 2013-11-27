/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OCDEncryptedReader.h>

@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader {

	OCPZipPackage* mZipPackage;

}

@property (nonatomic,retain) OCPZipPackage * zipPackage; 
-(void)dealloc;
-(BOOL)start;
-(void)setZipPackage:(id)arg1 ;
-(id)read;
-(id)zipPackage;
-(BOOL)verifyFileFormat;
-(BOOL)retainDecryptorWithErrorCode:(int*)arg1 ;
-(bool)isBinaryReader;
-(void)restartReaderToUseDecryptedDocument;
@end
