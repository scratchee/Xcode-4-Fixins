//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk.sdk
//


@class DVTFindPattern;
@protocol DVTFindPatternField;

@protocol DVTFindPatternManager <NSObject>
- (id <DVTFindPatternField>)replaceFieldForField:(id <DVTFindPatternField>)arg1;
- (id <DVTFindPatternField>)findFieldForField:(id <DVTFindPatternField>)arg1;

@optional
- (BOOL)supportsPatterns;
- (void)findPatternField:(id <DVTFindPatternField>)arg1 findPatternDoubleClicked:(DVTFindPattern *)arg2;
@end

