//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@class DVTSourceModelItem, NSDictionary, NSString;

@protocol DVTSourceLanguageServiceDelegate <NSObject>
- (long long)syntaxTypeForItem:(DVTSourceModelItem *)arg1 context:(NSDictionary *)arg2;
- (struct _NSRange)currentWordAtIndex:(unsigned long long)arg1;
- (struct _NSRange)characterRangeForLineRange:(struct _NSRange)arg1;
- (struct _NSRange)lineRangeForCharacterRange:(struct _NSRange)arg1;
- (NSString *)string;
@end

