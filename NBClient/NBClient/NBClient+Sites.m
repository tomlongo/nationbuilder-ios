//
//  NBClient+Sites.m
//  NBClient
//
//  Created by Tom Longo on 21/10/2015.
//  Copyright © 2015 NationBuilder. All rights reserved.
//

#import "NBClient+Sites.h"
#import "NBClient_Internal.h"

#import "FoundationAdditions.h"
#import "NBPaginationInfo.h"

@implementation NBClient (Sites)

- (NSURLSessionDataTask *)fetchSitesWithPaginationInfo:(NBPaginationInfo *)paginationInfo
                                     completionHandler:(NBClientResourceListCompletionHandler)completionHandler {
    NSURLComponents *components = [self.baseURLComponents copy];
    components.path = [components.path stringByAppendingString:@"/sites"];
    return [self baseFetchTaskWithURLComponents:components resultsKey:@"results" paginationInfo:paginationInfo completionHandler:completionHandler];
}

@end
