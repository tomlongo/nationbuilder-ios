//
//  FoundationAdditions.h
//  NBClient
//
//  Copyright (c) 2014-2015 NationBuilder. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSIndexSet (NBAdditions)

+ (nonnull NSIndexSet *)nb_indexSetOfSuccessfulHTTPStatusCodes;
+ (nonnull NSIndexSet *)nb_indexSetOfSuccessfulEmptyResponseHTTPStatusCodes;

@end

@interface NSDictionary (NBAdditions)

- (BOOL)nb_containsDictionary:(nonnull NSDictionary *)dictionary;

- (BOOL)nb_isEquivalentToDictionary:(nonnull NSDictionary *)dictionary;

- (nonnull NSString *)nb_queryString;

- (nonnull NSString *)nb_queryStringWithEncoding:(NSStringEncoding)stringEncoding
                     skipPercentEncodingPairKeys:(nullable NSSet *)skipPairKeys
                      charactersToLeaveUnescaped:(nullable NSString *)charactersToLeaveUnescaped;

@end

@interface NSString (NBAdditions)

- (nonnull NSDictionary *)nb_queryStringParameters;

- (nonnull NSDictionary *)nb_queryStringParametersWithEncoding:(NSStringEncoding)stringEncoding;

- (nonnull NSString *)nb_percentEscapedQueryStringWithEncoding:(NSStringEncoding)stringEncoding
                                    charactersToLeaveUnescaped:(nullable NSString *)charactersToLeaveUnescaped;

- (nonnull NSString *)nb_percentUnescapedQueryStringWithEncoding:(NSStringEncoding)stringEncoding
                                        charactersToLeaveEscaped:(nullable NSString *)charactersToLeaveEscaped;

- (nonnull NSString *)nb_localizedString;

- (BOOL)nb_isNumeric;

@end

@interface NSURLRequest (NBAdditions)

- (nonnull NSString *)nb_debugDescription;

@end

@interface NSError (NBAdditions)

+ (nonnull NSError *)nb_genericError;

@end
