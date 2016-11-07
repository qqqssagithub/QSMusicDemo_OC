//
//  QSMusicXinDie.h
//  QSMusicDemo_OC
//
//  Created by 陈少文 on 16/7/30.
//  Copyright © 2016年 qqqssa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface QSMusicXinDie : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>

@property (nonatomic) UICollectionView *collectionView;

+ (instancetype)sharedQSMusicXinDie;

/**
 *  单元测试用的接口，外部请勿调用
 *
 *  @param albumId
 *  @param completion
 */
- (void)requestSingleWithAlbumId:(NSString *)albumId response:(void(^)(NSDictionary *albumInfo, NSArray *songList))completion;

@end