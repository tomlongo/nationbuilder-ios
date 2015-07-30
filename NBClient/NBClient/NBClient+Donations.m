//
//  NBClient+Donations.m
//  FieldEdge
//
//  Created by Tom Longo on 16/07/2015.
//  Copyright (c) 2015 Web Edge. All rights reserved.
//

#import "NBClient+Donations.h"
#import "NBClient_Internal.h"

#import "FoundationAdditions.h"
#import "NBPaginationInfo.h"

@implementation NBClient (Donations)

- (NSURLSessionDataTask *)createDonationWithParameters:(NSDictionary *)parameters
                                     completionHandler:(NBClientResourceItemCompletionHandler)completionHandler {
    NSURLComponents *components = [self.baseURLComponents copy];
    components.path = [components.path stringByAppendingString:@"/donations"];
    return [self baseCreateTaskWithURL:components.URL parameters:@{ @"donation": parameters } resultsKey:@"donation" completionHandler:completionHandler];
}

@end
