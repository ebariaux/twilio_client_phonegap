//
//  TCPlugin.h
//  Twilio Client plugin for PhoneGap
//
//  Copyright 2012 Stevie Graham.
//

#import <Foundation/Foundation.h>
#import "TwilioClient.h"

#import <Cordova/CDV.h>

@interface TCPlugin : CDVPlugin <TCDeviceDelegate, TCConnectionDelegate> { }

# pragma mark javascript mapper methods
-(void)deviceSetup:(CDVInvokedUrlCommand*)command;
-(void)connect:(CDVInvokedUrlCommand*)command;
-(void)disconnectAll:(CDVInvokedUrlCommand*)command;
-(void)acceptConnection:(CDVInvokedUrlCommand*)command;
-(void)disconnectConnection:(CDVInvokedUrlCommand*)command;
-(void)rejectConnection:(CDVInvokedUrlCommand*)command;
-(void)muteConnection:(CDVInvokedUrlCommand*)command;
-(void)sendDigits:(CDVInvokedUrlCommand*)command;
-(void)showNotification:(CDVInvokedUrlCommand*)command;
-(void)cancelNotification:(CDVInvokedUrlCommand*)command;
-(void)setSpeaker:(CDVInvokedUrlCommand*)command;

@end