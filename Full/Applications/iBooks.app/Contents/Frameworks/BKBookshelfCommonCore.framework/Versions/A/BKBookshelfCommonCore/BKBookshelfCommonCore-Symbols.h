+[BKLibrary defaultLibrary]
___27+[BKLibrary defaultLibrary]_block_invoke
-[BKLibrary init]
+[BKLibrary persistentStoreURL]
+[BKLibrary managedObjectModelName]
+[BKLibrary persistentStoreVersion]
+[BKLibrary persistentStoreNameSeed]
___17-[BKLibrary init]_block_invoke
-[BKLibrary newManagedObjectContext]
-[BKLibraryManagedObjectContext setLibrary:]
-[BKLibrary _loadDataSources]
-[BKLibraryDataSource initWithPlugInInstanceDescriptor:]
-[BKLibraryDataSource isEnabled]
-[BKLibraryDataSource setLibrary:]
-[BKLibraryDataSource setRank:]
___29-[BKLibrary _loadDataSources]_block_invoke
-[BKLibraryDataSource rank]
-[BKLibraryAssetIsNewManager initWithLibrary:annotationProvider:]
-[BKLibraryAssetIsNewManager setDelegate:]
-[BKLibrary reloadWithCompletion:]
___34-[BKLibrary reloadWithCompletion:]_block_invoke
-[BKLibrary dataSources]
___34-[BKLibrary reloadWithCompletion:]_block_invoke_2
-[BKLibraryDataSource library]
-[BKLibrary dataSourceWithIdentifier:]
-[BKLibrary _dataSourceMatchingPredicate:]
___38-[BKLibrary dataSourceWithIdentifier:]_block_invoke
-[BKLibraryDataSource identifier]
-[BKLibraryDataSource(BKAbstract) canMakeAssetsLocal]
+[BKJaliscoStatus mergeLocalAssets:inMOC:]
+[BKJaliscoStatus allLocalStoreIds:]
+[BKJaliscoStatus statusValueLocal]
+[BKJaliscoStatus allStoreIdsForStatus:inMOC:]
_updateLibraryAsset
-[BKLibraryAsset isLocal]
-[BKLibraryDataSource(BKAbstract) canRedownloadAssets]
-[BKLibraryAsset managedObjectContext]
-[BKLibraryAssetIsNewManager annotationsMocDidSave:]
-[BKLibraryAssetIsNewManager annotationProvider]
-[BKLibraryAssetIsNewManager library]
-[BKLibraryAssetIsNewManager delegate]
+[BKCollection resetCollectionsWithLibraryManagedObjectContext:]
-[BKLibrary(MZBookKeeper) isCollectionsCloudDirty]
-[BKLibrary(MZBookKeeper) isJaliscoStatusCloudDirty]
+[BKLibraryAsset hiddenAssetsPredicate]
+[BKLibraryAsset predicateForLibraryAssetsWithAssetIDsContainedInList:]
+[BKJaliscoStatus allHiddenStoreIds:]
+[BKJaliscoStatus statusValueHidden]
-[BKLibrary(MZBookKeeper) collectionsCloudGeneration]
-[BKCollection isValidForSerialization]
-[BKCollection dictionaryRepresentation]
-[BKCollection contentTypePredicate]
-[BKCollection managedObjectContext]
-[BKCollection isDefaultCollection]
-[BKLibrary(MZBookKeeper) jaliscoStatusCloudGeneration]
+[BKJaliscoStatus serializeAllLocal:]
+[BKJaliscoStatus serializeAllStatus:inMOC:]
+[BKJaliscoStatus serializeAllHidden:]
-[BKLibrary dataSourceConformingToProtocol:]
___44-[BKLibrary dataSourceConformingToProtocol:]_block_invoke
+[BKLibraryAsset predicateForLibraryAssetsFromStore]
-[BKLibrary assetForLibraryAsset:completion:]
+[BKLibraryAsset excludeHiddenAssetsPredicate]
-[BKLibraryAsset isCloud]
-[BKLibraryAsset isDownloading]
-[BKLibraryAsset isDecompressing]
-[BKLibrary imageSource]
-[BKLibraryImageSource setLibrary:]
-[BKLibraryImageSource imageForLibraryAsset:size:]
-[BKLibraryImageSource imageCache]
-[BKLibraryImageSource placeHolderImageForLibraryAsset:size:]
-[BKLibraryImageSource genericImageForLibraryAsset:size:]
___copy_helper_block_
-[BKLibraryImageSource imageForLibraryAsset:size:completion:]
-[BKLibraryImageSource imageCacheImageForLibraryAsset:size:completion:]
___57-[BKLibraryImageSource genericImageForLibraryAsset:size:]_block_invoke
__ZL14_GetCoverCachev
__ZL22_CGImageRetainCallbackPK13__CFAllocatorPKv
-[BKLibrary examineURL:completion:]
-[BKLibraryDataSource(BKAbstract) examineURL:completion:]
+[BKLibraryAsset libraryAssetWithAssetID:inManagedObjectContext:]
-[BKLibraryDownloadStatus state]
-[BKLibraryDownloadStatus updateWithStatus:]
-[BKLibraryDownloadStatus assetID]
-[BKLibraryDownloadStatus timeRemaining]
-[BKLibraryDownloadStatus bytesDownloaded]
-[BKLibraryDownloadStatus fileSize]
-[BKLibraryDownloadStatus .cxx_destruct]
___71-[BKLibraryImageSource imageCacheImageForLibraryAsset:size:completion:]_block_invoke
___61-[BKLibraryImageSource imageForLibraryAsset:size:completion:]_block_invoke
-[BKLibraryImageSource _dataSourceImageForLibraryAsset:size:completion:]
-[BKLibraryImageSource library]
-[BKLibraryManagedObjectContext .cxx_destruct]
___61-[BKLibraryImageSource imageForLibraryAsset:size:completion:]_block_invoke_2
___destroy_helper_block_
-[BKLibraryAsset setLastOpenDateToNow]
-[BKLibraryAsset setModificationDateToNow]
-[BKLibraryManagedObjectContext saveLibrary]
-[BKLibraryManagedObjectContext library]
-[BKLibraryAsset setIsDecompressing:]
-[BKLibraryAssetIsNewManager markedAssetsQueue]
___52-[BKLibraryAssetIsNewManager annotationsMocDidSave:]_block_invoke
-[BKLibraryAssetIsNewManager markedAssets]
-[BKLibraryAssetIsNewManager resetIsNewForAssetIDs:]
___52-[BKLibraryAssetIsNewManager resetIsNewForAssetIDs:]_block_invoke
+[BKLibraryAsset predicateForLocalLibraryAssets]
+[BKLibraryAsset predicateForLibraryAssetsMarkedAsNew]
+[BKLibraryAsset keyPathsForValuesAffectingIsLocal]
-[BKLibrary resolveLibraryAsset:completion:]
+[BKLibrary downloadQueueDataSourceIdentifier]
+[BKUserSortOrderManager saveSortedBooksArray:moc:]
+[BKUserSortOrderManager resortDescendingSortKeyedObjects:]
-[BKLibrary(MZBookKeeper) resetNextBookSort]
-[BKLibrary libraryDataSource:addedAsset:]
+[BKLibraryAsset insertNewLibraryAssetWithIdentifier:assetID:type:inManagedObjectContext:]
-[BKLibraryAsset setCreationDateToNow]
-[BKLibrary(MZBookKeeper) copyNextBookSortKey:]
+[BKCollection predicateForAllDefaultCollections]
+[BKCollection predicateForCollectionWithCollectionIDInList:]
+[BKCollectionMember collectionMemberDictionaryWithLibraryAsset:]
-[BKCollection addCollectionMemberDictionaries:]
-[BKCollection addCollectionMemberDictionaries:touchDirtyFlag:]
-[BKCollection addMembers:]
-[BKCollection updateLastModification]
-[BKLibrary(MZBookKeeper) setCollectionsDirty]
-[BKLibrary(MZBookKeeper) setCollectionsCloudDirty:]
-[BKLibrary(MZBookKeeper) setCollectionsClientDirty:]
-[BKLibrary setCollectionsDirty:]
-[BKLibrary libraryDataSource:updatedAsset:]
-[BKLibrary libraryDataSource:updatedAssets:]
___45-[BKLibrary libraryDataSource:updatedAssets:]_block_invoke
+[BKJaliscoStatus addLocal:inMOC:]
+[BKJaliscoStatus addStatus:forStoreIds:inMOC:]
-[BKLibrary(MZBookKeeper) setJaliscoStatusCloudDirty:]
+[BKLibraryAsset predicateForLibraryAssetsMatchingSearchString:]
+[BKCollection defaultCollectionsInManagedObjectContext:]
+[BKCollection userCollectionsInManagedObjectContext:]
+[BKCollection predicateForUserCollections]
+[BKLibraryAsset predicateForDownloadableLibraryAssets]
-[BKCollection booksPredicate]
+[BKLibraryAsset predicateForLibraryAssetWithCollectionIDsInList:]
+[BKCollection insertNewCollectionWithCollectionID:inManagedObjectContext:]
-[BKCollection awakeFromInsert]
-[BKLibrary(MZBookKeeper) copyNextCollectionSortKey:]
-[BKCollection setSortKey:]
-[BKCollection setTitle:]
-[BKCollection claimLibraryAssets:]
+[BKCollectionMember predicateForCollectionMemebersWithAssetIDs:]
-[BKCollection acceptsContentType:]
+[BKLibraryAsset libraryAssetsWithAssetIDsContainedInList:inManagedObjectContext:]
+[BKUserSortOrderManager sendLibraryAssetToFront:]
-[BKLibrary deleteAssets:exhaustive:]
-[BKLibrary libraryDataSource:removedAsset:]
-[BKLibrary libraryDataSource:removedAssets:]
___45-[BKLibrary libraryDataSource:removedAssets:]_block_invoke
___copy_helper_block_234
-[BKLibraryImageSource removeImagesForAssetID:]
___destroy_helper_block_235
+[BKLibraryAsset predicateForLibraryAssetsWithAuthor:]
+[BKLibraryAsset predicateForLibraryAssetsWithGenre:]
-[BKCollection localizedTitle]
+[BKCollection titleForDefaultCollectionID:]
+[BKLibrary migrationService]
___61-[BKLibraryImageSource imageForLibraryAsset:size:completion:]_block_invoke_3
___copy_helper_block_50
___destroy_helper_block_51
___copy_helper_block_54
___destroy_helper_block_55
___61-[BKLibraryImageSource imageForLibraryAsset:size:completion:]_block_invoke77
___copy_helper_block_86
___destroy_helper_block_87
___copy_helper_block_92
___destroy_helper_block_93
-[BKLibraryImageSource resizeImage:size:]
___copy_helper_block_111
___destroy_helper_block_112
-[BKLibraryImageSource setImageCache:]
-[BKLibraryImageSource .cxx_destruct]
-[BKLibraryAssetModificationDateManager initWithLibrary:annotationProvider:]
-[BKLibraryAssetModificationDateManager resetModificationDateForAssetIDs:completion:]
___85-[BKLibraryAssetModificationDateManager resetModificationDateForAssetIDs:completion:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[BKLibraryAssetModificationDateManager resetModificationDateForAllLibraryAssets:]
-[BKLibraryAssetModificationDateManager libraryAssetForAssetIDs:inManagedObjectContext:]
-[BKLibraryAssetModificationDateManager annotationsForAssetIDs:inManagedObjectContext:]
-[BKLibraryAssetModificationDateManager updatesFromLibraryAssets:annotations:]
-[BKLibraryAssetModificationDateManager consumeUpdates:inManagedObjectContext:]
-[BKLibraryAssetModificationDateManager library]
-[BKLibraryAssetModificationDateManager annotationProvider]
-[BKLibraryAssetModificationDateManager .cxx_destruct]
___BKBookshelfCommonCoreBundle_block_invoke
-[BKLibraryAssetIsNewManager init]
-[BKLibraryAssetIsNewManager dealloc]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___copy_helper_block_
___destroy_helper_block_
___52-[BKLibraryAssetIsNewManager annotationsMocDidSave:]_block_invoke55
___copy_helper_block_58
___destroy_helper_block_59
-[BKLibraryAssetIsNewManager resetIsNewIfNeeded]
-[BKLibraryAssetIsNewManager resetProgressHighWaterMarkIfNeeded]
___copy_helper_block_161
___destroy_helper_block_162
-[BKLibraryAssetIsNewManager resetProgressHighWaterMarkForAssetIDs:]
___68-[BKLibraryAssetIsNewManager resetProgressHighWaterMarkForAssetIDs:]_block_invoke
___copy_helper_block_181
___destroy_helper_block_182
-[BKLibraryAssetIsNewManager _resetNextForSeriesID:inMOC:]
-[BKLibraryAssetIsNewManager _resetReadingProgressWatermark]
___60-[BKLibraryAssetIsNewManager _resetReadingProgressWatermark]_block_invoke
-[BKLibraryAssetIsNewManager setMarkedAssets:]
-[BKLibraryAssetIsNewManager setMarkedAssetsQueue:]
-[BKLibraryAssetIsNewManager .cxx_destruct]
+[BKImportingStatusController sharedController]
___47+[BKImportingStatusController sharedController]_block_invoke
-[BKImportingStatusController statusForAssetID:]
-[BKImportingStatusController removeStatusForAssetID:]
-[BKImportingStatusController statusDictionary]
-[BKImportingStatusController setStatusDictionary:]
-[BKImportingStatusController .cxx_destruct]
+[BKCollectionMember collectionMemberDictionariesWithDatabaseKeys:]
+[BKCollectionMember predicateForCollectionMemebersWithCollection:]
+[BKLibraryAsset predicateForLibraryAssetsInCloud]
+[BKLibraryAsset predicateForLocalOrImportingLibraryAssets]
+[BKLibraryAsset predicateForLocalOrDownloadingOrImportingLibraryAssets]
+[BKLibraryAsset predicateForNonCloudLibraryAssets]
+[BKLibraryAsset predicateForNonCloudLibraryAssetsAndContainers]
+[BKLibraryAsset predicateForLibraryAssetsRecentlyOpened]
+[BKLibraryAsset predicateForLibraryAssetsOpenedSince:]
+[BKLibraryAsset predicateForLibraryAssetsNotMarkedAsOld]
+[BKLibraryAsset predicateForLibraryAssetsWithDataSourceIdentifier:]
+[BKLibraryAsset predicateForLibraryAssetsWithoutCoverURL]
+[BKLibraryAsset predicateForLibraryAssetsThatWarnedAboutDesktopSupport]
+[BKLibraryAsset predicateForLibraryAssetsMissingExplicitContentFlag]
+[BKLibraryAsset predicateToExcludeLibraryAssetsWithExplicitContent]
+[BKLibraryAsset predicateToExcludeHiddenSeriesAssets]
+[BKLibraryAsset _predicateForBooksShownInAllBooksShowingPurchases:]
+[BKLibraryAsset predicateForBooksShownInAllBooks]
+[BKLibraryAsset predicateForBooksShownInAllBooksWithPurchasesDisabled]
+[BKLibraryAsset predicateToExcludeSeriesBooksYouDontOwn]
+[BKLibraryAsset predicateForNextSeriesItems]
+[BKLibraryAsset predicateToExcludeContainerContentTypes]
+[BKLibraryAsset predicateForLibraryAssetsWithSeriesID:]
+[BKLibraryAsset predicateForSeriesItemsInTheStore]
+[BKLibraryAsset predicateForSeriesContainerWithSeriesID:]
+[BKLibraryAsset predicateForSeriesContainers]
+[BKLibraryAsset predicateForBooksThatCanHaveHigherWaterMarks]
+[BKLibraryAsset numberOfLibraryAssetsInManagdObjectContext:]
+[BKLibraryAsset keyPathsForValuesAffectingIsDownloading]
+[BKLibraryAsset keyPathsForValuesAffectingIsImporting]
+[BKLibraryAsset unknownAuthor]
+[BKLibraryAsset unknownTitle]
-[BKLibraryAsset isStore]
-[BKLibraryAsset isSeriesItem]
-[BKLibraryAsset isSeriesContainer]
-[BKLibraryAsset isImporting]
-[BKLibraryAsset canEditMetadata]
-[BKLibraryAsset newestSeriesBookWithBasePredicate:]
-[BKLibraryAsset mostRecentlyOpenedSeriesBookWithBasePredicate:]
-[BKLibraryAsset adjacentSeriesBooksWithMaxCount:withSmallerSeriesSortKeys:basePredicate:]
-[BKLibraryAsset seriesStackBooksMaximumCount:basePredicate:]
-[BKLibraryAsset save:]
-[BKLibraryAsset compareSortKey:]
-[BKLibraryAsset inverseCompareSortKey:]
__ZL23_CGImageReleaseCallbackPK13__CFAllocatorPKv
__ZL23_CGImageCopyDescriptionPKv
__ZL21_CGImageEqualCallbackPKvS0_
___clang_call_terminate
+[BKUserSortOrderManager resortAscendingSortKeyedObjects:]
+[BKUserSortOrderManager resetDescendingSortKeyedObjects:]
+[BKUserSortOrderManager resetSortedBooksArray:moc:]
+[BKUserSortOrderManager saveSortedCollectionsArray:moc:]
+[BKJaliscoStatus addHidden:inMOC:]
+[BKJaliscoStatus mergedSerializedStatus:summaries:inMOC:]
+[BKJaliscoStatus mergeSerializedLocal:inMOC:]
+[BKJaliscoStatus mergeSerializedHidden:inMOC:]
+[BKJaliscoStatus hasStatusValues:]
+[BKJaliscoStatus dsidChangeCleanup:]
+[BKCollection keyPathsForValuesAffectingLocalizedTitle]
+[BKCollection setupDefaultCollectionsWithLibraryManagedObjectContext:]
+[BKCollection collectionWithID:inManagedObjectContext:]
-[BKCollection queueClaimLibraryAssets:]
___40-[BKCollection queueClaimLibraryAssets:]_block_invoke
___40-[BKCollection queueClaimLibraryAssets:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_220
___destroy_helper_block_221
-[BKCollection destroy]
-[BKCollection isEqualToCollection:]
+[BKCollection sortKeyForDefaultCollectionID:]
-[BKCollection setDeletedFlag:]
-[BKCollection setLocalizedTitle:]
+[BKCollection isValidForDeserialization:]
-[BKCollection mergeWithDictionaryRepresentation:]
-[BKCollection deserializeFromDictionary:]
+[BKCollection mergeCollections:moc:]
-[BKCollection evictNonMatchingDatabaseKeys:]
-[BKCollection allowSortManual]
-[BKCollection canDeleteLibraryAsset:]
-[BKCollection deleteRemovesFromCollection]
+[BKCollection addCollections:moc:]
-[BKCollection deserializeFromBackupSummary:]
+[BKCollection availableDefaultCollectionIDsForOS]
+[BKCollection mapContentTypeToDefaultCollectionIDForOS]
+[BKLibrary cloudDataSourceIdentifier]
+[BKLibrary sampleDataSourceIdentifier]
___copy_helper_block_
___destroy_helper_block_
___17-[BKLibrary init]_block_invoke92
___copy_helper_block_96
___destroy_helper_block_97
-[BKLibrary dq_saveDatabase]
-[BKLibrary _resetSeriesWithLibraryManagedObjectContext:]
-[BKLibrary logCounts]
___34-[BKLibrary reloadWithCompletion:]_block_invoke_3
___copy_helper_block_384
___destroy_helper_block_385
___copy_helper_block_387
___destroy_helper_block_388
___34-[BKLibrary reloadWithCompletion:]_block_invoke393
___copy_helper_block_396
___destroy_helper_block_397
___copy_helper_block_399
___destroy_helper_block_400
-[BKLibrary importURL:options:completion:]
___42-[BKLibrary importURL:options:completion:]_block_invoke
___42-[BKLibrary importURL:options:completion:]_block_invoke_2
___copy_helper_block_402
___destroy_helper_block_403
___copy_helper_block_405
___destroy_helper_block_406
-[BKLibrary prioritizeImport:completion:]
___41-[BKLibrary prioritizeImport:completion:]_block_invoke
___copy_helper_block_411
___destroy_helper_block_412
-[BKLibrary updateURL:completion:]
___34-[BKLibrary updateURL:completion:]_block_invoke
___34-[BKLibrary updateURL:completion:]_block_invoke_2
___copy_helper_block_417
___destroy_helper_block_418
___copy_helper_block_420
___destroy_helper_block_421
-[BKLibrary updateAsset:coverArt:completion:]
___45-[BKLibrary updateAsset:coverArt:completion:]_block_invoke
___45-[BKLibrary updateAsset:coverArt:completion:]_block_invoke_2
___copy_helper_block_428
___destroy_helper_block_429
___copy_helper_block_431
___destroy_helper_block_432
-[BKLibrary moveAssetsToDefaultCollections:]
-[BKLibrary deleteCollection:deleteBooks:]
___copy_helper_block_486
___destroy_helper_block_487
___copy_helper_block_492
___destroy_helper_block_493
-[BKLibrary performBlock:]
___26-[BKLibrary performBlock:]_block_invoke
___copy_helper_block_495
___destroy_helper_block_496
-[BKLibrary performBlockAndWait:]
___33-[BKLibrary performBlockAndWait:]_block_invoke
___33-[BKLibrary performBlockAndWait:]_block_invoke_2
___copy_helper_block_498
___destroy_helper_block_499
___copy_helper_block_501
___destroy_helper_block_502
-[BKLibrary dq_libraryDataSource:reconcileAssets:]
___45-[BKLibrary libraryDataSource:removedAssets:]_block_invoke_2
___copy_helper_block_551
___destroy_helper_block_552
___copy_helper_block_554
___destroy_helper_block_555
___45-[BKLibrary libraryDataSource:updatedAssets:]_block_invoke_2
___45-[BKLibrary libraryDataSource:updatedAssets:]_block_invoke_3
___45-[BKLibrary libraryDataSource:updatedAssets:]_block_invoke_4
___copy_helper_block_561
___destroy_helper_block_562
___copy_helper_block_564
___destroy_helper_block_565
___copy_helper_block_569
___destroy_helper_block_570
___copy_helper_block_572
___destroy_helper_block_573
-[BKLibrary libraryDataSource:addedAssets:]
___43-[BKLibrary libraryDataSource:addedAssets:]_block_invoke
___43-[BKLibrary libraryDataSource:addedAssets:]_block_invoke_2
___copy_helper_block_577
___destroy_helper_block_578
___copy_helper_block_580
___destroy_helper_block_581
-[BKLibrary rq_unclaimAllLibraryAssets]
___39-[BKLibrary rq_unclaimAllLibraryAssets]_block_invoke
___copy_helper_block_613
___destroy_helper_block_614
-[BKLibrary dq_integrateClaimedAssetsReason:]
___45-[BKLibrary dq_integrateClaimedAssetsReason:]_block_invoke
___copy_helper_block_638
___destroy_helper_block_639
-[BKLibrary dq_findFallbackAfterRemove]
___39-[BKLibrary dq_findFallbackAfterRemove]_block_invoke
___39-[BKLibrary dq_findFallbackAfterRemove]_block_invoke_2
___copy_helper_block_659
___destroy_helper_block_660
___copy_helper_block_662
___destroy_helper_block_663
___39-[BKLibrary dq_findFallbackAfterRemove]_block_invoke665
___copy_helper_block_666
___destroy_helper_block_667
-[BKLibrary rq_reconcileJaliscoStatusWithLocalStoreIDs:]
-[BKLibrary setImageSource:]
-[BKLibrary setDataSources:]
-[BKLibrary databaseContext]
-[BKLibrary setDatabaseContext:]
-[BKLibrary databaseQueue]
-[BKLibrary setDatabaseQueue:]
-[BKLibrary reloadQueue]
-[BKLibrary setReloadQueue:]
-[BKLibrary isReloading]
-[BKLibrary setReloading:]
-[BKLibrary collectionsDirty]
-[BKLibrary claimedAssets]
-[BKLibrary setClaimedAssets:]
-[BKLibrary unclaimedAssetIDs]
-[BKLibrary setUnclaimedAssetIDs:]
-[BKLibrary .cxx_destruct]
+[BKLibraryDownloadStatus statusWithAssetID:state:progressValue:timeRemaining:]
-[BKLibraryDownloadStatus initWithAssetID:state:progressValue:timeRemaining:bytesDownloaded:fileSize:]
-[BKLibraryDownloadStatus updateWithWaitingToBeDownloadable:]
-[BKLibraryDownloadStatus canPause]
-[BKLibraryDownloadStatus canResume]
-[BKLibraryDownloadStatus canRestart]
-[BKLibraryDownloadStatus canStart]
-[BKLibraryDownloadStatus hasFinished]
-[BKLibraryDownloadStatus description]
-[BKLibraryDownloadStatus progressValue]
-[BKLibraryDownloadStatus internetReachable]
-[BKLibraryDownloadStatus waitingToBeDownloadable]
-[BKLibraryAssetUpdate init]
-[BKLibraryAssetUpdate initWithAsset:dataSource:]
-[BKLibraryAssetUpdate propagateDataWithAsset:]
-[BKLibraryAssetUpdate asset]
-[BKLibraryAssetUpdate setAsset:]
-[BKLibraryAssetUpdate dataSourceIdentifier]
-[BKLibraryAssetUpdate setDataSourceIdentifier:]
-[BKLibraryAssetUpdate rank]
-[BKLibraryAssetUpdate setRank:]
-[BKLibraryAssetUpdate canRedownload]
-[BKLibraryAssetUpdate setCanRedownload:]
-[BKLibraryAssetUpdate canMakeAssetsLocal]
-[BKLibraryAssetUpdate setCanMakeAssetsLocal:]
-[BKLibraryAssetUpdate seriesID]
-[BKLibraryAssetUpdate seriesSortKey]
-[BKLibraryAssetUpdate sequenceDisplayName]
-[BKLibraryAssetUpdate seriesIsHidden]
-[BKLibraryAssetUpdate seriesIsCloudOnly]
-[BKLibraryAssetUpdate purchaseDates_hack]
-[BKLibraryAssetUpdate setPurchaseDates_hack:]
-[BKLibraryAssetUpdate .cxx_destruct]
+[BKLibraryImportStatus statusWithAssetID:progressValue:]
-[BKLibraryImportStatus initWithAssetID:progressValue:]
-[BKLibraryImportStatus updateWithStatus:]
-[BKLibraryImportStatus description]
-[BKLibraryImportStatus assetID]
-[BKLibraryImportStatus progressValue]
-[BKLibraryImportStatus .cxx_destruct]
-[BKLibrary(MZBookKeeper) setCollectionsClientGeneration:]
-[BKLibrary(MZBookKeeper) collectionsClientGeneration]
-[BKLibrary(MZBookKeeper) isCollectionsClientDirty]
-[BKLibrary(MZBookKeeper) setCollectionsCloudGeneration:]
-[BKLibrary(MZBookKeeper) setJaliscoStatusCloudGeneration:]
-[BKLibrary(MZBookKeeper) resetNextCollectionSort]
-[BKLibrary(MZBookKeeper) setNextBookSort:]
-[BKLibraryDataSource fetchAssets:]
-[BKLibraryDataSource mergeAssets:error:mergeBlock:]
-[BKLibraryDataSource state]
-[BKLibraryDataSource setState:]
-[BKLibraryDataSource setIdentifier:]
-[BKLibraryDataSource .cxx_destruct]
-[BKLibraryDataSource(BKAbstract) resolveLibraryAsset:completion:]
-[BKLibraryDataSource(BKAbstract) assetForLibraryAsset:completion:]
-[BKLibraryDataSource(BKAbstract) importURL:options:completion:]
-[BKLibraryDataSource(BKAbstract) prioritizeImport:completion:]
-[BKLibraryDataSource(BKAbstract) updateURL:completion:]
-[BKLibraryDataSource(BKAbstract) bookCoverForLibraryAsset:size:completion:]
-[BKLibraryDataSource(BKAbstract) deleteAssets:completion:]
GCC_except_table3
GCC_except_table4
GCC_except_table29
GCC_except_table6
GCC_except_table95
___block_descriptor_tmp
___block_descriptor_tmp53
___block_descriptor_tmp57
___block_descriptor_tmp89
___block_descriptor_tmp94
___block_descriptor_tmp114
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp60
___block_descriptor_tmp163
___block_descriptor_tmp183
___block_descriptor_tmp236
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp222
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp91
___block_descriptor_tmp98
___block_descriptor_tmp386
___block_descriptor_tmp390
___block_descriptor_tmp398
___block_descriptor_tmp401
___block_descriptor_tmp404
___block_descriptor_tmp408
___block_descriptor_tmp414
___block_descriptor_tmp419
___block_descriptor_tmp422
___block_descriptor_tmp430
___block_descriptor_tmp434
___block_descriptor_tmp489
___block_descriptor_tmp494
___block_descriptor_tmp497
___block_descriptor_tmp500
___block_descriptor_tmp503
___block_descriptor_tmp553
___block_descriptor_tmp556
___block_descriptor_tmp563
___block_descriptor_tmp566
___block_descriptor_tmp571
___block_descriptor_tmp574
___block_descriptor_tmp579
___block_descriptor_tmp582
___block_descriptor_tmp605
___block_literal_global606
___block_descriptor_tmp615
___block_descriptor_tmp641
___block_descriptor_tmp661
___block_descriptor_tmp664
___block_descriptor_tmp668
-[BKLibraryDownloadStatus description].stateStrings
_OBJC_IVAR_$_BKLibraryImageSource._imageCache
_OBJC_IVAR_$_BKLibraryImageSource._library
_OBJC_IVAR_$_BKLibraryAssetModificationDateManager._library
_OBJC_IVAR_$_BKLibraryAssetModificationDateManager._annotationProvider
_OBJC_IVAR_$_BKLibraryAssetIsNewManager._library
_OBJC_IVAR_$_BKLibraryAssetIsNewManager._annotationProvider
_OBJC_IVAR_$_BKLibraryAssetIsNewManager._markedAssetsQueue
_OBJC_IVAR_$_BKLibraryAssetIsNewManager._markedAssets
_OBJC_IVAR_$_BKLibraryAssetIsNewManager._delegate
_OBJC_IVAR_$_BKImportingStatusController._statusDictionary
_OBJC_IVAR_$_BKLibraryAsset.isDecompressing
_OBJC_IVAR_$_BKLibrary._databaseQueue
_OBJC_IVAR_$_BKLibrary._reloadQueue
_OBJC_IVAR_$_BKLibrary._databaseContext
_OBJC_IVAR_$_BKLibrary._claimedAssets
_OBJC_IVAR_$_BKLibrary._unclaimedAssetIDs
_OBJC_IVAR_$_BKLibrary._imageSource
_OBJC_IVAR_$_BKLibrary._dataSources
_OBJC_IVAR_$_BKLibrary._reloading
_OBJC_IVAR_$_BKLibrary._collectionsDirty
_OBJC_IVAR_$_BKLibraryManagedObjectContext._library
_OBJC_IVAR_$_BKLibraryDownloadStatus._assetID
_OBJC_IVAR_$_BKLibraryDownloadStatus._state
_OBJC_IVAR_$_BKLibraryDownloadStatus._progressValue
_OBJC_IVAR_$_BKLibraryDownloadStatus._timeRemaining
_OBJC_IVAR_$_BKLibraryDownloadStatus._bytesDownloaded
_OBJC_IVAR_$_BKLibraryDownloadStatus._fileSize
_OBJC_IVAR_$_BKLibraryDownloadStatus._internetReachable
_OBJC_IVAR_$_BKLibraryDownloadStatus._waitingToBeDownloadable
_OBJC_IVAR_$_BKLibraryAssetUpdate._purchaseDates_hack
_OBJC_IVAR_$_BKLibraryAssetUpdate._seriesID
_OBJC_IVAR_$_BKLibraryAssetUpdate._asset
_OBJC_IVAR_$_BKLibraryAssetUpdate._dataSourceIdentifier
_OBJC_IVAR_$_BKLibraryAssetUpdate._rank
_OBJC_IVAR_$_BKLibraryAssetUpdate._canRedownload
_OBJC_IVAR_$_BKLibraryAssetUpdate._canMakeAssetsLocal
_OBJC_IVAR_$_BKLibraryAssetUpdate._sequenceDisplayName
_OBJC_IVAR_$_BKLibraryAssetUpdate._seriesSortKey
_OBJC_IVAR_$_BKLibraryAssetUpdate._seriesIsHidden
_OBJC_IVAR_$_BKLibraryAssetUpdate._seriesIsCloudOnly
_OBJC_IVAR_$_BKLibraryImportStatus._assetID
_OBJC_IVAR_$_BKLibraryImportStatus._progressValue
_OBJC_IVAR_$_BKLibraryDataSource._identifier
_OBJC_IVAR_$_BKLibraryDataSource._state
_OBJC_IVAR_$_BKLibraryDataSource._library
_OBJC_IVAR_$_BKLibraryDataSource._rank
_BKBookshelfCommonCoreBundle.sBKBookshelfCommonCoreBundle
_BKBookshelfCommonCoreBundle.onceToken
+[BKImportingStatusController sharedController].onceToken
+[BKImportingStatusController sharedController].sSharedController
__ZL14__s_coverCache
_defaultLibrary
+[BKLibrary defaultLibrary].onceToken
_BKAlreadyDisplayedWelcomeExperience
_BKBookshelfCommonCoreBundle
_BKCollectionPasteboardType
_BKGenericBookCoverClearCache
_BKGenericBookCoverColorFromString
_BKGenericBookCoverCreateImage
_BKGenericBookCoverCreateImageWithItemID
_BKGenericBookCoverCreateImageWithItemIDAndLayout
_BKGenericBookCoverCreateImageWithStyle
_BKGenericBookCoverCreateImageWithTemplate
_BKGenericBookCoverCreateTemplateWithItemID
_BKGenericBookCoverCreateTemplateWithStyleAndColor
_BKGenericBookCoverIsGenericBookCoverImageSource
_BKGenericBookCoverLayoutFromLanguageAndVerticality
_BKGenericBookCoverLayoutFromString
_BKGenericBookCoverStyleFromString
_BKLibraryAssetPasteboardType
_BKLibraryDataSourceImportOptionIsDevelopment
_BKLibraryDecompressAssetIDKey
_BKLibraryDecompressProgressKey
_BKLibraryDecompressProgressNotification
_BKLibraryDidImportNotification
_BKLibraryDidSaveNotification
_BKLibraryDownloadStatusKey
_BKLibraryDownloadStatusNotification
_BKLibraryErrorDomain
_BKLibraryInvalidAssetIDKey
_BKLibraryOwnershipAssetIDKey
_BKLibraryOwnershipAssetsKey
_BKLibraryOwnershipDidChangeNotification
_BKLibraryOwnershipNewDatasourceKey
_BKLibraryOwnershipOldDatasourceKey
_BKLibraryPendingUpdateNotification
_BKLibraryUpdateAssetsKey
_BKLibraryUpdateNotification
_BKLibraryWillImportNotification
_OBJC_CLASS_$_BKBookshelfCommonCoreBundleLookupClass
_OBJC_CLASS_$_BKCollection
_OBJC_CLASS_$_BKCollectionMember
_OBJC_CLASS_$_BKImportingStatusController
_OBJC_CLASS_$_BKJaliscoStatus
_OBJC_CLASS_$_BKLibrary
_OBJC_CLASS_$_BKLibraryAsset
_OBJC_CLASS_$_BKLibraryAssetIsNewManager
_OBJC_CLASS_$_BKLibraryAssetModificationDateManager
_OBJC_CLASS_$_BKLibraryAssetUpdate
_OBJC_CLASS_$_BKLibraryDataSource
_OBJC_CLASS_$_BKLibraryDownloadStatus
_OBJC_CLASS_$_BKLibraryImageSource
_OBJC_CLASS_$_BKLibraryImportStatus
_OBJC_CLASS_$_BKLibraryManagedObjectContext
_OBJC_CLASS_$_BKUserSortOrderManager
_OBJC_METACLASS_$_BKBookshelfCommonCoreBundleLookupClass
_OBJC_METACLASS_$_BKCollection
_OBJC_METACLASS_$_BKCollectionMember
_OBJC_METACLASS_$_BKImportingStatusController
_OBJC_METACLASS_$_BKJaliscoStatus
_OBJC_METACLASS_$_BKLibrary
_OBJC_METACLASS_$_BKLibraryAsset
_OBJC_METACLASS_$_BKLibraryAssetIsNewManager
_OBJC_METACLASS_$_BKLibraryAssetModificationDateManager
_OBJC_METACLASS_$_BKLibraryAssetUpdate
_OBJC_METACLASS_$_BKLibraryDataSource
_OBJC_METACLASS_$_BKLibraryDownloadStatus
_OBJC_METACLASS_$_BKLibraryImageSource
_OBJC_METACLASS_$_BKLibraryImportStatus
_OBJC_METACLASS_$_BKLibraryManagedObjectContext
_OBJC_METACLASS_$_BKUserSortOrderManager
__Z17containsSubstringPK10__CFStringS1_
__ZN18BKGenericBookCover10DrawAuthorEP9CGContext
__ZN18BKGenericBookCover10DrawBorderEP9CGContext
__ZN18BKGenericBookCover11DrawBindingEP9CGContext
__ZN18BKGenericBookCover12SizeThatFitsE6CGSize
__ZN18BKGenericBookCover13SizeForStringEPK10__CFStringS2_6CGSizePd
__ZN18BKGenericBookCover14CreateRGBColorEdddd
__ZN18BKGenericBookCover14DrawBackgroundEP9CGContext
__ZN18BKGenericBookCover15GetBindingImageEv
__ZN18BKGenericBookCover16CreateTitleColorEv
__ZN18BKGenericBookCover17CreateAuthorColorEv
__ZN18BKGenericBookCover17GetHSLAdjustmentsEPdS0_S0_
__ZN18BKGenericBookCover18GetBackgroundImageEv
__ZN18BKGenericBookCover19DrawTitleBackgroundEP9CGContext6CGRect
__ZN18BKGenericBookCover20CreateBookCoverImageEv
__ZN18BKGenericBookCover20DrawAttributedStringEP9CGContextPK20__CFAttributedString6CGRectPK8__CTFontb
__ZN18BKGenericBookCover21DrawFramesetterInRectEP9CGContextPK15__CTFramesetter6CGRect
__ZN18BKGenericBookCover21GetSizeForFramesetterEPK15__CTFramesetterPK8__CTFont6CGSize
__ZN18BKGenericBookCover22CreateAttributedStringEPK10__CFStringPK8__CTFont15CTLineBreakMode15CTTextAlignmentdbd
__ZN18BKGenericBookCover23CreateImageWithFileNameEPK10__CFString
__ZN18BKGenericBookCover4DrawEP9CGContext
__ZN18BKGenericBookCover9DrawTitleEP9CGContext
__ZN18BKGenericBookCoverC1EPK10__CFStringS2_6CGSize24BKGenericBookCoverLayout23BKGenericBookCoverStyle23BKGenericBookCoverColorbb
__ZN18BKGenericBookCoverC2EPK10__CFStringS2_6CGSize24BKGenericBookCoverLayout23BKGenericBookCoverStyle23BKGenericBookCoverColorbb
__ZN18BKGenericBookCoverD0Ev
__ZN18BKGenericBookCoverD1Ev
__ZN18BKGenericBookCoverD2Ev
__ZNK18BKGenericBookCover15HasVerticalTextEv
__ZTI18BKGenericBookCover
__ZTS18BKGenericBookCover
__ZTV18BKGenericBookCover
_kBKCollectionDefaultAll
_kBKCollectionDefaultIDAudioBook
_kBKCollectionDefaultIDBooks
_kBKCollectionDefaultIDPDFs
_kBKCollectionIDPurchased
_kBKLibraryDataSourceCompoundError
_kBKLibraryDataSourceDomain
_kBKLibraryDataSourceErrorAbstractMethodError
_kBKLibraryDataSourceErrorDisabled
_kBKLibraryDataSourceErrorInvalidAssetError
_kBKLibraryDataSourceErrorMissingMergeFailedReasonUnknown
_languageIsJapanese
_languageIsSimplifiedChinese
_languageIsTraditionalChinese
_BKPluginsMatchingType
_CC_MD5_Final
_CC_MD5_Init
_CC_MD5_Update
_CFArrayCreate
_CFArrayGetCount
_CFArrayGetValueAtIndex
_CFAttributedStringCreate
_CFBundleCopyResourceURL
_CFBundleGetBundleWithIdentifier
_CFDictionaryCreate
_CFDictionaryCreateMutable
_CFDictionaryGetValue
_CFDictionaryGetValueIfPresent
_CFDictionaryRemoveAllValues
_CFDictionarySetValue
_CFNumberCreate
_CFRelease
_CFRetain
_CFStringCompare
_CFStringCopyLongestWordInString
_CFStringCreateArrayBySeparatingStrings
_CFStringCreateByCombiningStrings
_CFStringCreateMutableCopy
_CFStringCreateWithFormat
_CFStringFind
_CFStringGetBytes
_CFStringGetLength
_CFStringHasPrefix
_CFStringLowercase
_CGAffineTransformMakeTranslation
_CGAffineTransformRotate
_CGAffineTransformTranslate
_CGBitmapContextCreate
_CGBitmapContextCreateImage
_CGColorCreate
_CGColorSpaceCreateDeviceRGB
_CGContextConcatCTM
_CGContextDrawImage
_CGContextDrawStretchableImage
_CGContextFillRect
_CGContextRelease
_CGContextRestoreGState
_CGContextSaveGState
_CGContextScaleCTM
_CGContextSetFillColorWithColor
_CGContextSetGrayFillColor
_CGContextSetGrayStrokeColor
_CGContextSetLineWidth
_CGContextSetShouldAntialias
_CGContextStrokeRect
_CGContextTranslateCTM
_CGImageCreateFromImageAdjustingHSL
_CGImageCreateWithURL
_CGImageGetWidth
_CGImageRelease
_CGImageRetain
_CGImageSourceCopyPropertiesAtIndex
_CGImageSourceGetCount
_CGPathAddRect
_CGPathCreateMutable
_CGPointZero
_CGRectGetHeight
_CGRectInset
_CGRectIntegral
_CGSizeZero
_CTFontCreateWithName
_CTFontGetDescent
_CTFontGetLeading
_CTFontGetSize
_CTFrameDraw
_CTFramesetterCreateFrame
_CTFramesetterCreateWithAttributedString
_CTFramesetterSuggestFrameSizeWithConstraints
_CTParagraphStyleCreate
_IMDynamicCast
_NSApp
_NSCocoaErrorDomain
_NSInsertedObjectsKey
_NSInvalidArgumentException
_NSLog
_NSManagedObjectContextDidSaveNotification
_NSStringFromClass
_NSStringFromSelector
_NSUpdatedObjectsKey
_OBJC_CLASS_$_AEAnnotation
_OBJC_CLASS_$_BKMessageTracerHelper
_OBJC_CLASS_$_BKSecurePreferences
_OBJC_CLASS_$_IMAssertionHandler
_OBJC_CLASS_$_IMCoreDataSource
_OBJC_CLASS_$_IMImageCache
_OBJC_CLASS_$_IMLogger
_OBJC_CLASS_$_IMPlugInManager
_OBJC_CLASS_$_IMUserDataCull
_OBJC_CLASS_$_NSApplication
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCompoundPredicate
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSEntityDescription
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSFetchRequest
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSImage
_OBJC_CLASS_$_NSManagedObject
_OBJC_CLASS_$_NSManagedObjectContext
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSPredicate
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSSortDescriptor
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_Reachability
_OBJC_EHTYPE_$_NSException
_OBJC_METACLASS_$_IMCoreDataSource
_OBJC_METACLASS_$_NSManagedObject
_OBJC_METACLASS_$_NSManagedObjectContext
_OBJC_METACLASS_$_NSObject
__Block_object_assign
__Block_object_dispose
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_Resume
__ZSt9terminatev
__ZTVN10__cxxabiv117__class_type_infoE
__ZdlPv
__Znwm
___CFConstantStringClassReference
___assert_rtn
___cxa_begin_catch
___gxx_personality_v0
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
__dispatch_main_q
__objc_empty_cache
_ceil
_ceilf
_dispatch_async
_dispatch_get_global_queue
_dispatch_group_create
_dispatch_group_enter
_dispatch_group_leave
_dispatch_group_wait
_dispatch_once
_dispatch_queue_create
_dispatch_sync
_floor
_fmaxf
_fminf
_kCFAllocatorDefault
_kCFBooleanFalse
_kCFBooleanTrue
_kCFTypeDictionaryKeyCallBacks
_kCFTypeDictionaryValueCallBacks
_kCGImagePropertyIPTCDictionary
_kCGImagePropertyIPTCFixtureIdentifier
_kCTFontAttributeName
_kCTForegroundColorFromContextAttributeName
_kCTKernAttributeName
_kCTParagraphStyleAttributeName
_kCTVerticalFormsAttributeName
_kIMCoreDataSourceSortOrderInitialGap
_objc_autorelease
_objc_autoreleasePoolPop
_objc_autoreleasePoolPush
_objc_autoreleaseReturnValue
_objc_begin_catch
_objc_destroyWeak
_objc_end_catch
_objc_enumerationMutation
_objc_getProperty
_objc_loadWeakRetained
_objc_msgSend
_objc_msgSendSuper2
_objc_release
_objc_retain
_objc_retainAutorelease
_objc_retainAutoreleaseReturnValue
_objc_retainAutoreleasedReturnValue
_objc_retainBlock
_objc_setProperty_atomic
_objc_setProperty_nonatomic_copy
_objc_storeStrong
_objc_storeWeak
_round
_roundf
dyld_stub_binder