//
//  UIBarButtonItem+Category.m
//  XiaoJianClient
//
//  Created by No on 16/3/28.
//  Copyright © 2016年 com.xiaojian. All rights reserved.
//

#import "UIBarButtonItem+Category.h"

@implementation UIBarButtonItem (Category)
///自定义UIBarButtonItem
+ (instancetype )barButtonItemWithName:(NSString *)name
                          imageNameNor:(NSString *)nameNor
                          imageNameHig:(NSString *)nameHig
                             addTarget:(id )target
                                action:(SEL)action
                         controlEvents:(UIControlEvents)event
{

    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    
    if (name) {
        [btn setTitle:name forState:UIControlStateNormal];
    }
    if (nameNor) {
        [btn setImage:[UIImage imageNamed:nameNor] forState:UIControlStateNormal];
    }
    if (nameHig) {
        [btn setImage:[UIImage imageNamed:nameHig] forState:UIControlStateHighlighted];
    }
    [btn sizeToFit];
    
    [btn addTarget:target action:action forControlEvents:event];
    
    
    UIBarButtonItem *barItem = [[UIBarButtonItem alloc]initWithCustomView:btn];

    return barItem;
}
@end
