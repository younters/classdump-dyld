/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSDocumentControllerSubMenuDelegate, NSMutableDictionary, NSError, NSMutableArray, NSArray, NSString, NSWindow, NSDocumentControllerPersistentRestoration, NSMutableSet, NSDocument, NSOperationQueue;

@interface NSDocumentControllerMoreIVars : NSObject {

	char shouldCreateUI;
	double autosavingDelay;
	int cachedUTIUsage;
	OpaqueLSSharedFileListRefRef perAppRecentDocumentFileList;
	NSDocumentControllerSubMenuDelegate* subMenuDelegate;
	NSMutableDictionary* cachedRecentDocumentInfoPerKey;
	NSMutableDictionary* orderedPendingRecentDocumentURLsPerKey;
	CFSetRef javaVariantMethodsBeingInvoked;
	NSError* javaLastError;
	char isAutoreopening;
	NSMutableArray* autoreopenRecordsForMissingDocuments;
	char hasAutoreopened;
	char isClosingBeforeSavingDuringTermination;
	char isClosingAfterSavingDuringTermination;
	NSMutableArray* autoreopenRecordsBeingCollectedDuringTermination;
	char autoreopenRecordsNeedRewritingDuringTermination;
	char isAsyncOpeningOrPrinting;
	/*^block*/id asyncOpeningOrPrintingWaiter;
	NSArray* batchedOpenings;
	char batchedOpeningTriedToReopen;
	NSMutableDictionary* documentOpeningWaitersByURL;
	NSMutableArray* autoreopenRecordsAlreadyReopenedByTAL;
	NSString* untitledTypeToCreate;
	NSWindow* windowThatBecameKeyDuringOpening;
	char appIsBecomingActiveDuringOpening;
	id appWillBecomeActiveObserver;
	id windowDidBecomeKeyObserver;
	id appDidBecomeActiveObserver;
	char appIsResigningActiveDuringOpening;
	id appWillResignActiveObserver;
	id windowDidResignKeyObserver;
	id appDidResignActiveObserver;
	dispatch_queue_sRef mainThreadUnblockingQueue;
	NSMutableArray* mainThreadUnblockerStack;
	NSMutableArray* mainThreadBlockingInterrupters;
	NSDocumentControllerPersistentRestoration* restorationInfo;
	char dontDisplayDuringReopening;
	NSMutableSet* reservedAutosavingContentsPaths;
	NSDocument* documentBeingDuplicated;
	NSOperationQueue* documentCoordinatingQueue;
	NSOperationQueue* documentOpeningQueue;
	NSMutableArray* documentsStillPreservingVersions;
	NSMutableSet* openRecentDocumentIDs;
	NSOperationQueue* openRecentDocumentUpdatingQueue;

}
@end
