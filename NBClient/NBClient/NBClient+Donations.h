//
//  NBClient+Donations.h
//  FieldEdge
//
//  Created by Tom Longo on 16/07/2015.
//  Copyright (c) 2015 Web Edge. All rights reserved.
//

#import "NBClient.h"

@interface NBClient (Donations)

// POST /donations
- (NSURLSessionDataTask *)createDonationWithParameters:(NSDictionary *)parameters
                                   completionHandler:(NBClientResourceItemCompletionHandler)completionHandler;


@end
