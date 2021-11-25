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

#import <SquareBuyerVerificationSDK/SQIPCurrency.h>


/**
 Value that will charge the card payment source ID with amount in the specified `SQIPCurrency`
 */
@interface SQIPMoney : NSObject

/**
 Creates a new money object.

 @param amount Amount of money that will be charged (i.e 100 in USD will be $1.00)
 @param currency The currency the payment source ID will be charged in.
 */
- (nonnull instancetype)initWithAmount:(NSInteger)amount currency:(SQIPCurrency)currency;

/**
 :nodoc:
 `init` is unavailable.
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 :nodoc:
 `init` is unavailable.
 */
+ (nonnull instancetype) new NS_UNAVAILABLE;

@end
