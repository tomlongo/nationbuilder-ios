//
//  NBClient+Surveys.h
//  NBClient
//
//  Created by Tom Longo on 22/10/2015.
//  Copyright © 2015 NationBuilder. All rights reserved.
//

#import "NBClient.h"

@interface NBClient (Surveys)

- (NSURLSessionDataTask *)createSurveyResponseWithParameters:(NSDictionary *)parameters
                                           completionHandler:(NBClientResourceItemCompletionHandler)completionHandler;

@end
