//
//  NBClient+Lists.h
//  FieldEdge
//
//  Created by Tom Longo on 20/07/2015.
//  Copyright (c) 2015 Web Edge. All rights reserved.
//

#import "NBClient.h"

@interface NBClient (Lists)

- (nonnull NSURLSessionDataTask *)fetchListsWithPaginationInfo:(nonnull NBPaginationInfo *)paginationInfo
                                     completionHandler:(nonnull NBClientResourceListCompletionHandler)completionHandler;

- (nonnull NSURLSessionDataTask *)fetchListOfPeopleByIdentifier:(NSUInteger)identifier
                                     withPaginationInfo:(nonnull NBPaginationInfo *)paginationInfo
                                      completionHandler:(nonnull NBClientResourceListCompletionHandler)completionHandler;

- (nonnull NSURLSessionDataTask *)addPeopleListByIdentifier:(NSUInteger)identifier
                                                  withPeopleIdentifiers:(nonnull NSArray *)peopleIdentifiers
                                                    completionHandler:(nonnull NBClientResourceItemCompletionHandler)completionHandler;



@end
