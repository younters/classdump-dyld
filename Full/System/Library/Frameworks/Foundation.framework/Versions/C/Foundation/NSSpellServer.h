/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSArray;

@interface NSSpellServer : NSObject {

	id _delegate;
	long long _caseSensitive;
	id _spellServerConnection;
	id _dictionaries;
	NSArray* _learnedDictionaries;
	struct {
		unsigned delegateLearnsWords : 1;
		unsigned delegateForgetsWords : 1;
		unsigned busy : 1;
		unsigned _reserved : 29;
	}  _ssFlags;
	id _checker;
	void* _reservedSpellServer;

}

@property (assign) id<NSSpellServerDelegate> delegate; 
-(CFSetRef)createDictHashTable:(char)arg1 ;
-(id)openUserDictionary:(id)arg1 ;
-(id)dictionaryInfo:(id)arg1 ;
-(char)isWord:(id)arg1 inDictionaries:(id)arg2 caseSensitive:(char)arg3 ;
-(id)autocorrectionDictionaryForLanguage:(id)arg1 isGerman:(char*)arg2 ;
-(id)correctionForString:(id)arg1 language:(id)arg2 ;
-(id)checkString:(id)arg1 offset:(unsigned long long)arg2 types:(unsigned long long)arg3 options:(id)arg4 orthography:(id)arg5 wordCount:(long long*)arg6 ;
-(id)checkString:(id)arg1 offset:(unsigned long long)arg2 types:(unsigned long long)arg3 options:(id)arg4 orthography:(id)arg5 learnedDictionaries:(id)arg6 wordCount:(long long*)arg7 ;
-(char)registerLanguage:(id)arg1 byVendor:(id)arg2 ;
-(void)normalizeUserDictionary:(id)arg1 ;
-(long long)sizeOfDictionary:(id)arg1 ;
-(char)isWordInUserDictionaries:(id)arg1 caseSensitive:(char)arg2 ;
-(void)setDelegate:(id<NSSpellServerDelegate>)arg1 ;
-(id<NSSpellServerDelegate>)delegate;
-(void)run;
-(char)_isWord:(nO@)arg1 inDictionary:(nO@)arg2 ;
-(char)_learnWord:(nO@)arg1 inDictionary:(nO@)arg2 ;
-(char)_forgetWord:(nO@)arg1 inDictionary:(nO@)arg2 ;
-(oneway void)_invalidateDictionary:(nO@)arg1 newTime:(nq)arg2 ;
-(char)_appendWord:(nO@)arg1 toDictionary:(nO@)arg2 ;
-(bycopy id)_wordsInDictionary:(nO@)arg1 ;
-(oneway void)_setWords:(nO@)arg1 inDictionary:(nO@)arg2 ;
-(bycopy id)_suggestGuessesForWordRange:(NSRange)arg1 inString:(nO@)arg2 language:(nO@)arg3 options:(nO@)arg4 ;
-(bycopy id)_suggestGuessesForWordRange:(NSRange)arg1 inString:(nO@)arg2 language:(nO@)arg3 ;
-(bycopy id)_stringForInputString:(nO@)arg1 language:(nO@)arg2 ;
-(bycopy id)_alternativesForPinyinInputString:(nO@)arg1 language:(nO@)arg2 ;
-(NSRange)_checkGrammarInString:(n@)arg1 language:(nO@)arg2 details:(bycopy out id*)arg3 ;
-(NSRange)_findMisspelledWordInString:(n@)arg1 language:(nO@)arg2 learnedDictionaries:(nO@)arg3 wordCount:(out long long*)arg4 countOnly:(nc)arg5 ;
-(bycopy id)_dataFromCheckingString:(n@)arg1 offset:(nQ)arg2 types:(nQ)arg3 options:(nO@)arg4 orthography:(nO@)arg5 learnedDictionaries:(nO@)arg6 wordCount:(out long long*)arg7 ;
-(oneway void)_recordResponse:(nQ)arg1 toCorrection:(nO@)arg2 forWord:(nO@)arg3 language:(nO@)arg4 ;
-(bycopy id)_suggestCompletionsForPartialWordRange:(NSRange)arg1 inString:(nO@)arg2 language:(nO@)arg3 options:(nO@)arg4 ;
-(bycopy id)_suggestCompletionsForPartialWordRange:(NSRange)arg1 inString:(nO@)arg2 language:(nO@)arg3 ;
-(bycopy id)_suggestCompletionDictionariesForPartialWordRange:(NSRange)arg1 inString:(nO@)arg2 language:(nO@)arg3 options:(nO@)arg4 ;
-(bycopy id)_suggestCompletionDictionariesForPartialWordRange:(NSRange)arg1 inString:(nO@)arg2 language:(nO@)arg3 ;
-(bycopy id)_suggestNextLetterDictionariesForPartialWordRange:(NSRange)arg1 inString:(nO@)arg2 language:(nO@)arg3 options:(nO@)arg4 ;
-(bycopy id)_suggestNextLetterDictionariesForPartialWordRange:(NSRange)arg1 inString:(nO@)arg2 language:(nO@)arg3 ;
-(void)_normalizeUserDictionary:(id)arg1 ;
-(bycopy id)_checkString:(n@)arg1 offset:(nQ)arg2 types:(nQ)arg3 options:(nO@)arg4 orthography:(nO@)arg5 learnedDictionaries:(nO@)arg6 wordCount:(out long long*)arg7 ;
-(bycopy id)_dataFromCheckingString:(n@)arg1 offset:(nQ)arg2 types:(nQ)arg3 options:(nO@)arg4 orthographyData:(nO@)arg5 learnedDictionaries:(nO@)arg6 wordCount:(out long long*)arg7 ;
-(bycopy id)_unkeyedDataFromCheckingString:(n@)arg1 offset:(nQ)arg2 types:(nQ)arg3 options:(nO@)arg4 orthography:(nO@)arg5 learnedDictionaries:(nO@)arg6 wordCount:(out long long*)arg7 ;
-(bycopy id)_unkeyedDataFromCheckingString:(n@)arg1 offset:(nQ)arg2 types:(nQ)arg3 options:(nO@)arg4 orthographyData:(nO@)arg5 learnedDictionaries:(nO@)arg6 wordCount:(out long long*)arg7 ;
-(bycopy id)_suggestGuessesForWord:(nO@)arg1 inLanguage:(nO@)arg2 ;
-(bycopy id)_extendedAlternativesForPinyinInputString:(nO@)arg1 language:(nO@)arg2 ;
-(bycopy id)_prefixesForPinyinInputString:(nO@)arg1 language:(nO@)arg2 ;
@end
