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

@import Foundation;

@class SQIPBuyerAction;
@class SQIPContact;


/**
 The parameters of a verification challenge
 */
@interface SQIPVerificationParameters : NSObject

/**
 The payment source ID that is used to verify. The ID can be a nonce or a customer card on file ID.
 */
@property (nonatomic, strong, nonnull, readonly) NSString *paymentSourceID;

/**
 The action that is taking place/
 */
@property (nonatomic, strong, nonnull, readonly) SQIPBuyerAction *buyerAction;

/**
 The location ID of the seller.
 */
@property (nonatomic, strong, null_resettable, readonly) NSString *locationID;

/**
 The customer's information
 */
@property (nonatomic, strong, nonnull, readonly) SQIPContact *contact;

/**
 Creates a new verification parameters object.

 @param paymentSourceID The payment source ID that is used to verify. The ID can be a nonce or a customer card on file ID.
 @param buyerAction The action that is taking place.
 @param locationID The location ID of the seller.
 @param contact The customer's information
 */
- (nonnull instancetype)initWithPaymentSourceID:(nonnull NSString *)paymentSourceID
                                    buyerAction:(nonnull SQIPBuyerAction *)buyerAction
                                     locationID:(nonnull NSString *)locationID
                                        contact:(nonnull SQIPContact *)contact NS_DESIGNATED_INITIALIZER;

/**
 :nodoc:
 `init` is unavailable.
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 :nodoc:
 `init` is unavailable.
 */
+ (nonnull instancetype)new NS_UNAVAILABLE;

@end
