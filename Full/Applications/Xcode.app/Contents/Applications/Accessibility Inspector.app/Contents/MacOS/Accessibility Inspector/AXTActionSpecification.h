/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Accessibility Inspector.app/Contents/MacOS/Accessibility Inspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Accessibility Inspector/Accessibility Inspector-Structs.h>
#import <Accessibility Inspector/AXTDatabaseSpecification.h>

@class NSString;

@interface AXTActionSpecification : AXTDatabaseSpecification {

	NSString* _protocolSelectorName;

}

@property (nonatomic,retain) NSString * protocolSelectorName;              //@synthesize protocolSelectorName=_protocolSelectorName - In the implementation block
-(NSString *)protocolSelectorName;
-(void)setProtocolSelectorName:(NSString *)arg1 ;
-(id)_initWithName:(id)arg1 dictionary:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
