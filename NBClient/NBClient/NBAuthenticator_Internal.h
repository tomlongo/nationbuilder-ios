//
//  NBAuthenticator_Internal.h
//  NBClient
//
//  Copyright (c) 2014-2015 NationBuilder. All rights reserved.
//

#import "NBAuthenticator.h"

@interface NBAuthenticator ()

@property (nonatomic, readwrite, nonnull) NSURL *baseURL;
@property (nonatomic, readwrite, nonnull) NSString *clientIdentifier;
@property (nonatomic, readwrite, nullable) NBAuthenticationCredential *credential;

// #token-flow
@property (nonatomic, strong, nullable) NBAuthenticationCompletionHandler currentInBrowserAuthenticationCompletionHandler;
@property (nonatomic) BOOL currentlyNeedsPriorSignout;

- (nullable NSURLSessionDataTask *)authenticateWithSubPath:(nonnull NSString *)subPath
                                                parameters:(nonnull NSDictionary *)parameters
                                         completionHandler:(nonnull NBAuthenticationCompletionHandler)completionHandler;

// #token-flow
- (void)authenticateInWebBrowserWithURL:(nonnull NSURL *)url
                      completionHandler:(nonnull NBAuthenticationCompletionHandler)completionHandler;
- (void)finishAuthenticatingInWebBrowserWithNotification:(nonnull NSNotification *)notification;

- (nonnull NSURLSessionDataTask *)authenticationDataTaskWithURL:(nonnull NSURL *)url
                                              completionHandler:(nullable NBAuthenticationCompletionHandler)completionHandler;

@end

@interface NBAuthenticationCredential ()

@property (nonatomic, copy, readwrite, nonnull) NSString *accessToken;
@property (nonatomic, copy, readwrite, nullable) NSString *tokenType;

+ (nonnull NSMutableDictionary *)baseKeychainQueryDictionaryWithIdentifier:(nonnull NSString *)identifier;

@end
