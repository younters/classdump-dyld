/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/Frameworks/IMRenderingFoundation.framework/Versions/A/IMRenderingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMRenderingFoundation/IMRenderingFoundation-Structs.h>
#import <AppKit/NSImage.h>

@class NSString, NSData;

@interface NSDataRetainingImage : NSImage {

	NSString* _fileExtension;
	NSData* _originalData;

}

@property (retain) NSData * originalData;              //@synthesize originalData=_originalData - In the implementation block
+(char)canInitWithPasteboard:(id)arg1 ;
-(void)setOriginalData:(NSData *)arg1 ;
-(NSData *)originalData;
-(id)writeToPath:(id)arg1 withName:(id)arg2 unique:(char)arg3 atomically:(char)arg4 ;
-(id)initWithPasteboard:(id)arg1 sender:(id)arg2 ;
-(id)imageWithMaxSize:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithPasteboard:(id)arg1 ;
@end
