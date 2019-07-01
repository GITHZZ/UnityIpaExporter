//
//  PreferenceView.h
//  IpaExporter
//
//  Created by 4399 on 6/17/19.
//  Copyright © 2019 何遵祖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>
#import "Common.h"
#import "LocalDataSave.h"

NS_ASSUME_NONNULL_BEGIN

@interface ExtensionsMenu : NSMenuItem

@end

@interface PreferenceView : NSViewController<NSMenuDelegate>
{
    NSMutableDictionary<NSString*, NSPopUpButtonCell*> *_itemCellDict;
}

@property (weak) IBOutlet NSTextField *cacheSize;
@property (weak) IBOutlet NSTextField *savePath;
@property (weak) IBOutlet NSPopUpButtonCell *codeApp;
@property (weak) IBOutlet NSPopUpButtonCell *jsonApp;

@end

NS_ASSUME_NONNULL_END