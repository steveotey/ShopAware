//
//  DetailViewController.h
//  ShopAware
//
//  Created by Steve Otey on 7/31/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController {
    UILabel *_ItemName;
    UILabel *_ItemPrice;
}


@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (strong, nonatomic) IBOutlet UILabel *ItemName;

@property (strong, nonatomic) IBOutlet UILabel *ItemPrice;

@end
