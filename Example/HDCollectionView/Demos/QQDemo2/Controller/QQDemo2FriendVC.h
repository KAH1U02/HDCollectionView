//
//  QQDemo2FriendVC.h
//  HDCollectionView_Example
//
//  Created by HaoDong chen on 2019/5/20.
//  Copyright © 2019 donggelaile. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HDMultipleScrollListSubVC.h"
#import "QQDemo2FriendVCVM.h"
NS_ASSUME_NONNULL_BEGIN

@interface QQDemo2FriendVC : HDMultipleScrollListSubVC
@property (nonatomic, strong) QQDemo2FriendVCVM *viewModel;
@end

NS_ASSUME_NONNULL_END
