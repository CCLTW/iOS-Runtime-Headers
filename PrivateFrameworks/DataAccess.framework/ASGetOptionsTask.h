/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSArray;

@interface ASGetOptionsTask : ASTask {
    NSArray *_commandArray;
    NSArray *_versionArray;
}

+ (void)__setUsePort:(BOOL)arg1;

- (BOOL)_shouldSendAuthForRequest:(id)arg1;
- (id)_url;
- (id)commandArray;
- (int)commandCode;
- (int)connectionActionForResponse:(id)arg1;
- (void)dealloc;
- (BOOL)expectsWBXML;
- (void)finishWithError:(id)arg1;
- (id)httpMethod;
- (BOOL)processContext:(id)arg1;
- (id)requestBody;
- (BOOL)requiresEASVersionInformaton;
- (void)setCommandArray:(id)arg1;
- (void)setVersionArray:(id)arg1;
- (id)versionArray;

@end