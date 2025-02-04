/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant 
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import "IGTestDelegateDataSource.h"

#import <IGListKit_Converse/IGListAdapter.h>

#import "IGTestDelegateController.h"
#import "IGTestObject.h"

@implementation IGTestDelegateDataSource

- (NSArray *)objectsForListAdapter:(IGListAdapter *)listAdapter {
    return self.objects;
}

- (IGListSectionController *)listAdapter:(IGListAdapter *)listAdapter sectionControllerForObject:(id)object {
    IGTestDelegateController *sectionController = [[IGTestDelegateController alloc] init];
    sectionController.cellConfigureBlock = self.cellConfigureBlock;
    return sectionController;
}

- (nullable UIView *)emptyViewForListAdapter:(IGListAdapter *)listAdapter {
    return nil;
}

@end
