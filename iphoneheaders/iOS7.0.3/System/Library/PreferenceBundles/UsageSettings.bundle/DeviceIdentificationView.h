/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UsageSettings/UsageSettings-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIImage;

@interface DeviceIdentificationView : UIView {

	UIImageView* _deviceImageView;
	UILabel* _deviceNameLabel;
	UILabel* _deviceModelLabel;

}

@property (assign,nonatomic,@dynamic) UIImage * deviceImage; 
+(void)initialize;
-(void)setDeviceImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 deviceName:(id)arg2 deviceIdentifier:(id)arg3 imageURL:(id)arg4 isCurrentDevice:(BOOL)arg5 ;
-(void)loadImageForDeviceIdentifier:(id)arg1 URL:(id)arg2 ;
-(id)deviceImage;
-(void)dealloc;
-(void)layoutSubviews;
-(void)sizeToFit;
@end
