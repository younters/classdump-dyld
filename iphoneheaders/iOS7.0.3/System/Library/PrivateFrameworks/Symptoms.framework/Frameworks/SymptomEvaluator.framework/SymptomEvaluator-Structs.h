/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

typedef struct {
	queueElement tqh_first;
	queueElement tqh_last;
} SCD_Struct_Re0;

typedef struct originalsQueue {
	queueElement tqh_first;
	queueElement tqh_last;
} originalsQueue;

typedef struct queueElement {
	SCD_Struct_Re0 queueElementNext;
	void selfPtr;
} queueElement;

typedef struct __NStatManager* NStatManagerRef;

typedef struct __NStatSource* NStatSourceRef;

typedef struct _transport_connection_s* transport_connection_sRef;
