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

@class SQIPMoney;

/**
 Indicates the action that will be performed on the card payment source ID after retrieving the verification token
 */
@interface SQIPBuyerAction : NSObject

/**
 Action that will charge the payment source ID with `SQIPMoney`

 @param money Amount that will be charged (i.e 100 in USD will be $1.00)
 */
+ (nonnull instancetype)chargeActionWithMoney:(nonnull SQIPMoney *)money NS_SWIFT_NAME(charge(_:));

/**
 Action that will store the card nonce.
 */
+ (nonnull instancetype)storeAction;

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
