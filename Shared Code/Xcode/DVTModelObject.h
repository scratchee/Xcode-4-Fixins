//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk.sdk
//

#include "Shared.h"

#import "DVTModelObject-Protocol.h"

@class DVTModelObjectGraph, NSString;

@interface DVTModelObject : NSObject <DVTModelObject>
{
    int _retainCount;
    DVTModelObjectGraph *_objectGraph;
    id _observationInfo;
}

// - (void).cxx_destruct;
@property(retain, nonatomic) DVTModelObjectGraph *objectGraph;
- (void)setObservationInfo:(id)arg1;
- (id)observationInfo;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

