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

- (NSURLSessionDataTask *)fetchSurveysForSiteWithSlug:(NSString *)slug
                                   withPaginationInfo:(NBPaginationInfo *)paginationInfo
                                    completionHandler:(NBClientResourceListCompletionHandler)completionHandler {
    NSURLComponents *components = [self.baseURLComponents copy];
    components.path = [components.path stringByAppendingString:
                       [NSString stringWithFormat:@"/sites/%@/pages/surveys", slug]];
    return [self baseFetchTaskWithURLComponents:components resultsKey:@"results" paginationInfo:paginationInfo completionHandler:completionHandler];
}

- (NSURLSessionDataTask *)createSurveyForSiteWithSlug:(NSString *)slug
                                       withParameters:(NSDictionary *)parameters
                                     completionHandler:(NBClientResourceItemCompletionHandler)completionHandler {
    NSURLComponents *components = [self.baseURLComponents copy];
    components.path = [components.path stringByAppendingString:
                       [NSString stringWithFormat:@"/sites/%@/pages/surveys", slug]];
    return [self baseCreateTaskWithURL:components.URL parameters:@{ @"survey": parameters } resultsKey:@"survey" completionHandler:completionHandler];
}

@end
