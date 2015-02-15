/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:02:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/ColorSync/Calibrators/Display Calibrator.app/Contents/MacOS/Display Calibrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct ColorSyncProfile* ColorSyncProfileRef;

typedef struct ColorSyncFixedXYColor {
	int x;
	int y;
} ColorSyncFixedXYColor;

typedef struct DisplayProfileSpec {
	unsigned dataSize;
	ColorSyncFixedXYColor redPhosphor;
	ColorSyncFixedXYColor greenPhosphor;
	ColorSyncFixedXYColor bluePhosphor;
	ColorSyncFixedXYColor whitePoint;
	int redGammaValue;
	int greenGammaValue;
	int blueGammaValue;
	unsigned ASCIICount;
	char* ASCIIName;
	unsigned long long UniCodeCount;
	unsigned short UniCodeName;
	short ScriptCodeCode;
	char* ScriptCodeName;
	unsigned targetGamma;
	unsigned targetWhite;
	unsigned short gammaChannels;
	unsigned short gammaEntryCount;
	unsigned short gammaEntrySize;
	char* gammaDataPtr;
	unsigned displayID;
} DisplayProfileSpec;
