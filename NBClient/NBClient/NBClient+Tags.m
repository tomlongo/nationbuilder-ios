//
//  NBClient+Tags.m
//  FieldEdge
//
//  Created by Tom Longo on 21/07/2015.
//  Copyright (c) 2015 Web Edge. All rights reserved.
//

#import "NBClient+Tags.h"
#import "NBClient_Internal.h"

#import "FoundationAdditions.h"
#import "NBPaginationInfo.h"

@implementation NBClient (Tags)

- (NSURLSessionDataTask *)fetchTagsWithPaginationInfo:(NBPaginationInfo *)paginationInfo
                                    completionHandler:(NBClientResourceListCompletionHandler)completionHandler {
    NSURLComponents *components = [self.baseURLComponents copy];
    components.path = [components.path stringByAppendingString:@"/tags"];
    return [self baseFetchTaskWithURLComponents:components resultsKey:@"results" paginationInfo:paginationInfo completionHandler:completionHandler];
}

- (NSURLSessionDataTask *)fetchPeopleWithTagName:(NSString *)name
                              withPaginationInfo:(NBPaginationInfo *)paginationInfo
                               completionHandler:(NBClientResourceListCompletionHandler)completionHandler {
    NSURLComponents *components = [self.baseURLComponents copy];
    components.path = [components.path stringByAppendingString:
                       [NSString stringWithFormat:@"/tags/%@/people", name]];
    return [self baseFetchTaskWithURLComponents:components resultsKey:@"results" paginationInfo:paginationInfo completionHandler:completionHandler];
}

@end
