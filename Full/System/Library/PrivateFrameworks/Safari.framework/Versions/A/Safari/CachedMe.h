/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@interface CachedMe : NSObject {

	RefPtr<Safari::AddressBookEntry>* _cachedMe;
	char _meNeedsUpdate;

}
-(AddressBookEntry*)me;
-(void)_addressBookDataChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
