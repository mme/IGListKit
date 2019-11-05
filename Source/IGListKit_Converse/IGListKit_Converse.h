/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <IGListDiffKit/IGListCompatibility.h>

/**
 * Project version number for IGListKit.
 */
FOUNDATION_EXPORT double IGListKitVersionNumber;

/**
 * Project version string for IGListKit.
 */
FOUNDATION_EXPORT const unsigned char IGListKitVersionString[];

#if TARGET_OS_EMBEDDED || TARGET_OS_SIMULATOR

// iOS and tvOS only:

#import <IGListKit_Converse/IGListAdapter.h>
#import <IGListKit_Converse/IGListAdapterDataSource.h>
#import <IGListKit_Converse/IGListAdapterDelegate.h>
#import <IGListKit_Converse/IGListAdapterUpdateListener.h>
#import <IGListKit_Converse/IGListAdapterUpdater.h>
#import <IGListKit_Converse/IGListAdapterUpdaterDelegate.h>
#import <IGListKit_Converse/IGListBatchContext.h>
#import <IGListKit_Converse/IGListBindable.h>
#import <IGListKit_Converse/IGListBindingSectionController.h>
#import <IGListKit_Converse/IGListBindingSectionControllerDataSource.h>
#import <IGListKit_Converse/IGListBindingSectionControllerSelectionDelegate.h>
#import <IGListKit_Converse/IGListCollectionContext.h>
#import <IGListKit_Converse/IGListCollectionView.h>
#import <IGListKit_Converse/IGListCollectionViewLayout.h>
#import <IGListKit_Converse/IGListDisplayDelegate.h>
#import <IGListKit_Converse/IGListGenericSectionController.h>
#import <IGListKit_Converse/IGListCollectionViewDelegateLayout.h>
#import <IGListKit_Converse/IGListReloadDataUpdater.h>
#import <IGListKit_Converse/IGListScrollDelegate.h>
#import <IGListKit_Converse/IGListSectionController.h>
#import <IGListKit_Converse/IGListSingleSectionController.h>
#import <IGListKit_Converse/IGListSupplementaryViewSource.h>
#import <IGListKit_Converse/IGListTransitionDelegate.h>
#import <IGListKit_Converse/IGListUpdatingDelegate.h>
#import <IGListKit_Converse/IGListWorkingRangeDelegate.h>
#import <IGListKit_Converse/IGListCollectionViewDelegateLayout.h>

#endif

// Shared (iOS, tvOS, macOS compatible):

#import <IGListDiffKit/IGListAssert.h>
#import <IGListDiffKit/IGListBatchUpdateData.h>
#import <IGListDiffKit/IGListDiff.h>
#import <IGListDiffKit/IGListDiffable.h>
#import <IGListDiffKit/IGListExperiments.h>
#import <IGListDiffKit/IGListIndexPathResult.h>
#import <IGListDiffKit/IGListIndexSetResult.h>
#import <IGListDiffKit/IGListMoveIndex.h>
#import <IGListDiffKit/IGListMoveIndexPath.h>
#import <IGListDiffKit/NSNumber+IGListDiffable.h>
#import <IGListDiffKit/NSString+IGListDiffable.h>
