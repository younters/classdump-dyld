/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/printd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSMutableArray;

@interface ColorInfo : NSObject {

	NSString* colorReason;
	NSMutableArray* gstateStack;
	NSString* strokeColorspace;
	NSString* nonStrokeColorspace;

}

@property (@dynamic,retain) NSString * colorReason; 
@property (retain) NSMutableArray * gstateStack; 
@property (retain) NSString * strokeColorspace; 
@property (retain) NSString * nonStrokeColorspace; 
-(id)strokeColorspace;
-(void)setStrokeColorspace:(id)arg1 ;
-(id)nonStrokeColorspace;
-(void)setNonStrokeColorspace:(id)arg1 ;
-(id)gstateStack;
-(id)colorReason;
-(void)setColorReason:(id)arg1 ;
-(void)gsave;
-(void)grestore;
-(void)setGstateStack:(id)arg1 ;
-(id)init;
-(void).cxx_destruct;
@end
