/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableString : NSString {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)stringWithCapacity:(unsigned int)arg1;

- (void)_ICSEscapeParameterQuotedValue;
- (void)_ICSEscapeParameterValue;
- (void)_ICSEscapePropertyValue;
- (void)_ICSRemoveCharactersFromSet:(id)arg1;
- (void)_ICSStringAppendingParameterName:(id)arg1;
- (void)_ICSStringParameterName:(id)arg1 value:(id)arg2;
- (void)_ICSStripControlChracters;
- (void)_cfAppendCString:(const char *)arg1 length:(int)arg2;
- (void)_cfCapitalize:(const void*)arg1;
- (void)_cfLowercase:(const void*)arg1;
- (void)_cfNormalize:(long)arg1;
- (void)_cfPad:(struct __CFString { }*)arg1 length:(unsigned int)arg2 padIndex:(unsigned int)arg3;
- (void)_cfTrim:(struct __CFString { }*)arg1;
- (void)_cfTrimWS;
- (void)_cfUppercase:(const void*)arg1;
- (void)_removeCharactersFromSet:(struct __CFCharacterSet { }*)arg1;
- (void)_removeOccurrencesOfCharacter:(unsigned long)arg1;
- (void)_replaceOccurrencesOfCharacter:(unsigned long)arg1 withCharacter:(unsigned long)arg2;
- (unsigned int)_replaceOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)_trimWithCharacterSet:(id)arg1;
- (void)addMathIndicators;
- (void)appendCharacter:(unsigned short)arg1;
- (void)appendCharacters:(const unsigned short*)arg1 length:(unsigned int)arg2;
- (void)appendFormat:(id)arg1;
- (void)appendPrettyBOOL:(BOOL)arg1 withName:(id)arg2 andIndent:(int)arg3;
- (void)appendPrettyInt:(int)arg1 withName:(id)arg2 andIndent:(int)arg3;
- (void)appendPrettyObject:(id)arg1 withName:(id)arg2 andIndent:(int)arg3;
- (void)appendSeparator:(id)arg1 format:(id)arg2;
- (void)appendString:(id)arg1;
- (Class)classForCoder;
- (void)dd_appendSpaces:(unsigned int)arg1;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)gqd_insertCharacter:(unsigned short)arg1 atIndex:(unsigned short)arg2;
- (void)indentBy:(unsigned int)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)insertCharacter:(unsigned short)arg1 atIndex:(unsigned int)arg2;
- (void)insertString:(id)arg1 atIndex:(unsigned int)arg2;
- (void)replaceAllSubstr:(id)arg1 with:(id)arg2;
- (void)replaceAllSubstr:(id)arg1 with:(id)arg2 escStr:(id)arg3;
- (void)replaceAllSubstr:(id)arg1 with:(id)arg2 escStr:(id)arg3 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)replaceAllSubstr:(id)arg1 with:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withCString:(const char *)arg2 length:(unsigned int)arg3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withCharacters:(const unsigned short*)arg2 length:(unsigned int)arg3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (void)replaceNewlinesWithSpaces;
- (void)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (void)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (unsigned int)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (BOOL)replaceSubstr:(id)arg1 with:(id)arg2;
- (BOOL)replaceSubstr:(id)arg1 with:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)searchAndReplaceInString:(id)arg1 withString:(id)arg2;
- (void)searchAndReplaceInString:(id)arg1 withString:(id)arg2;
- (void)setString:(id)arg1;
- (void)standardizeWhitespace;
- (void)tsce_appendSpaces:(int)arg1;
- (void)tsce_appendWhitespace:(char *)arg1 startingIndex:(int*)arg2;
- (void)tsce_replaceCharactersInSet:(id)arg1 withString:(id)arg2;
- (void)tsu_appendCharacter:(unsigned short)arg1;
- (void)tsu_appendSeparator:(id)arg1 format:(id)arg2;
- (void)tsu_indentBy:(unsigned int)arg1;
- (void)tsu_insertCharacter:(unsigned short)arg1 atIndex:(unsigned int)arg2;
- (void)tswp_replaceBreaksWithPlainTextVersions;

@end
