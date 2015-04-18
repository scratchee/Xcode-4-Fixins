//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk.sdk
//

#import "Shared.h"

#import "DVTEditor-Protocol.h"
#import "DVTInvalidation-Protocol.h"
#import "DVTStatefulObject-Protocol.h"
#import "DVTTabbedWindowControlling-Protocol.h"
#import "IDEEditorAreaContainer-Protocol.h"

@class DVTBarBackground, DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, DVTStateToken, DVTTabBarEnclosureView, DVTWeakInterposer, IDEEditorArea, IDEEditorDocument, IDEToolbarDelegate, IDEWorkspace, IDEWorkspaceTabController, IDEWorkspaceWindow, NSMapTable, NSMutableArray, NSString, NSTabView, NSTimer, _IDEWindowFullScreenSavedDebuggerTransitionValues;

@interface IDEWorkspaceWindowController : NSWindowController <NSWindowDelegate, IDEEditorAreaContainer, DVTStatefulObject, DVTTabbedWindowControlling, DVTEditor, DVTInvalidation>
{
    NSTimer *_springToFrontTimer;
    int _debugSessionState;
    NSMutableArray *_windowsOrderedOutForMiniDebugging;
    struct CGRect _restoreFrame;
    struct CGSize _originalMinSize;
    struct CGPoint _miniRestoreOrigin;
    struct CGSize _collapsedRestoreSize;
    struct CGSize _mediumRestoreSize;
    double _miniWindowBarHeight;
    double _toolbarHeightDelta;
    struct CGSize _contentViewFrozenSize;
    NSMutableArray *_topLevelViewOrder;
    NSMapTable *_viewHeightsForResizing;
    NSMutableArray *_stateChangeObservingTokens;
    IDEEditorDocument *_lastObservedEditorDocument;
    IDEWorkspaceTabController *_activeWorkspaceTabController;
    DVTObservingToken *_toolbarVisibleToken;
    IDEToolbarDelegate *_toolbarDelegate;
    BOOL _showToolbar;
    DVTObservingToken *_workspaceSimpleFilesFocusedObservingToken;
    DVTObservingToken *_workspaceRepresentingFilePathObservingToken;
    DVTObservingToken *_workspaceFinishedLoadingObservingToken;
    DVTObservingToken *_navigationTargetedEditorDocumentObservingToken;
    DVTNotificationToken *_editorDocumentIsEditedNotificationToken;
    DVTObservingToken *_userWantsMiniDebuggingConsoleObservingToken;
    DVTObservingToken *_userWantsAppFocusInMiniDebuggingObservingToken;
    IDEWorkspace *_workspace;
    _IDEWindowFullScreenSavedDebuggerTransitionValues *_fullScreenSavedDebuggerTransitionValues;
    unsigned int _coalescedUpdateMask;
    int _contentViewFrozenMode;
    BOOL _performingCoalescedUpdates;
    BOOL _readyToUpdateKeyboardLoop;
    BOOL _tabBarInTransition;
    BOOL _tabBarShownForTabDrag;
    BOOL _keepTabBarHiddenWhenCreatingTab;
    BOOL _isInMorphingToDebugging;
    BOOL _createdCollapsedRestoreFrame;
    BOOL _createdMediumRestoreFrame;
    BOOL _inTotalCollapsedFrame;
    BOOL _tabBarForcedClosed;
    BOOL _capturedStatesBeforeMiniDebugging;
    BOOL _wasShowingNavigatorBeforeMiniDebugging;
    BOOL _wasShowingUtilitiesBeforeMiniDebugging;
    BOOL _wasShowingEditorBeforeMiniDebugging;
    BOOL _isClosing;
    BOOL _enteringFullScreenMode;
    BOOL _exitingFullScreenMode;
    BOOL _fullScreenTabBarAlwaysVisible;
    BOOL _inMiniDebuggingMode;
    BOOL _createNewTabUponLoadIfNoTabsExist;
    BOOL _didSetupFirstResponderInterposer;
    BOOL _shouldPerformWindowClose;
    DVTTabBarEnclosureView *_tabBarEnclosureView;
    NSTabView *_tabView;
    NSString *_uniqueIdentifier;
    DVTWeakInterposer *_firstResponderInterposer;
    DVTBarBackground *_tabBarView;
    DVTStateToken *_stateToken;
}

+ (id)keyPathsForValuesAffectingUserWantsBreakpointsActivated;
+ (void)initialize;
+ (id)workspaceWindowControllerForWindow:(id)arg1;
+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)workspaceWindowControllers;
@property BOOL shouldPerformWindowClose; // @synthesize shouldPerformWindowClose=_shouldPerformWindowClose;
@property(retain) DVTStateToken *stateToken; // @synthesize stateToken=_stateToken;
@property(retain, nonatomic) DVTBarBackground *tabBarView; // @synthesize tabBarView=_tabBarView;
@property BOOL didSetupFirstResponderInterposer; // @synthesize didSetupFirstResponderInterposer=_didSetupFirstResponderInterposer;
@property(retain) DVTWeakInterposer *firstResponderInterposer; // @synthesize firstResponderInterposer=_firstResponderInterposer;
@property(nonatomic) BOOL showToolbar; // @synthesize showToolbar=_showToolbar;
@property BOOL createNewTabUponLoadIfNoTabsExist; // @synthesize createNewTabUponLoadIfNoTabsExist=_createNewTabUponLoadIfNoTabsExist;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, getter=isInMiniDebuggingMode) BOOL inMiniDebuggingMode; // @synthesize inMiniDebuggingMode=_inMiniDebuggingMode;
@property(retain, nonatomic) NSTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) DVTTabBarEnclosureView *tabBarEnclosureView; // @synthesize tabBarEnclosureView=_tabBarEnclosureView;

