//
//  ViewController.h
//  YashiPasswordGenerator-OSX
//
//  Created by 神楽坂雅詩 on 14/9/6.
//  Copyright (c) 2014年 Kagurazaka Yashi. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController <NSTokenFieldDelegate>
{
    IBOutlet NSBox *fontliblabel;
    IBOutlet NSBox *optionlabel;
    IBOutlet NSBox *endlabel;
    IBOutlet NSButton *zm1;
    IBOutlet NSButton *zm2;
    IBOutlet NSButton *zm3;
    IBOutlet NSButton *zmo;
    IBOutlet NSTextField *chars;
    IBOutlet NSTextField *numlabel;
    IBOutlet NSTokenField *numtext;
    IBOutlet NSTextField *longlabel;
    IBOutlet NSTokenField *longtext;
    IBOutlet NSButton *startbtn;
    IBOutlet NSButton *testbtn;
    IBOutlet NSProgressIndicator *pro;
    IBOutlet NSProgressIndicator *spro;
    IBOutlet NSTextField *output;
    IBOutlet NSTextField *powerlabel;
    IBOutlet NSLevelIndicator *power;
    IBOutlet NSButton *exitbtn;
    IBOutlet NSButton *copybtn;
    NSThread *myThread;
    NSInteger leng;
    NSInteger all;
    NSDate *time;
    BOOL testmode;
    BOOL firstStop;
//    BOOL working;
}

@end

