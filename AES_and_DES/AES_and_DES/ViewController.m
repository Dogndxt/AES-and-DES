//
//  ViewController.m
//  AES_and_DES
//
//  Created by qingling_yang on 17/4/5.
//  Copyright © 2017年 qianxx. All rights reserved.
//

#import "ViewController.h"

#import "DES.h"
#import "AESCipher.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // ******************* AES ***************** //
    
    // 加密密钥
    NSString *AESKey = @"AESkey";
    
    // 需要加密的字符串
    NSString *AESString = @"AESString";
    
    NSString *AESEncodeString = [AESCipher encryptAES:AESString key:AESKey];
    NSString *AESDecodeString = [AESCipher decryptAES:AESEncodeString key:AESKey];
    NSLog(@"AES加密之后的结果： %@", AESEncodeString);
    NSLog(@"AES解密之后的结果： %@", AESDecodeString);
    
    
    
    
    // ******************** DES ***************** //
    
    // 加密密钥
    NSString *DESKey = @"DESKey";
    
    // 需要加密的字符串
    NSString *DESString = @"DESString";
    NSString *DESEncodeString = [DES encryptUseDES:DESString key:DESKey];
    NSString *DESDecodeString = [DES decryptUseDES:DESEncodeString key:DESKey];
    NSLog(@"DES加密之后的结果： %@", DESEncodeString);
    NSLog(@"DES解密之后的结果： %@", DESDecodeString);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
