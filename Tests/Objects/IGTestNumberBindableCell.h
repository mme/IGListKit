/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <IGListKit_Converse/IGListBindable.h>

@interface IGTestNumberBindableCell : UICollectionViewCell<IGListBindable>

@property (nonatomic, strong, readonly) UITextField *textField;

@end
