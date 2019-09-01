//  RNSpotifyWebViewController.h
//  RNSpotify
//
//  Created by Luis Finke on 1/16/18.
//  Modified by Parker Sorenson on 09/01/19
//  Copyright © 2018 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface RNSpotifyWebViewController : UIViewController

@property (readonly) WKWebView* webView;

@end
