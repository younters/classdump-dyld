/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABDAVAuthDelegate;
#import <AddressBook/AddressBook-Structs.h>
@class NSMutableArray, NSString, NSData, NSMutableDictionary, NSURL, NSDictionary, NSCalendarDate, ABXMLParseNode;

@interface ABDAVQuery : NSObject {

	NSMutableArray* _authenticationList;
	NSString* _user;
	NSString* _password;
	int _type;
	NSData* _body;
	NSMutableDictionary* _extraHeaders;
	NSURL* _url;
	int _depth;
	char _parsed;
	NSData* _resultData;
	NSDictionary* _returnHeader;
	NSCalendarDate* _responseDate;
	int _resultCode;
	ABXMLParseNode* _rootNode;
	CFXMLParserRef _parser;
	id<ABDAVAuthDelegate> _authDelegate;
	long long _failedCount;
	NSString* _userAgent;

}
+(id)authenticationList;
+(void)applyAuthToRequest:(CFHTTPMessageRef)arg1 ;
+(void)setLastQueryDate:(id)arg1 ;
+(void)resetAuthList;
+(void)addAuthInfo:(id)arg1 ;
+(id)lastQueryDate;
+(void)initialize;
-(void)setBody:(id)arg1 ;
-(id)password;
-(id)user;
-(id)body;
-(void)setUserAgent:(id)arg1 ;
-(id)initWithUser:(id)arg1 password:(id)arg2 url:(id)arg3 ;
-(id)execute;
-(id)_valueForDepth:(int)arg1 ;
-(CFHTTPMessageRef)newBuildRequest;
-(id)responseAsString;
-(id)dereferencedEntity:(id)arg1 ;
-(id)_valuesForProperty:(id)arg1 inNode:(id)arg2 ;
-(id)initWithAuthDelegate:(id)arg1 url:(id)arg2 ;
-(int)queryType;
-(void)addHeaderValue:(id)arg1 forKey:(id)arg2 ;
-(id)returnHeader;
-(id)valuesForProperty:(id)arg1 ;
-(id)lockToken;
-(char)succeeded;
-(void)setDepth:(int)arg1 ;
-(void)setQueryType:(int)arg1 ;
-(id)responseList;
-(int)resultCode;
-(id)resultData;
-(char)parseData:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(int)depth;
-(id)responseDate;
@end
