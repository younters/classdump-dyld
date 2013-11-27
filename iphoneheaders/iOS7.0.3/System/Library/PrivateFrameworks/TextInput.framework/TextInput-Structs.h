/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct _compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > {
	vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > __first_;
} compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > >;

typedef struct vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > {
	vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > __begin_;
	vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > __end_;
	compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > __end_cap_;
} vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > >;

typedef struct {
	unsigned uppercase : 1;
	unsigned autoshifted : 1;
	unsigned popupVariant : 1;
	unsigned multitap : 1;
	unsigned flick : 1;
} SCD_Struct_TI4;

typedef union {
	int integerValue;
	SCD_Struct_TI4 fields;
} SCD_Union_TI5;

typedef struct {
	unsigned canHandleKeyHitTest : 1;
	unsigned ignoresDeadKeys : 1;
	unsigned needsKeyHitTestResults : 1;
	unsigned shouldExtendPriorWord : 1;
	unsigned suppliesCompletions : 1;
	unsigned supportsNumberKeySelection : 1;
	unsigned supportsSetPhraseBoundary : 1;
	unsigned suppressCompletionsForFieldEditor : 1;
	unsigned usesAutoDeleteWord : 1;
	unsigned usesCandidateSelection : 1;
	unsigned commitsAcceptedCandidate : 1;
	unsigned nextInputWouldStartSentence : 1;
	unsigned inputStringIsExemptFromChecker : 1;
	unsigned suppressPlaceholderCandidate : 1;
} SCD_Struct_TI6;

typedef union {
	int integerValue;
	SCD_Struct_TI6 fields;
} SCD_Union_TI7;

typedef struct {
	unsigned userSelectedCurrentCandidate : 1;
	unsigned shouldSkipCandidateSelection : 1;
	unsigned suppressingCandidateSelection : 1;
	unsigned needsCandidateMetadata : 1;
	unsigned keyboardEventsLagging : 1;
	unsigned hardwareKeyboardMode : 1;
	unsigned splitKeyboardMode : 1;
	unsigned wordLearningEnabled : 1;
	unsigned autocorrectionEnabled : 1;
	unsigned shortcutConversionEnabled : 1;
	unsigned typologyLoggingEnabled : 1;
	unsigned autocapitalizationEnabled : 1;
	unsigned autocapitalizationType : 2;
	unsigned keyboardType : 4;
} SCD_Struct_TI8;

typedef union {
	int integerValue;
	SCD_Struct_TI8 fields;
} SCD_Union_TI9;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct {
	id field1;
	id field2;
	int field3;
	id field4;
	id field5;
	int field6;
} SCD_Struct_TI11;

typedef struct {
	id field1;
	id field2;
	BOOL field3;
	BOOL field4;
	unsigned long long field5;
	int field6;
} SCD_Struct_TI12;

typedef struct {
	int location;
	int length;
} SCD_Struct_TI13;

typedef struct {
	unsigned short buffer[64];
	__CFString theString;
	unsigned short directUniCharBuffer;
	char* directCStringBuffer;
	SCD_Struct_TI13 rangeToBuffer;
	int bufferedRangeStart;
	int bufferedRangeEnd;
} SCD_Struct_TI14;
