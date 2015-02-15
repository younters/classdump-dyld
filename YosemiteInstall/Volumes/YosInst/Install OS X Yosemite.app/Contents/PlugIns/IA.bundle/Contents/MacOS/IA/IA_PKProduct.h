/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:59:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/Install OS X Yosemite.app/Contents/PlugIns/IA.bundle/Contents/MacOS/IA
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IA/IA-Structs.h>
#import <IA/IA_PKPackageSource.h>

@class NSArray;

@interface IA_PKProduct : NSObject <IA_PKPackageSource> {

	int _minTrustLevel;
	int _evaluatedTrustLevel;
	NSArray* _certificateChain;
	SecTrustRef _trustRef;

}
+(id)_allProductClasses;
+(char)_allowsFolderArchives;
+(void)_setAllowsFolderArchives:(char)arg1 ;
+(id)productByLoadingProductAtURL:(id)arg1 error:(id*)arg2 ;
+(char)canInitWithURL:(id)arg1 ;
-(id)productVersion;
-(int)trustLevelReturningTrustRef:(_SecTrust*)arg1 ;
-(id)productIdentifier;
-(id)stringsDictionary;
-(id)distributionContainer;
-(id)initByLoadingProductAtURL:(id)arg1 error:(id*)arg2 ;
-(id)_archiveForTrustEvaluation;
-(id)_distributionFlatData;
-(id)resourceDataForKey:(id)arg1 returningMIMEType:(id*)arg2 returningUTI:(id*)arg3 ;
-(id)_distributionArchivePath;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 ;
-(id)distribution;
-(id)allPackageReferences;
-(void)setMinimumRequiredTrustLevel:(int)arg1 ;
-(char)evaluateTrustReturningError:(id*)arg1 ;
-(int)trustLevelReturningCertificateChain:(id*)arg1 ;
-(id)productType;
-(void)finalize;
-(void)dealloc;
-(id)URL;
@end
