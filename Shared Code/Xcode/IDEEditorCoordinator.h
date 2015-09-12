//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk.sdk
//

#include "Shared.h"

@interface IDEEditorCoordinator : NSObject
{
}

+ (void)_performBlockInsideReentrantGuard:(CDUnknownBlockType)arg1;
+ (id)menuCommandTitleAdditionForEventBehavior:(int)arg1 fromPrimaryEditorContext:(BOOL)arg2;
+ (void)_setShouldActivateNewTabsAndWindows:(BOOL)arg1;
+ (BOOL)_shouldActivateNewTabsAndWindows;
+ (int)_defaultTargetForEventBehavior:(int)arg1;
+ (void)_setDefaultTarget:(int)arg1 forEventBehavior:(int)arg2;
+ (BOOL)_getTarget:(int *)arg1 forDefaultsValue:(id)arg2;
+ (id)_defaultsValueForTarget:(int)arg1;
+ (id)_defaultsKeyForEventBehavior:(int)arg1;
+ (int)_eventBehaviorForEventType:(unsigned long long)arg1;
+ (void)_openNavigationHUDSelection:(id)arg1 forWorkspaceDocument:(id)arg2 documentURL:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (void)openEditorHistoryItem:(id)arg1 forEditor:(id)arg2 takeFocus:(int)arg3;
+ (id)openEditorOpenSpecifier:(id)arg1 forEditor:(id)arg2 eventType:(unsigned long long)arg3;
+ (void)_openEditorOpenSpecifierInNavigationHUD:(id)arg1 forWorkspaceTabController:(id)arg2;
+ (void)_openEditorOpenSpecifierInNewTab:(id)arg1 forWorkspaceTabController:(id)arg2;
+ (void)_openEditorOpenSpecifierInNewWindow:(id)arg1 forWorkspaceTabController:(id)arg2;
+ (id)_openEditorOpenSpecifier:(id)arg1 forEditor:(id)arg2 eventBehavior:(int)arg3;
+ (id)openEditorOpenSpecifier:(id)arg1 forWorkspaceTabController:(id)arg2 eventType:(unsigned long long)arg3;
+ (void)_openEditorOpenSpecifier:(id)arg1 forWorkspaceTabController:(id)arg2 target:(int)arg3 takeFocus:(int)arg4;
+ (id)_openEditorOpenSpecifier:(id)arg1 forWorkspaceTabController:(id)arg2 eventType:(unsigned long long)arg3 takeFocus:(int)arg4;
+ (id)_openEditorOpenSpecifier:(id)arg1 forEditor:(id)arg2 eventType:(unsigned long long)arg3 takeFocus:(int)arg4;
+ (BOOL)_shouldAlwaysOpenInRequestingEditorContext:(id)arg1;
+ (id)_openEditorOpenSpecifier:(id)arg1 forWorkspaceTabController:(id)arg2 eventBehavior:(int)arg3 takeFocus:(int)arg4;
+ (id)_openRequestForEditorOpenSpecifier:(id)arg1 editorContext:(id)arg2 eventBehavior:(int)arg3 takeFocus:(int)arg4;
+ (id)_openRequestForEditorOpenSpecifier:(id)arg1 workspaceTabController:(id)arg2 editorContext:(id)arg3 eventBehavior:(int)arg4 takeFocus:(int)arg5;
+ (void)_doOpenEditorHistoryItem:(id)arg1 forEditorContext:(id)arg2 eventBehavior:(int)arg3 takeFocus:(int)arg4;
+ (void)_doOpenEditorOpenSpecifier:(id)arg1 forWorkspaceTabController:(id)arg2 editorContext:(id)arg3 target:(int)arg4 takeFocus:(int)arg5;
+ (void)_doOpenWithWorkspaceTabController:(id)arg1 editorContext:(id)arg2 target:(int)arg3 allowFallback:(BOOL)arg4 documentURL:(id)arg5 usingBlock:(CDUnknownBlockType)arg6;
+ (void)_doOpenIn_SeparateWindow_withWorkspaceTabController:(id)arg1 documentURL:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)_doOpenIn_NewWindow_withWorkspaceTabController:(id)arg1 documentURL:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)_doOpenIn_SeparateTab_withWorkspaceTabController:(id)arg1 documentURL:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)_doOpenIn_SeparateEditor_withWorkspaceTabController:(id)arg1 documentURL:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (id)_layoutTreeNodeInTree:(id)arg1 withDocumentURL:(id)arg2 shouldMatchPrimaryEditorContext:(BOOL)arg3 shouldMatchGeniusEditorContexts:(BOOL)arg4;
+ (void)_doOpenIn_NewTab_withWorkspaceWindowController:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)_doOpenIn_NewEditor_withWorkspaceTabController:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)_doOpenIn_AdjacentEditor_withWorkspaceTabController:(id)arg1 editorContext:(id)arg2 documentURL:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (void)_doOpenIn_Ask_withWorkspaceTabController:(id)arg1 editorContext:(id)arg2 documentURL:(id)arg3 initialSelection:(id)arg4 options:(id)arg5 usingBlock:(CDUnknownBlockType)arg6;
+ (id)openingEditorPerformanceMetric;
+ (double)doubleClickDelay;
+ (void)setAccessibilityActionIsInProgress:(BOOL)arg1;
+ (void)initialize;

@end

