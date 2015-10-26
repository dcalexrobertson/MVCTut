//
//  Car.h
//  Vehicles
//
//  Created by Alex on 2015-10-25.
//  Copyright © 2015 Designated Nerd Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Vehicle.h"

@interface Car : Vehicle

@property (nonatomic, assign) BOOL isConvertible;
@property (nonatomic, assign) BOOL isHatchback;
@property (nonatomic, assign) BOOL hasSunroof;
@property (nonatomic, assign) NSInteger numberOfDoors;

@end
