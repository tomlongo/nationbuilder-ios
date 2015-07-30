//
//  NBClient+Tags.h
//  FieldEdge
//
//  Created by Tom Longo on 21/07/2015.
//  Copyright (c) 2015 Web Edge. All rights reserved.
//

#import "NBClient.h"

@interface NBClient (Tags)

- (NSURLSessionDataTask *)fetchTagsWithPaginationInfo:(NBPaginationInfo *)paginationInfo
                                    completionHandler:(NBClientResourceListCompletionHandler)completionHandler;

- (NSURLSessionDataTask *)fetchPeopleWithTagName:(NSString *)name
                              withPaginationInfo:(NBPaginationInfo *)paginationInfo
                               completionHandler:(NBClientResourceListCompletionHandler)completionHandler;

@end
