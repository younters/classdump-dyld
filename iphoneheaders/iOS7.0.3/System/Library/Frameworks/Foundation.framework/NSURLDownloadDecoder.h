/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol NSURLDownloadDecoder <NSObject>
@required
+(BOOL)canDecodeDownloadHeaderData:(id)arg1;
+(id)MIMEType;
-(BOOL)decodeDownloadData:(id)arg1 dataForkData:(id*)arg2 resourceForkData:(id*)arg3;
-(BOOL)finishDownloadDecoding;
-(id)filenameWithOriginalFilename:(id)arg1;
-(id)fileAttributes;
@end
