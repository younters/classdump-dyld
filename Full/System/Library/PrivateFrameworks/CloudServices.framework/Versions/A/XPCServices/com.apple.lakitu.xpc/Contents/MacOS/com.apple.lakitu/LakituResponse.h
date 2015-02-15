/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/Versions/A/XPCServices/com.apple.lakitu.xpc/Contents/MacOS/com.apple.lakitu
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSHTTPURLResponse, NSError, NSString;

@interface LakituResponse : NSObject {

	NSDictionary* _responseDictionary;
	NSHTTPURLResponse* _httpResponse;
	NSError* _error;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * protocolVersion; 
@property (nonatomic,readonly) NSHTTPURLResponse * httpResponse;               //@synthesize httpResponse=_httpResponse - In the implementation block
-(NSHTTPURLResponse *)httpResponse;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSDictionary *)responseDictionary;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(char)arg3 ;
-(void)_parsePlistResponse:(id)arg1 ;
-(NSString *)protocolVersion;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
