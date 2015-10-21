//
//  TextFlowView.h
//  Paoma
//
//  Created by wu wxj on 11-9-7.
//  Copyright 2011年 tt. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface TextFlowView : UIView {
    
    //显示文本的标签
    UILabel *_firstLabel;
    UILabel *_secondLabel;
    
    //定时器
    NSTimer *_timer;
    
    //显示的文本
    NSString *_text;
    
    //是否需要滚动
    BOOL _needFlow;
    BOOL _bTurnLeft; // 初始滚动方向 左边
    
    //控件的框架大小
    CGRect _frame;
    
    //文本的字体
    UIFont *_font;
    
    // 文本的颜色
    UIColor *_color;
    
    //当前第一个控件的索引
    NSInteger _startIndex;
    
    //定时器每次执行偏移后，累计的偏移量之和
    CGFloat _XOffset;
    
    //文本显示一行，需要的框架大小
    CGSize _textSize;
}

- (id)initWithFrame:(CGRect)frame Text:(NSString *)text;
- (void)setFont:(UIFont *)font;
- (void)setText:(NSString *)text;
- (void)setColor:(UIColor *)color;

// action
// 是否需要跑马
- (BOOL)isNeedFlow;
// 开始跑马
- (void)startRun;
//关闭定时器,停止跑马
- (void)cancelRun;


@end


