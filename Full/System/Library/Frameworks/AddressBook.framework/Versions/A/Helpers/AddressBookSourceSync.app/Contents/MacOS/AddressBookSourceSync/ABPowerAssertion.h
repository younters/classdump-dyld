/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/Helpers/AddressBookSourceSync.app/Contents/MacOS/AddressBookSourceSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ABPowerAssertion : NSObject {

	NSString* _name;
	double _timeout;
	unsigned _powerAssertionID;

}

@property (readonly) NSString * assertionName; 
@property (readonly) double assertionTimeout; 
@property (readonly) NSString * assertionType; 
-(id)initWithName:(id)arg1 timeout:(double)arg2 ;
-(void)takeAssertion;
-(char)isHoldingPowerAssertion;
-(NSString *)assertionType;
-(NSString *)assertionName;
-(double)assertionTimeout;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)dropPowerAssertion;
@end
