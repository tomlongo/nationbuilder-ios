//
//  NBClient+Sites.h
//  NBClient
//
//  Created by Tom Longo on 21/10/2015.
//  Copyright © 2015 NationBuilder. All rights reserved.
//

#import "NBClient.h"

@interface NBClient (Sites)

- (NSURLSessionDataTask *)fetchSitesWithPaginationInfo:(NBPaginationInfo *)paginationInfo
                                     completionHandler:(NBClientResourceListCompletionHandler)completionHandler;

- (NSURLSessionDataTask *)fetchSurveysForSiteWithSlug:(NSString *)slug
                                   withPaginationInfo:(NBPaginationInfo *)paginationInfo
                                    completionHandler:(NBClientResourceListCompletionHandler)completionHandler;

@end
