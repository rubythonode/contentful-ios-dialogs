//
//  CDAWebController.h
//
//  Created by Boris Bügling on 11/06/14.
//  Copyright (c) 2014 Boris Bügling. All rights reserved.
//

#import "TSMiniWebBrowser.h"

@interface CDAWebController : TSMiniWebBrowser

+(UIViewController*)pushWebControllerForURL:(NSURL*)url
                     toNavigationController:(UINavigationController*)parent;

@end
