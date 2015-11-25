//
//  NBClient+Lists.m
//  FieldEdge
//
//  Created by Tom Longo on 20/07/2015.
//  Copyright (c) 2015 Web Edge. All rights reserved.
//

#import "NBClient+Lists.h"
#import "NBClient_Internal.h"

#import "FoundationAdditions.h"
#import "NBPaginationInfo.h"

@implementation NBClient (Lists)

- (NSURLSessionDataTask *)fetchListsWithPaginationInfo:(NBPaginationInfo *)paginationInfo
                                      completionHandler:(NBClientResourceListCompletionHandler)completionHandler {
    NSURLComponents *components = [self.baseURLComponents copy];
    components.path = [components.path stringByAppendingString:@"/lists"];
    return [self baseFetchTaskWithURLComponents:components resultsKey:@"results" paginationInfo:paginationInfo completionHandler:completionHandler];
}

- (NSURLSessionDataTask *)fetchListOfPeopleByIdentifier:(NSUInteger)identifier
                                     withPaginationInfo:(NBPaginationInfo *)paginationInfo
                                      completionHandler:(NBClientResourceListCompletionHandler)completionHandler {
    NSURLComponents *components = [self.baseURLComponents copy];
    components.path = [components.path stringByAppendingString:
                       [NSString stringWithFormat:@"/lists/%lu/people", (unsigned long)identifier]];
    return [self baseFetchTaskWithURLComponents:components resultsKey:@"results" paginationInfo:paginationInfo completionHandler:completionHandler];
}

- (NSURLSessionDataTask *)addPeopleListByIdentifier:(NSUInteger)identifier
                                      withPeopleIdentifiers:(nonnull NSArray *)peopleIdentifiers
                                          completionHandler:(nonnull NBClientResourceItemCompletionHandler)completionHandler {
    NSURLComponents *components = [self.baseURLComponents copy];
    components.path = [components.path stringByAppendingString:
                       [NSString stringWithFormat:@"/lists/%lu/people", (unsigned long)identifier]];
    return [self baseCreateTaskWithURL:components.URL parameters:@{ @"people_ids": peopleIdentifiers } resultsKey:@"results" completionHandler:completionHandler];

}

@end
