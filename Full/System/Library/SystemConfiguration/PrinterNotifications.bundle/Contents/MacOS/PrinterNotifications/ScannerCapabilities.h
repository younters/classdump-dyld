/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:31:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/SystemConfiguration/PrinterNotifications.bundle/Contents/MacOS/PrinterNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, ADFOptions, InputSourceCapabilities, NSDictionary;

@interface ScannerCapabilities : NSObject {

	NSString* _Version;
	NSString* _MakeAndModel;
	NSString* _SerialNumber;
	NSArray* _SettingProfiles;
	ADFOptions* _ADFOptions;
	InputSourceCapabilities* _PlatenInputCapabilities;
	InputSourceCapabilities* _ADFSimplexInputCapabilities;
	InputSourceCapabilities* _ADFDuplexInputCapabilities;
	InputSourceCapabilities* _CameraInputCapabilities;
	NSDictionary* _VendorFeatureSupport;

}

@property (nonatomic,retain) NSString * Version;                                                 //@synthesize Version=_Version - In the implementation block
@property (nonatomic,retain) NSString * MakeAndModel;                                            //@synthesize MakeAndModel=_MakeAndModel - In the implementation block
@property (setter=erialNumber,nonatomic,retain) NSString * SerialNumber;                         //@synthesize SerialNumber=_SerialNumber - In the implementation block
@property (setter=ettingProfiles,nonatomic,retain) NSArray * SettingProfiles;                    //@synthesize SettingProfiles=_SettingProfiles - In the implementation block
@property (nonatomic,retain) ADFOptions * ADFOptions;                                            //@synthesize ADFOptions=_ADFOptions - In the implementation block
@property (nonatomic,retain) InputSourceCapabilities * PlatenInputCapabilities;                  //@synthesize PlatenInputCapabilities=_PlatenInputCapabilities - In the implementation block
@property (nonatomic,retain) InputSourceCapabilities * ADFSimplexInputCapabilities;              //@synthesize ADFSimplexInputCapabilities=_ADFSimplexInputCapabilities - In the implementation block
@property (nonatomic,retain) InputSourceCapabilities * ADFDuplexInputCapabilities;               //@synthesize ADFDuplexInputCapabilities=_ADFDuplexInputCapabilities - In the implementation block
@property (nonatomic,retain) InputSourceCapabilities * CameraInputCapabilities;                  //@synthesize CameraInputCapabilities=_CameraInputCapabilities - In the implementation block
@property (nonatomic,retain) NSDictionary * VendorFeatureSupport;                                //@synthesize VendorFeatureSupport=_VendorFeatureSupport - In the implementation block
-(char)hasADF;
-(id)inputSourceCapabilitiesForFunctionalUnit:(unsigned long long)arg1 ;
-(id)settingProfileForName:(id)arg1 ;
-(char)hasPlaten;
-(void)setADFOptions:(ADFOptions *)arg1 ;
-(InputSourceCapabilities *)PlatenInputCapabilities;
-(NSArray *)SettingProfiles;
-(NSString *)SerialNumber;
-(ADFOptions *)ADFOptions;
-(InputSourceCapabilities *)ADFDuplexInputCapabilities;
-(NSDictionary *)VendorFeatureSupport;
-(void)setADFSimplexInputCapabilities:(InputSourceCapabilities *)arg1 ;
-(void)setADFDuplexInputCapabilities:(InputSourceCapabilities *)arg1 ;
-(void)setCameraInputCapabilities:(InputSourceCapabilities *)arg1 ;
-(void)setVendorFeatureSupport:(NSDictionary *)arg1 ;
-(InputSourceCapabilities *)CameraInputCapabilities;
-(void)setSettingProfiles:(NSArray *)arg1 ;
-(void)setPlatenInputCapabilities:(InputSourceCapabilities *)arg1 ;
-(InputSourceCapabilities *)ADFSimplexInputCapabilities;
-(void)setMakeAndModel:(NSString *)arg1 ;
-(id)initWithXMLDocument:(id)arg1 ;
-(char)adfSupportsDuplex;
-(NSString *)MakeAndModel;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)Version;
@end
