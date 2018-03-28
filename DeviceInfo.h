//
//  DeviceInfo.h
//  MetroTurizm
//
//  Created by Mirac Okan on 22.03.2018.
//  Copyright © 2018 Atlas Yazılım. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface DeviceInfo : NSObject
- (NSString *)modelMachine;
- (NSString*) deviceModel;
-(NSString*)deviceIdentifier;
-(NSString*)sysDate;
@end
