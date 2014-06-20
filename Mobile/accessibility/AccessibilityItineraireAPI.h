//
//  AccessibilityItineraireAPI.h
//  accessibility
//
//  Created by Tchikovani on 08/06/2014.
//  Copyright (c) 2014 Tchikovani. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AccessibilityItineraireAPI;

@protocol AccessibilityItineraireAPIDelegate

-(void)errorForJourneyRequest:(NSError *)error;

@optional
-(void)resultSearchForJourney:(NSMutableDictionary *)journey;

@end

@interface AccessibilityItineraireAPI : NSObject

@property (nonatomic, weak) id  delegate;

- (void)searchJourney:(NSMutableDictionary *)from to:(NSMutableDictionary *)direction;

@end
