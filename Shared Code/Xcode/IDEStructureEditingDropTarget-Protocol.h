//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk.sdk
//

@class DVTFilePath, IDENavigableItem, IDEStructureEditingAssistantContext;

@protocol IDEStructureEditingDropTarget <NSObject>
- (IDENavigableItem *)actualNavigableItem;
- (long long)actualChildIndex;
- (BOOL)structureEditingAcceptInsertionOfSubitemsForContext:(IDEStructureEditingAssistantContext *)arg1;
- (BOOL)structureEditingValidateInsertionOfSubitemsForContext:(IDEStructureEditingAssistantContext *)arg1;
- (IDEStructureEditingAssistantContext *)insertSubitemsAssistantContext;

@optional
- (DVTFilePath *)structureEditingNaturalFilePathForDropTarget;
@end

