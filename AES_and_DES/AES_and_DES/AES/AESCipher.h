//
//  AESCipher.h
//  AESCipher
//
//  Created by qingling_yang on 17/3/20.
//  Copyright © 2017年 qianxx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AESCipher : NSObject


/**
 加密数据

 @param content 需要加密的内容
 @param key key
 @return 加密的后数据
 */
+ (NSString *)encryptAES:(NSString *)content key:(NSString *)key;



/**
 解密数据

 @param content 需要解密的数据
 @param key key
 @return 解密后的数据
 */
+ (NSString *)decryptAES:(NSString *)content key:(NSString *)key;


@end
