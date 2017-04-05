//
//  Base64.h
//  加密解密 DES
//
//  Created by qingling_yang on 17/3/20.
//  Copyright © 2017年 qianxx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Base64 : NSObject

+ (NSData *)decode:(NSString *)data;
+ (NSString *)encode:(NSData *)data;
+ (int)char2Int:(char)c;

@end