- (void)moveFocusToEditor:(id)arg1;
- (void)dicardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)_updateWindowTitle;
- (void)_userWantsMiniDebuggingConsoleChanged;
- (void)_userWantsAppFocusInMiniDebuggingChanged;
- (void)_updateTitleRepresentedPath;
@property BOOL userWantsBreakpointsActivated;
- (void)changeFromDebugSessionState:(int)arg1 to:(int)arg2 fromDebuggingWindowBehavior:(int)arg3 to:(int)arg4;
- (void)_makeWindowLookKeyWhenKey;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)_workaround8217584;
- (BOOL)_isTargetApplicationActive;
- (void)_changeWindowsLevelFrom:(int)arg1 to:(int)arg2;
- (void)_changeFrom:(int)arg1 toNormalOrXcodeBehindDebugging:(int)arg2;
- (void)_changeToMiniDebugging:(int)arg1;
- (void)_morphToMedium:(int)arg1;
- (struct CGRect)_mediumFrame;
- (void)_morphToNonCollapsed:(struct CGRect)arg1 frozenMode:(int)arg2 toolbarHeightDelta:(double)arg3;
- (void)_morphToCollapsed;
- (void)_setInTotalCollapsed:(BOOL)arg1;
- (void)_reSnapshotContentViewToNewFrame:(struct CGRect)arg1 hideTabBarBeforeSnapshot:(BOOL)arg2 toolbarHeightDelta:(double)arg3;
- (void)_createCollapsedRestoreFrame;
- (void)_performSpringToFront;
- (void)_cancelSpringToFront;
- (void)_scheduleSpringToFront;
- (id)_screenForWindow;
- (void)morphingDragImage:(id)arg1 exitedWindow:(id)arg2;
- (void)morphingDragImage:(id)arg1 enteredWindow:(id)arg2;
- (BOOL)morphingDragImage:(id)arg1 performDragOperation:(id)arg2;
- (void)morphingDragImage:(id)arg1 draggingExited:(id)arg2;
- (unsigned long long)morphingDragImage:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)morphingDragImage:(id)arg1 draggingEntered:(id)arg2;
- (void)workspaceWindowWillInvalidateCursorRectsForViewsWithNoTrackingAreas:(id)arg1;
- (void)workspaceWindow:(id)arg1 willInvalidateCursorRectsForView:(id)arg2;
- (BOOL)workspaceWindow:(id)arg1 interceptAddCursorRect:(struct CGRect)arg2 cursor:(id)arg3 forView:(id)arg4;
- (BOOL)workspaceWindow:(id)arg1 interceptSetCursorForMouseLocation:(struct CGPoint)arg2;
- (void)workspaceWindowDidRecalculateKeyViewLoop:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (BOOL)windowShouldZoom:(id)arg1 toFrame:(struct CGRect)arg2;
- (void)_recordRestoreFrame;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)workspaceWindowIsClosing:(id)arg1;
- (void)_pushDefaultPrimaryEditorFrameSizes;
- (BOOL)_isLastWindowControllerOfDocument;
- (void)primitiveInvalidate;
- (void)_prepareBarsToExitFullScreen;
- (void)_prepareBarsToEnterFullScreen;
- (BOOL)isEnteringOrInFullScreenMode;
- (BOOL)isInFullScreenMode;
- (void)synchronizeWindowTitleWithDocumentName;
- (void)_performCloseAll;
- (BOOL)_shouldCloseWindowEvaluatingOtherWindows;
- (void)_closeWindowIfNoTabs;
- (double)tabBarHeight;
- (void)moveTabFromOtherWindow:(id)arg1 toIndex:(unsigned long long)arg2 andSelect:(BOOL)arg3;
- (void)replaceEmptyTabWithTabs:(id)arg1;
- (void)_closeOtherTabsWithoutConfirming:(id)arg1;
- (void)closeTabOrWindow:(id)arg1;
- (void)_closeTabWithoutConfirming:(id)arg1;
- (void)_closeTabWithoutConfirming:(id)arg1 andInvalidate:(BOOL)arg2;
- (void)closeTab:(id)arg1;
- (id)_findTabForView:(id)arg1;
- (void)selectTab:(id)arg1;
- (BOOL)_moreThanOneTabShowing;
- (BOOL)closeKeyEquivalentClosesTab;
- (id)_createTabWithViewController:(id)arg1 atIndex:(unsigned long long)arg2 andShow:(BOOL)arg3;
- (void)_toggleTabBarWithAnimation:(BOOL)arg1 isShowing:(BOOL)arg2 forceMaintainFullHeight:(BOOL)arg3;
- (void)_toggleTabBarWithAnimation:(BOOL)arg1 isShowing:(BOOL)arg2;
- (id)_setAutoresizingMasksForOrderedViews:(id)arg1 toResizeOnly:(id)arg2;
- (void)_collectViewInfoForResizing;
- (void)_updateAuxiliaryToolbarViewSizes;
- (double)_originalHeightForView:(id)arg1;
- (id)showTabNamed:(id)arg1;
- (id)_showTab:(id)arg1;
- (void)_moveTabToNewWindow:(id)arg1;
- (id)_setUpTabForViewController:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_setUpTabForViewController:(id)arg1 addToRightSide:(BOOL)arg2;
- (id)_setUpTabForViewController:(id)arg1;
- (id)createTabWithViewController:(id)arg1 andShow:(BOOL)arg2 addToRightSide:(BOOL)arg3;
- (id)createInactiveTabWithFrameName:(id)arg1;
- (id)createInactiveTab;
- (id)createTabWithFrameName:(id)arg1 andShow:(BOOL)arg2 addToRightSide:(BOOL)arg3;
- (id)instantiateTabControllerAndRegisterForStateSavingWithName:(id)arg1 inDocument:(id)arg2;
- (id)createTabWithFrameName:(id)arg1;
- (id)createTab;
- (unsigned long long)selectedTabIndex;
- (void)closeTabFromMenu:(id)arg1;
- (id)selectedTab;
- (id)orderedTabViewItems;
- (void)cancelUpdateTabTitlesSoon;
- (void)_performCoalescedUpdates;
- (void)_cancelCoalescedUpdate:(int)arg1;
- (void)_performCoalescedUpdateSoon:(int)arg1;
- (void)tabBarViewUpdateTabTitlesNow;
- (void)tabBarViewUpdateTabTitlesSoon;
- (BOOL)canCreateNewTab;
- (void)_showTabBarIfNeeded;
- (void)_automaticallyHideTabBarForTabDrag;
- (void)_automaticallyShowTabBarForTabDrag;
- (void)_setTabBarVisible:(BOOL)arg1;
- (BOOL)_alwaysShowTabBar;
- (BOOL)canCloseSelectedTab;
- (BOOL)_canCloseTab:(id)arg1;
- (void)toggleTabBar:(id)arg1;
- (void)selectPreviousTab:(id)arg1;
- (void)selectNextTab:(id)arg1;
- (void)_selectNextTabGoingForward:(BOOL)arg1;
- (void)moveTabToNewWindowFromMenu:(id)arg1;
- (void)closeOtherTabs:(id)arg1;
- (void)closeOtherTabsFromMenu:(id)arg1;
- (void)closeCurrentTab:(id)arg1;
- (id)_newTabWithName:(id)arg1 cloneExisting:(BOOL)arg2 andShow:(BOOL)arg3 withInstalledTabControllerBlock:(CDUnknownBlockType)arg4;
- (id)newTabWithName:(id)arg1 cloneExisting:(BOOL)arg2;
- (void)newTabWithinWindow:(id)arg1;
- (void)newTab:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)canCloseOtherTabs;
- (struct CGRect)adjustedFrameForCascade:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGRect)adjustedFrameForSaving:(struct CGRect)arg1;
- (BOOL)_windowIsFullHeight;
- (void)setTabBarVisible:(BOOL)arg1;
- (BOOL)isTabBarVisible;
- (void)_toggleTabBarWithAnimation:(BOOL)arg1;
- (BOOL)_shouldShowTabBar;
- (BOOL)canReceiveDragFromTabbedWindowControlling:(id)arg1;
- (void)_setUpTabBar;
- (void)autocreateContexts:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (BOOL)window:(id)arg1 shouldRestoreStateForResponder:(id)arg2;
@property(readonly) IDEWorkspaceWindow *workspaceWindow;
- (id)_uniqueNameForNewWorkspaceTabController;
@property(readonly) IDEEditorArea *editorArea;
- (void)activateWorkspaceTabController:(id)arg1;
@property(readonly) IDEWorkspaceTabController *activeWorkspaceTabController;
- (void)_didChangeActiveWorkspaceTabController;
- (id)workspaceTabControllers;
- (void)setStateSavingWindowFrame:(id)arg1;
- (id)stateSavingWindowFrame;
- (void)commitStateToDictionary:(id)arg1;
- (void)_configureStateSavingObservers;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_revertForNewWindowWithTabStateContext:(id)arg1 documentURL:(id)arg2 simpleEditorWindowLayout:(BOOL)arg3;
- (void)_changeSizeForSimpleEditorWindowLayoutWithEditorDocumentURLOrNil:(id)arg1 forSingleFile:(BOOL)arg2 workspaceTabController:(id)arg3;
- (void)_updateToolbarIsVisible;
- (void)toggleToolbarShown:(id)arg1;
- (void)windowDidLoad;
- (void)_showWindowBehindWorkspaceWindow:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

