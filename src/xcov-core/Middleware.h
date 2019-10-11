//
//  Created by Carlos Vidal Pallin on 25/01/2016.
//  Copyright © 2016 nakioStudio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DDCommandLineInterface.h"

@interface Middleware : NSObject <DDCliApplicationDelegate>

@property (strong, nonatomic) NSString *source;
@property (strong, nonatomic) NSString *output;
@property (strong, nonatomic) NSString *ideFoundationPath;
@property (assign, nonatomic) BOOL version;
@property (assign, nonatomic) BOOL help;

@end
