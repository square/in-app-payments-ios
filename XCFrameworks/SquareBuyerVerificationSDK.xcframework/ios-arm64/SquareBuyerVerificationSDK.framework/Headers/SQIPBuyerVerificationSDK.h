//
//    Copyright (c) 2019-present, Square, Inc. All rights reserved.
//
//    Your use of this software is subject to the Square Developer Terms of
//    Service (https://squareup.com/legal/developers). This copyright notice shall
//    be included in all copies or substantial portions of the software.
//
//    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//    THE SOFTWARE.
//

#import <Foundation/Foundation.h>

@class SQIPVerificationParameters;
@class SQIPTheme;
@class UIViewController;
@class SQIPBuyerVerifiedDetails;

typedef void (^SQIPVerificationSuccessCompletion)(SQIPBuyerVerifiedDetails *_Nonnull verifiedDetails);
typedef void (^SQIPVerificationFailureCompletion)(NSError *_Nonnull error);

/**
 Manages the SCA buyer verification flow and returns a verification token for a payment source ID.
*/
@interface SQIPBuyerVerificationSDK : NSObject

/**
 The Buyer Verification SDK singleton.
 Use this to verify the customer prior to charging or storing a card.
*/
@property (nonatomic, strong, readonly, nonnull, class) SQIPBuyerVerificationSDK *shared;

/**
 Verifies the buyer and provides a verification token

 @param parameters Object that contains information necessary to verify the buyer.
 @param theme The theme instance used to style the challenge.
 @param viewController The viewController under the presented challenge.
 @param success The verificationDetails object that is returned if verify succeeded.
 @param failure The error object that is returned if verify failed.
 */
- (void)verifyWithParameters:(nonnull SQIPVerificationParameters *)parameters
                       theme:(nonnull SQIPTheme *)theme
              viewController:(nonnull UIViewController *)viewController
                     success:(nonnull SQIPVerificationSuccessCompletion)success
                     failure:(nonnull SQIPVerificationFailureCompletion)failure;


/**
 :nodoc:
 `init` is unavailable.
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 :nodoc:
 `new` is unavailable.
 */
+ (nonnull instancetype) new NS_UNAVAILABLE;

@end
