//
//  DES.h
//  加密解密 DES
//
//  Created by qingling_yang on 17/3/20.
//  Copyright © 2017年 qianxx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DES : NSObject


/**
 DES 加密

 @param plainText 需要加密的字段
 @param key 加密密钥
 @return 加密的字符串
 */
+(NSString *) encryptUseDES:(NSString *)plainText key:(NSString *)key;

/**
 DES 解密
 
 @param cipherText 需要解密的字段
 @param key 解密密钥 （于同层次加密密钥相同）
 @return 解密的字符串
 */
+(NSString *) decryptUseDES:(NSString *)cipherText key:(NSString *)key;

+(NSString *) parseByte2HexString:(Byte *) bytes;
+(NSString *) parseByteArray2HexString:(Byte[]) bytes;

@end
