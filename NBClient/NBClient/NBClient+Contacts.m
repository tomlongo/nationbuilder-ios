//
//  NBClient+Contacts.m
//  FieldEdge
//
//  Created by Tom Longo on 16/07/2015.
//  Copyright (c) 2015 Web Edge. All rights reserved.
//

#import "NBClient+Contacts.h"
#import "NBClient_Internal.h"

#import "FoundationAdditions.h"
#import "NBPaginationInfo.h"

@implementation NBClient (Contacts)

- (NSURLSessionDataTask *)fetchContactTypesWithPaginationInfo:(NBPaginationInfo *)paginationInfo
                                            completionHandler:(NBClientResourceListCompletionHandler)completionHandler {
    NSURLComponents *components = [self.baseURLComponents copy];
    components.path = [components.path stringByAppendingString:@"/settings/contact_types"];
    return [self baseFetchTaskWithURLComponents:components resultsKey:@"results" paginationInfo:paginationInfo completionHandler:completionHandler];
}

- (NSURLSessionDataTask *)fetchContactMethods:(void (^)(NSArray *items, NSError *error))completionHandler {
    NSURLComponents *components = [self.baseURLComponents copy];
    components.path = [components.path stringByAppendingString:@"/settings/contact_methods"];
    return [self baseFetchTaskWithURLComponents:components resultsKey:@"results" paginationInfo:nil completionHandler:^(NSArray *items, NBPaginationInfo *paginationInfo, NSError *error) {
        if(completionHandler) completionHandler(items, error);
    }];
}

- (NSURLSessionDataTask *)fetchContactStatuses:(void (^)(NSArray *items, NSError *error))completionHandler {
    NSURLComponents *components = [self.baseURLComponents copy];
    components.path = [components.path stringByAppendingString:@"/settings/contact_statuses"];
    return [self baseFetchTaskWithURLComponents:components resultsKey:@"results" paginationInfo:nil completionHandler:^(NSArray *items, NBPaginationInfo *paginationInfo, NSError *error) {
        if(completionHandler) completionHandler(items, error);
    }];
}

- (NSURLSessionDataTask *)createContactByIdentifier:(NSUInteger)identifier
                                     withParameters:(NSDictionary *)parameters
                                     completionHandler:(NBClientResourceItemCompletionHandler)completionHandler {
    NSURLComponents *components = [self.baseURLComponents copy];
    components.path = [components.path stringByAppendingString:
                       [NSString stringWithFormat:@"/people/%lu/contacts", (unsigned long)identifier]];
    return [self baseCreateTaskWithURL:components.URL parameters:@{ @"contact": parameters } resultsKey:@"contact" completionHandler:completionHandler];
}

@end
