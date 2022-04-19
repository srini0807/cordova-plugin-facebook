#import <Foundation/Foundation.h>
#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>
#import <FBSDKShareKit/FBSDKShareKit.h>
#import <Cordova/CDV.h>
#import "AppDelegate.h"

@interface FacebookConnectPlugin : CDVPlugin <FBSDKSharingDelegate, FBSDKGameRequestDialogDelegate>
- (void)getLoginStatus:(CDVInvokedUrlCommand *)command;
- (void)getAccessToken:(CDVInvokedUrlCommand *)command;
- (void)logEvent:(CDVInvokedUrlCommand *)command;
- (void)logPurchase:(CDVInvokedUrlCommand *)command;
- (void)login:(CDVInvokedUrlCommand *)command;
- (void)checkHasCorrectPermissions:(CDVInvokedUrlCommand *)command;
- (void)logout:(CDVInvokedUrlCommand *)command;
- (void)graphApi:(CDVInvokedUrlCommand *)command;
- (void)showDialog:(CDVInvokedUrlCommand *)command;
- (void)getDeferredApplink:(CDVInvokedUrlCommand *) command;
- (void)activateApp:(CDVInvokedUrlCommand *)command;
@end
