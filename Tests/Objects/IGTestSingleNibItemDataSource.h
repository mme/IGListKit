/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import <IGListKit_Converse/IGListAdapterDataSource.h>

#import "IGTestObject.h"
#import "IGListTestCase.h"

@interface IGTestSingleNibItemDataSource : NSObject <IGListTestCaseDataSource>

@property (nonatomic, strong) NSArray <IGTestObject *> *objects;

@end
