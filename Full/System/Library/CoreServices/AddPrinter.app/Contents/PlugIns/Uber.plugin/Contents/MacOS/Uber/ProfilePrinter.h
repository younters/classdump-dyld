/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:34:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/AddPrinter.app/Contents/PlugIns/Uber.plugin/Contents/MacOS/Uber
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PMBrowser/PMBrowserPrinter.h>

@class NSString, NSDictionary, NSArray;

@interface ProfilePrinter : PMBrowserPrinter {

	NSString* _uri;
	NSDictionary* _attributes;

}

@property (nonatomic,retain) NSString * uri;                         //@synthesize uri=_uri - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * location; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSString * urf; 
@property (nonatomic,readonly) NSString * product; 
@property (nonatomic,readonly) NSArray * pdl; 
@property (nonatomic,readonly) NSString * duplex; 
-(id)matchPPDBasedDrivers;
-(id)airprintMatch;
-(id)browserIdentifier;
-(char)selectStandardDefaults;
-(char)canDetermineDriver;
-(id)dictionaryWithDriverSpecification:(id)arg1 ;
-(id)initPrinterWithURI:(id)arg1 ;
-(NSString *)urf;
-(NSArray *)pdl;
-(NSString *)duplex;
-(NSString *)uuid;
-(NSString *)product;
-(void)updateAttributes;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSDictionary *)attributes;
-(NSString *)location;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setUri:(NSString *)arg1 ;
-(NSString *)uri;
@end
