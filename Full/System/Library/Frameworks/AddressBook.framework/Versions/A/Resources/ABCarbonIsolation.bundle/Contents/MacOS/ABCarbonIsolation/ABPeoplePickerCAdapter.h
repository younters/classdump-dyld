/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:32:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/Resources/ABCarbonIsolation.bundle/Contents/MacOS/ABCarbonIsolation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ABCarbonIsolation/ABCarbonIsolation-Structs.h>
@class ABPeoplePickerView, NSPanel;

@interface ABPeoplePickerCAdapter : NSObject {

	ABPeoplePickerView* oPicker;
	NSPanel* oWindow;
	OpaqueEventTargetRefRef _carbonDelegate;

}
-(void)dispatchGroupSelection:(id)arg1 ;
-(void)dispatchValueSelection:(id)arg1 ;
-(void)dispatchPropertyChanged:(id)arg1 ;
-(void)dispatchNameDoubleClick:(id)arg1 ;
-(void)_dispatchCarbonEventOfKind:(unsigned)arg1 ;
-(void)dispatchNameSelection:(id)arg1 ;
-(void)dispatchGroupDoubleClick:(id)arg1 ;
-(void)setCarbonDelegate:(OpaqueEventTargetRefRef)arg1 ;
-(OpaqueEventTargetRefRef)carbonDelegate;
-(void)dealloc;
-(id)window;
-(void)load;
-(id)picker;
@end
