//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk.sdk
//

#import "DVTModelObject-Protocol.h"

@class DVTModelObjectGraph;

@interface DVTModelObject : NSObject <DVTModelObject>
{
    DVTModelObjectGraph *_objectGraph;
    id _observationInfo;
    int _retainCount;
}

@property(retain, nonatomic) DVTModelObjectGraph *objectGraph;
- (void)setObservationInfo:(id)arg1;
- (id)observationInfo;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

