//
//  NBClient+People.h
//  NBClient
//
//  Copyright (c) 2014-2015 NationBuilder. All rights reserved.
//

#import "NBClient.h"

@interface NBClient (People)

/**
 People
 
 The endpoint annotations are for reference only to link to the API docs and may
 change independently of the method selectors below.
 
 The order of the methods listing attempts to mirror that of apiexplorer.nationbuilder.com.
 */

// GET /people
- (nonnull NSURLSessionDataTask *)fetchPeopleWithPaginationInfo:(nullable NBPaginationInfo *)paginationInfo
                                              completionHandler:(nonnull NBClientResourceListCompletionHandler)completionHandler;
// GET /people/:id
- (nonnull NSURLSessionDataTask *)fetchPersonByIdentifier:(NSUInteger)identifier
                                    withCompletionHandler:(nonnull NBClientResourceItemCompletionHandler)completionHandler;
// GET /people/search
- (nonnull NSURLSessionDataTask *)fetchPeopleByParameters:(nonnull NSDictionary *)parameters
                                       withPaginationInfo:(nullable NBPaginationInfo *)paginationInfo
                                        completionHandler:(nonnull NBClientResourceListCompletionHandler)completionHandler;
// GET /people/nearby
- (nonnull NSURLSessionDataTask *)fetchPeopleNearbyByLocationInfo:(nonnull NSDictionary *)locationInfo
                                               withPaginationInfo:(nullable NBPaginationInfo *)paginationInfo
                                                completionHandler:(nonnull NBClientResourceListCompletionHandler)completionHandler;
// GET /people/me
- (nonnull NSURLSessionDataTask *)fetchPersonForClientUserWithCompletionHandler:(nonnull NBClientResourceItemCompletionHandler)completionHandler;
// GET /people/:id/register
- (nonnull NSURLSessionDataTask *)registerPersonByIdentifier:(NSUInteger)identifier
                                       withCompletionHandler:(nonnull NBClientResourceItemCompletionHandler)completionHandler;
// GET /people/match
- (nonnull NSURLSessionDataTask *)fetchPersonByParameters:(nonnull NSDictionary *)parameters
                                    withCompletionHandler:(nonnull NBClientResourceItemCompletionHandler)completionHandler;

// GET /people/count
- (nonnull NSURLSessionDataTask *)fetchPeopleCountForClientUserWithCompletionHandler:(nonnull NBClientResourceItemCompletionHandler)completionHandler;

// GET /people/:id/taggings
- (nonnull NSURLSessionDataTask *)fetchPersonTaggingsByIdentifier:(NSUInteger)personIdentifier
                                            withCompletionHandler:(nonnull NBClientResourceListCompletionHandler)completionHandler;
// PUT /people/:id/taggings
- (nonnull NSURLSessionDataTask *)createPersonTaggingByIdentifier:(NSUInteger)personIdentifier
                                                  withTaggingInfo:(nonnull NSDictionary *)taggingInfo
                                                completionHandler:(nonnull NBClientResourceItemCompletionHandler)completionHandler;
- (nonnull NSURLSessionDataTask *)createPersonTaggingsByIdentifier:(NSUInteger)personIdentifier
                                                   withTaggingInfo:(nonnull NSDictionary *)taggingInfo
                                                 completionHandler:(nonnull NBClientResourceListCompletionHandler)completionHandler;
// DELETE /people/:id/taggings/:tag
- (nonnull NSURLSessionDataTask *)deletePersonTaggingsByIdentifier:(NSUInteger)personIdentifier
                                                          tagNames:(nonnull NSArray *)tagNames
                                             withCompletionHandler:(nonnull NBClientResourceItemCompletionHandler)completionHandler;
// GET /people/:id/capitals
- (nonnull NSURLSessionDataTask *)fetchPersonCapitalsByIdentifier:(NSUInteger)personIdentifier
                                               withPaginationInfo:(nullable NBPaginationInfo *)paginationInfo
                                                completionHandler:(nonnull NBClientResourceListCompletionHandler)completionHandler;
// POST /people/:id/capitals
- (nonnull NSURLSessionDataTask *)createPersonCapitalByIdentifier:(NSUInteger)personIdentifier
                                                  withCapitalInfo:(nonnull NSDictionary *)capitalInfo
                                                completionHandler:(nonnull NBClientResourceItemCompletionHandler)completionHandler;
// DELETE /people/:person_id/capitals/:capital_id
- (nonnull NSURLSessionDataTask *)deletePersonCapitalByPersonIdentifier:(NSUInteger)personIdentifier
                                                      capitalIdentifier:(NSUInteger)capitalIdentifier
                                                  withCompletionHandler:(nonnull NBClientResourceItemCompletionHandler)completionHandler;
// POST /people
- (nonnull NSURLSessionDataTask *)createPersonWithParameters:(nonnull NSDictionary *)parameters
                                           completionHandler:(nonnull NBClientResourceItemCompletionHandler)completionHandler;
// PUT /people/:id
- (nonnull NSURLSessionDataTask *)savePersonByIdentifier:(NSUInteger)identifier
                                          withParameters:(nonnull NSDictionary *)parameters
                                       completionHandler:(nonnull NBClientResourceItemCompletionHandler)completionHandler;
// DELETE /people/:id
- (nonnull NSURLSessionDataTask *)deletePersonByIdentifier:(NSUInteger)identifier
                                     withCompletionHandler:(nonnull NBClientResourceItemCompletionHandler)completionHandler;

@end
