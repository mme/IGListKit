/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant 
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import <IGListKit_Converse/IGListAdapterDataSource.h>

#import "IGListTestCase.h"

@interface IGListTestAdapterDataSource : NSObject <IGListTestCaseDataSource>

// array of numbers which is then passed to -[IGListTestSection setItems:]
@property (nonatomic, strong) NSArray <NSNumber *> *objects;

@property (nonatomic, strong) UIView *backgroundView;

@end
