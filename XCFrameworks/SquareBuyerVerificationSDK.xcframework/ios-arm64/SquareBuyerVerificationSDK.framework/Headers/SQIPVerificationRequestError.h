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

/**
 The domain for errors that may occur when requesting a verification.
 */
extern NSString *_Nonnull const SQIPVerificationRequestErrorDomain;

/**
 Error codes that can be returned as a result of attempting to verify a buyer.
 */
typedef NS_ERROR_ENUM(SQIPVerificationRequestErrorDomain, SQIPVerificationRequestError){

    /**
     Square In-App Payments SDK could not connect to the network.
     */
    SQIPVerificationRequestErrorNoNetwork = 1,

    /**
     The version of the Square In-App Payments SDK used by this application is no longer supported.
     */
    SQIPVerificationRequestErrorUnsupportedSDKVersion,

    /**
     Represents a failed verification request.
     */
    SQIPVerificationRequestErrorFailed,

    /**
     `SQIPVerificationRequestError` was used in an unexpected or unsupported way.
     See `userInfo[SQIPErrorDebugCodeKey]` and `userInfo[SQIPErrorDebugMessageKey]` for more information.
     */
    SQIPVerificationRequestErrorUsageError,
};
