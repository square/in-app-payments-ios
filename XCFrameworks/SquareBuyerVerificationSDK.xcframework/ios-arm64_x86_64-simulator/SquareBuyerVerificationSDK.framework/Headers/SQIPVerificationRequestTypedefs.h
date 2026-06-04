//
//  SQIPVerificationRequestTypedefs.h
//  SquareBuyerVerificationSDK
//
//  Created by Matias Seijas on 2/25/22.
//  Copyright © 2022 Square, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SQIPBuyerVerifiedDetails;

typedef void (^SQIPVerificationSuccessCompletion)(SQIPBuyerVerifiedDetails *_Nonnull verifiedDetails);
typedef void (^SQIPVerificationFailureCompletion)(NSError *_Nonnull error);
