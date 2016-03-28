//
//  UIBarButtonItem+Category.h
//  XiaoJianClient
//
//  Created by No on 16/3/28.
//  Copyright © 2016年 com.xiaojian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (Category)
///自定义UIBarButtonItem
+ (instancetype )barButtonItemWithName:(NSString *)name
                          imageNameNor:(NSString *)nameNor
                          imageNameHig:(NSString *)nameHig
                             addTarget:(id )target
                                action:(SEL)action
                      controlEvents:(UIControlEvents)event;
@end
