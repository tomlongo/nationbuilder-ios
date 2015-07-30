//
//  NBClient+Lists.h
//  FieldEdge
//
//  Created by Tom Longo on 20/07/2015.
//  Copyright (c) 2015 Web Edge. All rights reserved.
//

#import "NBClient.h"

@interface NBClient (Lists)

- (NSURLSessionDataTask *)fetchListsWithPaginationInfo:(NBPaginationInfo *)paginationInfo
                                     completionHandler:(NBClientResourceListCompletionHandler)completionHandler;

- (NSURLSessionDataTask *)fetchListOfPeopleByIdentifier:(NSUInteger)identifier
                                     withPaginationInfo:(NBPaginationInfo *)paginationInfo
                                      completionHandler:(NBClientResourceListCompletionHandler)completionHandler;


@end
