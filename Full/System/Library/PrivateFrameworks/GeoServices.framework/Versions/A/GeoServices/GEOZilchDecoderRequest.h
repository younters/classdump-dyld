/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOZilchDecoder, NSError;

@interface GEOZilchDecoderRequest : GEOMapRequest {

	unique_ptr<geo::ZilchMapModel, std::__1::default_delete<geo::ZilchMapModel> >* _mapModel;
	GEOZilchDecoder* _decoder;
	shared_ptr<zilch::Message>* _message;
	/*^block*/id _pathHandler;
	/*^block*/id _errorHandler;
	NSError* _firstTileLoadingError;
	dispatch_semaphore_sRef _finishedSemaphore;

}

@property (copy) id pathHandler;               //@synthesize pathHandler=_pathHandler - In the implementation block
@property (copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)initWithDecoder:(id)arg1 message:(shared_ptr<zilch::Message>*)arg2 ;
-(void)decodeWithPathHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)pathHandler;
-(void)setPathHandler:(id)arg1 ;
-(void)_finishedDecodingWithPath:(Path<std::__1::shared_ptr<geo::MapEdge> >*)arg1 ;
-(void)dealloc;
-(void)cancel;
@end
