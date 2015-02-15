/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WeatherKit.framework/Versions/A/WeatherKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WeatherKit/WeatherKit-Structs.h>
#import <WeatherKit/WMObject.h>
#import <WeatherKit/NSSecureCoding.h>
#import <WeatherKit/WMDataWithDate.h>

@class NSDateComponents, WMLocation, NSString, NSURL, NSDate, NSColor;

@interface WMWeatherData : WMObject <NSSecureCoding, WMDataWithDate> {

	float _chanceOfPrecipitation;
	unsigned long long _weatherDataType;
	NSDateComponents* _representedDate;
	WMLocation* _location;
	unsigned long long _conditionCode;
	NSString* _conditionLocalizedString;
	NSURL* _imageLargeURL;
	NSURL* _imageSmallURL;
	NSDate* _creationDate;
	double _temperatureCelsius;
	double _temperatureLowCelsius;
	double _temperatureHighCelsius;
	NSColor* _temperatureLowColor;
	NSColor* _temperatureHighColor;
	NSDate* _sunriseDate;
	NSDate* _sunsetDate;
	NSString* _naturalLanguageStringCelsius;
	NSString* _naturalLanguageStringFahrenheit;
	SCD_Struct_WM2 _coordinate;

}

@property (assign) unsigned long long weatherDataType;                                     //@synthesize weatherDataType=_weatherDataType - In the implementation block
@property (copy) NSDateComponents * representedDate;                                       //@synthesize representedDate=_representedDate - In the implementation block
@property (copy) WMLocation * location;                                                    //@synthesize location=_location - In the implementation block
@property (assign) SCD_Struct_WM2 coordinate;                                              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign) unsigned long long conditionCode;                                       //@synthesize conditionCode=_conditionCode - In the implementation block
@property (copy) NSString * conditionLocalizedString;                                      //@synthesize conditionLocalizedString=_conditionLocalizedString - In the implementation block
@property (copy) NSURL * imageLargeURL;                                                    //@synthesize imageLargeURL=_imageLargeURL - In the implementation block
@property (copy) NSURL * imageSmallURL;                                                    //@synthesize imageSmallURL=_imageSmallURL - In the implementation block
@property (copy) NSDate * creationDate;                                                    //@synthesize creationDate=_creationDate - In the implementation block
@property (assign) double temperatureCelsius;                                              //@synthesize temperatureCelsius=_temperatureCelsius - In the implementation block
@property (assign) double temperatureLowCelsius;                                           //@synthesize temperatureLowCelsius=_temperatureLowCelsius - In the implementation block
@property (assign) double temperatureHighCelsius;                                          //@synthesize temperatureHighCelsius=_temperatureHighCelsius - In the implementation block
@property (readonly) double temperatureFahrenheit; 
@property (readonly) double temperatureLowFahrenheit; 
@property (readonly) double temperatureHighFahrenheit; 
@property (readonly) double temperatureBasedOnLocale; 
@property (readonly) double temperatureLowBasedOnLocale; 
@property (readonly) double temperatureHighBasedOnLocale; 
@property (retain,readonly) NSString * temperatureStringBasedOnLocale; 
@property (retain,readonly) NSString * temperatureStringLowBasedOnLocale; 
@property (retain,readonly) NSString * temperatureStringHighBasedOnLocale; 
@property (retain,readonly) NSString * temperatureStringHighLowBasedOnLocale; 
@property (copy) NSColor * temperatureLowColor;                                            //@synthesize temperatureLowColor=_temperatureLowColor - In the implementation block
@property (copy) NSColor * temperatureHighColor;                                           //@synthesize temperatureHighColor=_temperatureHighColor - In the implementation block
@property (assign) float chanceOfPrecipitation;                                            //@synthesize chanceOfPrecipitation=_chanceOfPrecipitation - In the implementation block
@property (copy) NSDate * sunriseDate;                                                     //@synthesize sunriseDate=_sunriseDate - In the implementation block
@property (copy) NSDate * sunsetDate;                                                      //@synthesize sunsetDate=_sunsetDate - In the implementation block
@property (copy) NSString * naturalLanguageStringCelsius;                                  //@synthesize naturalLanguageStringCelsius=_naturalLanguageStringCelsius - In the implementation block
@property (copy) NSString * naturalLanguageStringFahrenheit;                               //@synthesize naturalLanguageStringFahrenheit=_naturalLanguageStringFahrenheit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)knownKeys;
+(double)temperatureInFahrenheitGivenCelsius:(double)arg1 ;
+(double)temperatureBasedOnLocaleGivenCelsius:(double)arg1 fahrenheit:(double)arg2 ;
+(id)temperatureStringBasedOnLocaleGivenCelsius:(double)arg1 fahrenheit:(double)arg2 ;
+(id)temperatureUnitsBasedOnLocale;
-(SCD_Struct_WM2)coordinate;
-(void)setCoordinate:(SCD_Struct_WM2)arg1 ;
-(NSDateComponents *)representedDate;
-(NSURL *)imageSmallURL;
-(NSString *)conditionLocalizedString;
-(double)temperatureBasedOnLocale;
-(double)temperatureHighBasedOnLocale;
-(double)temperatureLowBasedOnLocale;
-(unsigned long long)conditionCode;
-(void)setConditionCode:(unsigned long long)arg1 ;
-(float)chanceOfPrecipitation;
-(void)setChanceOfPrecipitation:(float)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(WMLocation *)location;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setLocation:(WMLocation *)arg1 ;
-(double)temperatureCelsius;
-(double)temperatureLowCelsius;
-(double)temperatureHighCelsius;
-(double)temperatureFahrenheit;
-(double)temperatureLowFahrenheit;
-(double)temperatureHighFahrenheit;
-(unsigned long long)weatherDataType;
-(NSString *)naturalLanguageStringCelsius;
-(NSString *)naturalLanguageStringFahrenheit;
-(NSString *)temperatureStringHighBasedOnLocale;
-(NSString *)temperatureStringLowBasedOnLocale;
-(NSURL *)imageLargeURL;
-(NSDate *)sunriseDate;
-(NSDate *)sunsetDate;
-(NSColor *)temperatureLowColor;
-(NSColor *)temperatureHighColor;
-(NSString *)temperatureStringBasedOnLocale;
-(id)naturalLanguageString:(char)arg1 ;
-(NSString *)temperatureStringHighLowBasedOnLocale;
-(void)setWeatherDataType:(unsigned long long)arg1 ;
-(void)setRepresentedDate:(NSDateComponents *)arg1 ;
-(void)setConditionLocalizedString:(NSString *)arg1 ;
-(void)setImageLargeURL:(NSURL *)arg1 ;
-(void)setImageSmallURL:(NSURL *)arg1 ;
-(void)setTemperatureCelsius:(double)arg1 ;
-(void)setTemperatureLowCelsius:(double)arg1 ;
-(void)setTemperatureHighCelsius:(double)arg1 ;
-(void)setTemperatureLowColor:(NSColor *)arg1 ;
-(void)setTemperatureHighColor:(NSColor *)arg1 ;
-(void)setSunriseDate:(NSDate *)arg1 ;
-(void)setSunsetDate:(NSDate *)arg1 ;
-(void)setNaturalLanguageStringCelsius:(NSString *)arg1 ;
-(void)setNaturalLanguageStringFahrenheit:(NSString *)arg1 ;
@end
