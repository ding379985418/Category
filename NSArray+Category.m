//
//  NSArray+Category.m
//  catergory
//
//  Created by No on 16/2/23.
//  Copyright © 2016年 com.beauty. All rights reserved.
//

#import "NSArray+Category.h"

@implementation NSArray (Category)
- (NSString *)descriptionWithLocale:(id)locale
{
    NSMutableString *strM = [NSMutableString stringWithString:@"(\n"];
    
    [self enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        [strM appendFormat:@"\t%@,\n", obj];
    }];
    
    [strM appendString:@")"];
    
    return strM;
}
@end
