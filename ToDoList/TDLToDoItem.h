//
//  TDLToDoItem.h
//  ToDoList
//
//  Created by Jesse B. Hannah on 2013-12-28.
//  Copyright (c) 2013 Jesse B. Hannah. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TDLToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
