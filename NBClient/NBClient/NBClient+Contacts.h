//
//  NBClient+Contacts.h
//  FieldEdge
//
//  Created by Tom Longo on 16/07/2015.
//  Copyright (c) 2015 Web Edge. All rights reserved.
//

#import "NBClient.h"

@interface NBClient (Contacts)

- (NSURLSessionDataTask *)fetchContactTypesWithPaginationInfo:(NBPaginationInfo *)paginationInfo
                                            completionHandler:(NBClientResourceListCompletionHandler)completionHandler;

- (NSURLSessionDataTask *)createContactByIdentifier:(NSUInteger)identifier
                                     withParameters:(NSDictionary *)parameters
                                  completionHandler:(NBClientResourceItemCompletionHandler)completionHandler;

- (NSURLSessionDataTask *)fetchContactMethods:(void (^)(NSArray *items, NSError *error))completionHandler;

- (NSURLSessionDataTask *)fetchContactStatuses:(void (^)(NSArray *items, NSError *error))completionHandler;

@end
