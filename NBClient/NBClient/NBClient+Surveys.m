//
//  NBClient+Surveys.m
//  NBClient
//
//  Created by Tom Longo on 22/10/2015.
//  Copyright © 2015 NationBuilder. All rights reserved.
//

#import "NBClient+Surveys.h"
#import "NBClient_Internal.h"

#import "FoundationAdditions.h"
#import "NBPaginationInfo.h"

@implementation NBClient (Surveys)

- (NSURLSessionDataTask *)createSurveyResponseWithParameters:(NSDictionary *)parameters
                                           completionHandler:(NBClientResourceItemCompletionHandler)completionHandler {
    NSURLComponents *components = [self.baseURLComponents copy];
    components.path = [components.path stringByAppendingString:@"/survey_responses"];
    return [self baseCreateTaskWithURL:components.URL parameters:@{ @"survey_response": parameters } resultsKey:@"survey_response" completionHandler:completionHandler];
}

@end
