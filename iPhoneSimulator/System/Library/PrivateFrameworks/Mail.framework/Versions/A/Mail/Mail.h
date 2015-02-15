#import <Mail/_MFAppleScriptHeaderRecord.h>
#import <Mail/MFAccount.h>
#import <Mail/MFAccountStatus.h>
#import <Mail/MFAccountStorage.h>
#import <Mail/MFAddressManager.h>
#import <Mail/MFAosImapAccount.h>
#import <Mail/MFAosSmtpAccount.h>
#import <Mail/MFAttachmentViewController.h>
#import <Mail/MFBackupManager.h>
#import <Mail/MFBehaviorTracker.h>
#import <Mail/MFBerkeleyMbox.h>
#import <Mail/MFConversationCalculationContext.h>
#import <Mail/MFConversationCalculator.h>
#import <Mail/MFCriterion.h>
#import <Mail/MFCrossProcessLock.h>
#import <Mail/MFDatabaseRecoverer.h>
#import <Mail/MFDefaults.h>
#import <Mail/MFDeliveryAccount.h>
#import <Mail/MFEWSAccount.h>
#import <Mail/MFEWSConnection.h>
#import <Mail/MFEWSCopyItemsRequestOperation.h>
#import <Mail/MFEWSCopyItemsResponseOperation.h>
#import <Mail/MFEWSCreateEventReplyRequestOperation.h>
#import <Mail/MFEWSCreateEventReplyResponseOperation.h>
#import <Mail/MFEWSCreateFolderRequestOperation.h>
#import <Mail/MFEWSCreateFolderResponseOperation.h>
#import <Mail/MFEWSCreateItemRequestOperation.h>
#import <Mail/MFEWSCreateItemResponseOperation.h>
#import <Mail/MFEWSCreateMessageRequestOperation.h>
#import <Mail/MFEWSDeleteFolderRequestOperation.h>
#import <Mail/MFEWSDeleteItemsRequestOperation.h>
#import <Mail/MFEWSDeliverer.h>
#import <Mail/MFEWSDeliveryAccount.h>
#import <Mail/MFEWSFindItemsRequestOperation.h>
#import <Mail/MFEWSFindItemsResponseOperation.h>
#import <Mail/MFEWSGateway.h>
#import <Mail/MFEWSGetFolderRequestOperation.h>
#import <Mail/MFEWSGetFolderResponseOperation.h>
#import <Mail/MFEWSGetItemDataRequestOperation.h>
#import <Mail/MFEWSGetItemDataResponseOperation.h>
#import <Mail/MFEWSGetItemsRequestOperation.h>
#import <Mail/MFEWSGetItemsResponseOperation.h>
#import <Mail/MFEWSGetUserOofSettingsRequestOperation.h>
#import <Mail/MFEWSGetUserOofSettingsResponseOperation.h>
#import <Mail/MFEWSLibraryUpdateOperation.h>
#import <Mail/MFEWSMessage.h>
#import <Mail/MFEWSMoveFolderRequestOperation.h>
#import <Mail/MFEWSOfflineGateway.h>
#import <Mail/MFEWSRenameFolderRequestOperation.h>
#import <Mail/MFEWSRequestOperation.h>
#import <Mail/MFEWSResponseOperation.h>
#import <Mail/MFEWSSetUserOofSettingsRequestOperation.h>
#import <Mail/MFEWSSetUserOofSettingsResponseOperation.h>
#import <Mail/MFEWSSizeEngine.h>
#import <Mail/MFEWSStore.h>
#import <Mail/_MFSetFlags.h>
#import <Mail/MFEWSSuppressReadReceiptsRequestOperation.h>
#import <Mail/MFEWSSyncFolderHierarchyRequestOperation.h>
#import <Mail/MFEWSSyncFolderHierarchyResponseOperation.h>
#import <Mail/MFEWSSyncFolderItemsRequestOperation.h>
#import <Mail/MFEWSSyncFolderItemsResponseOperation.h>
#import <Mail/MFEWSUpdateItemRequestOperation.h>
#import <Mail/MFExchangeIMAPAccount.h>
#import <Mail/MFExchangeIMAPConnection.h>
#import <Mail/MFFilesystemWatcher.h>
#import <Mail/MailFramework.h>
#import <Mail/MFGmailLabelStore.h>
#import <Mail/MFHTMLConverter.h>
#import <Mail/MFHTMLParser.h>
#import <Mail/_MFIMAPMailboxDeletionQueueEntry.h>
#import <Mail/MFIMAPAccount.h>
#import <Mail/MFIMAPOperation.h>
#import <Mail/MFIMAPCreateOperation.h>
#import <Mail/MFIMAPDeleteOperation.h>
#import <Mail/MFIMAPStoreOperation.h>
#import <Mail/MFIMAPStoreFlagsOperation.h>
#import <Mail/MFIMAPStoreGmailLabelsOperation.h>
#import <Mail/MFIMAPAppendMessageOperation.h>
#import <Mail/MFIMAPCopyMessagesOperation.h>
#import <Mail/MFIMAPOfflineCopyOnStupidServerOperation.h>
#import <Mail/_IMAPOfflineRestoreContext.h>
#import <Mail/MFIMAPOperationCache.h>
#import <Mail/MFIMAPSizeEngine.h>
#import <Mail/MFJunkMail.h>
#import <Mail/MFJunkMailFilter.h>
#import <Mail/MFLibrary.h>
#import <Mail/_MFMessageLoadingContext.h>
#import <Mail/MFSqliteHandle.h>
#import <Mail/_MFMessageCollector.h>
#import <Mail/_MFConversationsMessageCollector.h>
#import <Mail/_MFDataCollector.h>
#import <Mail/_MFProgressHandlerMonitorContext.h>
#import <Mail/MFLibraryCalendarEvent.h>
#import <Mail/MFLibraryIMAPMessage.h>
#import <Mail/MFLibraryIMAPStore.h>
#import <Mail/MFLibraryMessage.h>
#import <Mail/MFLibraryQueries.h>
#import <Mail/MFLibraryStoreMessageConsumer.h>
#import <Mail/MFLibraryStore.h>
#import <Mail/MFLibraryThread.h>
#import <Mail/_MFLibraryThreadRequest.h>
#import <Mail/MFLibraryUpgrader.h>
#import <Mail/MFLocalAccount.h>
#import <Mail/_MFRootlessMailbox.h>
#import <Mail/MFLocationManager.h>
#import <Mail/MFNetworkLocation.h>
#import <Mail/MFMailAccount.h>
#import <Mail/MFMailbox.h>
#import <Mail/_MFMailboxEnumerator.h>
#import <Mail/_MFSmartMailboxesEnumerator.h>
#import <Mail/_MFMailboxChildrenEnumerator.h>
#import <Mail/MFMessageCounts.h>
#import <Mail/MFMailboxDirectoryScanner.h>
#import <Mail/MFMailDropPreferencesManager.h>
#import <Mail/MFMailMigrator.h>
#import <Mail/_MFZipStream.h>
#import <Mail/MFMessageAddressee.h>
#import <Mail/MFMessageContext.h>
#import <Mail/MFMessageCriterion.h>
#import <Mail/MFMessageDeliverer.h>
#import <Mail/MFMessageReplyGenerator.h>
#import <Mail/MFMessageRouter.h>
#import <Mail/_MFRoutingDictionaryContext.h>
#import <Mail/MFMessageRouterUtilities.h>
#import <Mail/MFMessageRule.h>
#import <Mail/MFMessageRuleCriterion.h>
#import <Mail/MFMessageSortingInformation.h>
#import <Mail/MFMessageSortingValue.h>
#import <Mail/_MFMessageSortingValueSender.h>
#import <Mail/_MFMessageSortingValueColor.h>
#import <Mail/_MFMessageSortingValueDateLastViewed.h>
#import <Mail/_MFMessageSortingValueMessageFlags.h>
#import <Mail/_MFMessageSortingValueMessageSize.h>
#import <Mail/_MFMessageSortingValueNumberOfAttachments.h>
#import <Mail/_MFMessageSortingValueSubject.h>
#import <Mail/_MFMessageSortingValueTo.h>
#import <Mail/_MFMessageSortingValueDateReceived.h>
#import <Mail/_MFMessageSortingValueDateSent.h>
#import <Mail/_MFMessageSortingValueMailbox.h>
#import <Mail/_MFMessageSortingValueLibraryID.h>
#import <Mail/MFCachedMailboxInfo.h>
#import <Mail/MFMessageStore.h>
#import <Mail/MFMessageThread.h>
#import <Mail/MFNeXTStore.h>
#import <Mail/MFParentalControlAccount.h>
#import <Mail/MFParentalControlManager.h>
#import <Mail/MFParentalControlSettings.h>
#import <Mail/MFParentalControlStore.h>
#import <Mail/MFPersistenceManager.h>
#import <Mail/MFPOPAccount.h>
#import <Mail/MFPOPConnection.h>
#import <Mail/MFPOPMessage.h>
#import <Mail/MFPOPSizeEngine.h>
#import <Mail/MFPOPStore.h>
#import <Mail/MFPreparedStatement.h>
#import <Mail/MFQuoteParser.h>
#import <Mail/MFRecoveredMessage.h>
#import <Mail/MFRecoveredStore.h>
#import <Mail/MFRedundantContentMarkup.h>
#import <Mail/_MFRedundantTextIdentifierAttachmentContext.h>
#import <Mail/_MFRedundantTextIdentifierParseContext.h>
#import <Mail/MFRedundantTextIdentifier.h>
#import <Mail/_MFRedundantTextIdentifierSolutionContext.h>
#import <Mail/_MFRedundantTextIdentifierSolutionGenerator.h>
#import <Mail/MFRemoteAttachmentManager.h>
#import <Mail/MFRemoteAppendMessagesContext.h>
#import <Mail/MFRemoteStore.h>
#import <Mail/MFRemoteStoreAccount.h>
#import <Mail/MFRemoteStoreSizeEngine.h>
#import <Mail/MFSeenMessage.h>
#import <Mail/MFSeenMessagesManager.h>
#import <Mail/_MFSeenMessagesStore.h>
#import <Mail/MFSizeEngine.h>
#import <Mail/MFSmartMailboxUnreadCountManager.h>
#import <Mail/_MFNonContentSmartMailboxUnreadCountManager.h>
#import <Mail/MFSMTPAccount.h>
#import <Mail/_MFSMTPEnhancedStatusCode.h>
#import <Mail/MFSMTPDeliverer.h>
#import <Mail/MFSnippetCalculator.h>
#import <Mail/MFSnippetManager.h>
#import <Mail/MFSpecialMailbox.h>
#import <Mail/MFSpotlightManager.h>
#import <Mail/MFSpotlightResultCollector.h>
#import <Mail/MFStringUniquer.h>
#import <Mail/MFSyncedFile.h>
#import <Mail/MFTableOfContents.h>
#import <Mail/MFTOCMessage.h>
#import <Mail/MFUnreadCountQueryObserver.h>
#import <Mail/MFUsageCounter.h>
#import <Mail/MFVIPSendersController.h>
#import <Mail/MFWebMessageDocument.h>