/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/iLifeMediaBrowser/Plug-Ins/iLMBAperture31Plugin.ilmbplugin/Contents/MacOS/iLMBAperture31Plugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ILPerfLoggerAperture31 : NSObject {

	double _loadAlbumDataXMLTime;
	double _openDatabaseTime;
	double _getRidIndexesTime;
	double _setupVersionIteratorTime;
	double _previewPathLookupTime;
	double _versionIdsPassingFilterTime;
	double _versionIterationTime;
	double _captionLookupTime;
	double _keywordPrefetchTime;
	double _projectDatePrefetchTime;
	double _masterAutoreleasePoolTime;
	double _loadMasterImageListTime;
	double _mediaObjectsForAlbumTime;
	double _mediaObjectsForFolderTime;
	double _addPasteboardAttributesTime;
	double _childGroupsForFolderTime;
	double _sortingTime;
	double _placesTime;
	double _facesTime;
	double _closeDatabaseTime;
	double _rootGroupTime;
	double _totalTime;

}
-(void)recordLoadAlbumDataXMLTime:(id)arg1 ;
-(void)recordSortingTime:(id)arg1 ;
-(void)recordCloseDatabaseTime:(id)arg1 ;
-(void)recordRootGroupTime:(id)arg1 ;
-(void)recordPlacesTime:(id)arg1 ;
-(void)recordFacesTime:(id)arg1 ;
-(void)recordChildGroupsForFolderTime:(id)arg1 ;
-(void)recordMediaObjectsForAlbumTime:(id)arg1 ;
-(void)recordLoadMasterImageListTime:(id)arg1 ;
-(void)recordVersionIterationTime:(id)arg1 ;
-(void)recordProjectDatePrefetchTime:(id)arg1 ;
-(void)recordSetupVersionIteratorTime:(id)arg1 ;
-(void)recordKeywordPrefetchTime:(id)arg1 ;
-(void)recordGetRidIndexesTime:(id)arg1 ;
-(void)recordCaptionLookupTime:(id)arg1 ;
-(void)recordPreviewPathLookupTime:(id)arg1 ;
-(void)recordVersionIdsPassingFilterTime:(id)arg1 ;
-(void)recordMasterAutoreleasePoolTime:(id)arg1 ;
-(void)recordAddPasteboardAttributesTime:(id)arg1 ;
-(void)recordMediaObjectsForFolderTime:(id)arg1 ;
-(void)dumpTimes;
-(void)recordOpenDatabaseTime:(id)arg1 ;
-(void)recordTotalTime:(id)arg1 ;
@end
