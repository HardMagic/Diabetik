//
//  UANoteInputViewController.h
//  Diabetik
//
//  Created by Nial Giacomelli on 24/02/2013.
//  Copyright 2013 Nial Giacomelli
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>
#import "UAInputBaseViewController.h"
#import "UANote.h"

@interface UANoteInputViewController : UAInputBaseViewController

// Setup
- (id)initWithMOC:(NSManagedObjectContext *)aMOC;
- (id)initWithEvent:(UAEvent *)aEvent andMOC:(NSManagedObjectContext *)aMOC;

// UI
- (void)changeDate:(id)sender;
- (void)configureAppearanceForTableViewCell:(UAEventInputViewCell *)cell atIndexPath:(NSIndexPath *)indexPath;

@end