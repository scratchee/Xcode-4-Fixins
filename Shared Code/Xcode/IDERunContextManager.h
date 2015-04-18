//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk.sdk
//

#import "Shared.h"

#import "DVTInvalidation-Protocol.h"

@class DVTMapTable, DVTStackBacktrace, IDERunDestination, IDEScheme, IDEWorkspace, NSArray, NSCountedSet, NSMutableArray, NSMutableSet, NSString;

@interface IDERunContextManager : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    NSMutableSet *_customDataStores;
    DVTMapTable *_storeToSpecifierMap;
    DVTMapTable *_storeToUserDataMap;
    NSMutableArray *_runContexts;
    IDEScheme *_activeRunContext;
    IDERunDestination *_activeRunDestination;
    NSMutableArray *_ignoredChangesDevices;
    NSCountedSet *_schemeNameCounts;
    BOOL _bulkChangingBlueprints;
    BOOL _blueprintChangedDuringBulkChanges;
}

+ (BOOL)automaticallyNotifiesObserversOfActiveRunDestination;
+ (BOOL)automaticallyNotifiesObserversOfActiveRunContext;
+ (void)initialize;
@property(readonly) NSCountedSet *schemeNameCounts; // @synthesize schemeNameCounts=_schemeNameCounts;
@property(retain, nonatomic) IDERunDestination *activeRunDestination; // @synthesize activeRunDestination=_activeRunDestination;
@property(retain, nonatomic) IDEScheme *activeRunContext; // @synthesize activeRunContext=_activeRunContext;
@property(readonly) NSArray *runContexts; // @synthesize runContexts=_runContexts;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;

- (void)setActiveRunContext:(id)arg1 andRunDestination:(id)arg2;
- (BOOL)validateActiveRunContext:(id *)arg1 error:(id *)arg2;
- (void)blueprintsDidBulkChange:(id)arg1;
- (void)blueprintsWillBulkChange:(id)arg1;
- (void)blueprintsDidChange:(id)arg1;
- (void)deviceUsabilityDidChange:(id)arg1;
- (void)_invalidateAvailableRunDestinations;
- (void)_invalidateAvailableRunDestinationsForSchemes:(id)arg1;
- (void)_invalidateActiveRunDestination;
- (void)shouldIgnoreDeviceChangesDidEnd:(id)arg1;
- (void)shouldIgnoreDeviceChangesWillBegin:(id)arg1;
- (void)_updateOrderHint:(unsigned long long)arg1 forRunContext:(id)arg2;
- (void)_updateIsShown:(BOOL)arg1 forRunContext:(id)arg2;
- (id)runContextManagementDictionaryForStore:(id)arg1;
- (void)saveRunContextManagementDictionaryForStore:(id)arg1;
- (void)_lookupIsShown:(char *)arg1 orderHint:(unsigned long long *)arg2 forCustomDataStore:(id)arg3 specifier:(id)arg4;
- (id)_contextUserStateForCustomDataStore:(id)arg1 specifier:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)_contextUserStateDictForCustomDataStore:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_contextUserStateKeyForSpecifier:(id)arg1;
- (void)moveRunContext:(id)arg1 toCustomDataStore:(id)arg2 customDataSpecifier:(id)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)deleteRunContexts:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)importRunContextAtURL:(id)arg1 withCustomDataStore:(id)arg2 customDataSpecifier:(id)arg3 orderHint:(unsigned long long)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)duplicateRunContext:(id)arg1 withCustomDataSpecifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)newTransientSchemeWithCustomDataStore:(id)arg1 customDataSpecifier:(id)arg2 orderHint:(unsigned long long)arg3;
- (id)newSchemeWithCustomDataStore:(id)arg1 customDataSpecifier:(id)arg2 orderHint:(unsigned long long)arg3;
- (id)_newSchemeWithCustomDataStore:(id)arg1 customDataSpecifier:(id)arg2 orderHint:(unsigned long long)arg3 schemeCreationBlock:(CDUnknownBlockType)arg4;
- (void)_addContext:(id)arg1 specifierToRunContextMap:(id)arg2;
- (id)_uniqueSpecifierForSpecifier:(id)arg1 inMap:(id)arg2;
- (void)_customDataStoresDidUpdate;
- (void)_finishUpdatingRunContexts;
- (void)_startUpdatingRunContexts;
- (void)_ensureActiveRunContext;
- (void)_restoreActiveRunContextIfPossible;
- (void)_updateMap:(id)arg1 contextForCustomDataStore:(id)arg2 specifier:(id)arg3;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

