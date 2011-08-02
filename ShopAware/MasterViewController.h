//
//  MasterViewController.h
//  ShopAware
//
//  Created by Steve Otey on 7/31/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate> {
    UILabel *_StoreName;
    UILabel *_StoreLocation;

}


@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) IBOutlet UILabel *StoreName;
@property (strong, nonatomic) IBOutlet UILabel *StoreLocation;


@end
