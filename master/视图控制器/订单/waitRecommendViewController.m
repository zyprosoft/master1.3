//
//  waitrecommendViewController.m
//  master
//
//  Created by jin on 15/6/29.
//  Copyright (c) 2015年 JXH. All rights reserved.
//

#import "waitrecommendViewController.h"
#import "MNextOrderDetailViewController.h"
@interface waitrecommendViewController ()

@end

@implementation waitrecommendViewController

- (void)viewDidLoad {
    
    [super viewDidLoad];
    [self sendRequesr];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)sendRequesr{
    
    NSString*urlString=[self interfaceFromString:interface_myNextComment];
    [self requestWithURL:urlString];
    
}

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    billListModel*model;
    model=self.dataArray[indexPath.row];
    MNextOrderDetailViewController*mvc=[[MNextOrderDetailViewController alloc]initWithNibName:@"orderDetailOrderViewController" bundle:nil];
    mvc.id=model.id;
    mvc.block=^(BOOL isChange){
        if (isChange) {
            self.isRefersh=YES;
            [self sendRequesr];
        }
    };
    
    [self pushWinthAnimation:self.nc Viewcontroller:mvc];
}


@end
