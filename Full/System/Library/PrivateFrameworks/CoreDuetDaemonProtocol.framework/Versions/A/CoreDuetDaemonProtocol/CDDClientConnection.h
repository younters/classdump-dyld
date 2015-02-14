/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/Versions/A/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CDDXPCConnection, CDDebug;

@interface CDDClientConnection : NSObject {

	CDDXPCConnection* _connection;
	CDDebug* _debug;
	unsigned long long _clientId;

}

@property (readonly) CDDXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) CDDebug * debug;                            //@synthesize debug=_debug - In the implementation block
@property (readonly) unsigned long long clientId;                //@synthesize clientId=_clientId - In the implementation block
-(id)messageWithError:(id*)arg1 ;
-(id)initWithClientId:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)sendMessageWithType:(long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)sendMessageWithType:(long long)arg1 valueKey1:(id)arg2 uint64Value1:(unsigned long long)arg3 valueKey2:(id)arg4 uint64Value2:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(char)sendMessageWithType:(long long)arg1 valueKey:(id)arg2 uint64Value:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)sendMessageWithType:(long long)arg1 valueKey1:(id)arg2 int64Value1:(long long)arg3 valueKey2:(id)arg4 uint64Value2:(unsigned long long)arg5 valueKey3:(id)arg6 uint64Value3:(unsigned long long)arg7 error:(id*)arg8 replyHandler:(/*^block*/id)arg9 ;
-(char)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 valueKey:(id)arg4 int64Value:(long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(char)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 typeField:(unsigned long long)arg4 integerId:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(char)sendMessageWithType:(long long)arg1 nameKey:(id)arg2 name:(id)arg3 valueKey:(id)arg4 int64Value:(long long)arg5 type:(unsigned long long)arg6 integerId:(unsigned long long)arg7 error:(id*)arg8 replyHandler:(/*^block*/id)arg9 ;
-(char)versionWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)message:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(char)forecastAttributeId:(unsigned long long)arg1 value:(id)arg2 format:(long long)arg3 historyWindow:(id)arg4 limitCount:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(char)forecastAttributeId:(unsigned long long)arg1 value:(id)arg2 format:(long long)arg3 historyWindow:(id)arg4 deviceIdentifier:(id)arg5 temporalLeeway:(double)arg6 limitCount:(unsigned long long)arg7 error:(id*)arg8 replyHandler:(/*^block*/id)arg9 ;
-(char)registerPool:(id)arg1 withInitialValue:(long long)arg2 poolType:(long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)registerChildPool:(id)arg1 parentIntegerId:(unsigned long long)arg2 poolType:(long long)arg3 maxFraction:(double)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(char)idForPool:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)deletePool:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)readPool:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)compareAndSwapPool:(unsigned long long)arg1 compareValue:(long long)arg2 swapValue:(long long)arg3 type:(unsigned long long)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(char)decrementPool:(unsigned long long)arg1 decrementValue:(long long)arg2 type:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)incrementPool:(unsigned long long)arg1 incrementValue:(long long)arg2 type:(unsigned long long)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)readTrendingAppsWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)readLiveAppsWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)registerTrendableApp:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)deregisterTrendableApp:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)bundleIdEntriesOlderThanDate:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)deleteBundleId:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)deleteAttributeId:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)setDebugBitmap:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)deleteAllDatabaseEntriesOlderThanDate:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)appsLaunchedSince:(id)arg1 butNotPrewarmedSince:(id)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)registerAttribute:(id)arg1 withType:(int)arg2 dataProtectionClass:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)idForAttribute:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)idForAttribute:(id)arg1 clientId:(long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)attributeId:(unsigned long long)arg1 occurredWithValue:(id)arg2 cost:(long long)arg3 onDate:(id)arg4 risingEdge:(char)arg5 fallingEdge:(char)arg6 type:(int)arg7 error:(id*)arg8 replyHandler:(/*^block*/id)arg9 ;
-(char)attributeNamesWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)poolNamesWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)deleteDataWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)attributeId:(unsigned long long)arg1 associateToBudgetId:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)attributeId:(unsigned long long)arg1 setCategory:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)attributeId:(unsigned long long)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(char)attributeId:(unsigned long long)arg1 statistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)attributeId:(unsigned long long)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id*)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)attributeId:(unsigned long long)arg1 repeatedStatistic:(int)arg2 forHistoryWindow:(id)arg3 deviceIdentifier:(id)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(char)attributeId:(unsigned long long)arg1 meteredWithValue:(id)arg2 costDictionary:(id)arg3 onDate:(id)arg4 risingEdge:(char)arg5 fallingEdge:(char)arg6 type:(int)arg7 meterToken:(unsigned long long)arg8 error:(id*)arg9 replyHandler:(/*^block*/id)arg10 ;
-(char)attributeId:(unsigned long long)arg1 historyOfValue:(id)arg2 forWindow:(id)arg3 filter:(long long)arg4 maximumElements:(unsigned long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(char)budgetsForAttributeId:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)remoteFocalAppWithId:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)resetAttributeId:(unsigned long long)arg1 type:(int)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)getDevicesWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)getDeviceFromDescription:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)readSystemDataFromDevice:(unsigned)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)broadcastSystemDataWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)setAdmissionMask:(unsigned long long)arg1 bitfield:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)resetAdmissionMask:(unsigned long long)arg1 bitfield:(unsigned long long)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)requestSystemDataFromDevice:(unsigned)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)requestForecastFromDevice:(unsigned)arg1 attributeId:(unsigned long long)arg2 value:(id)arg3 historyWindow:(id)arg4 format:(long long)arg5 error:(id*)arg6 replyHandler:(/*^block*/id)arg7 ;
-(char)requestStatisticFromDevice:(unsigned)arg1 attributeId:(unsigned long long)arg2 statistic:(int)arg3 historyWindow:(id)arg4 error:(id*)arg5 replyHandler:(/*^block*/id)arg6 ;
-(char)readRemoteRequestResult:(unsigned long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)setManualType:(unsigned long long)arg1 type:(char)arg2 error:(id*)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)attributeId:(unsigned long long)arg1 admissionCheckOfValue:(id)arg2 admissionCheckType:(int)arg3 attributeType:(int)arg4 options:(id)arg5 cost:(long long)arg6 onDate:(id)arg7 risingEdge:(char)arg8 fallingEdge:(char)arg9 error:(id*)arg10 replyHandler:(/*^block*/id)arg11 ;
-(char)bundleIdChange:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(CDDXPCConnection *)connection;
-(CDDebug *)debug;
-(id)init;
-(unsigned long long)clientId;
@end
