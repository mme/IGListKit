/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import <IGListKit_Converse/IGListAdapterDataSource.h>
#import <IGListKit_Converse/IGListAdapterMoveDelegate.h>

#import "IGListTestCase.h"

@interface IGListTestAdapterReorderingDataSource : NSObject <IGListTestCaseDataSource, IGListAdapterMoveDelegate>

// array of numbers which is then passed to -[IGTestReorderableSection setItems:]
@property (nonatomic, strong) NSArray <NSNumber *> *objects;

@property (nonatomic, strong) UIView *backgroundView;

@end
