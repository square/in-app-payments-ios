#ifdef __OBJC__
#    import <Foundation/Foundation.h>
#    if __has_include(<UIKit/UIKit.h>)
#        import <UIKit/UIKit.h>
#    endif
#else
#    ifndef FOUNDATION_EXPORT
#        if defined(__cplusplus)
#            define FOUNDATION_EXPORT extern "C"
#        else
#            define FOUNDATION_EXPORT extern
#        endif
#    endif
#endif

#import "SQIPVerificationRequestError.h"
#import "SQIPBuyerAction.h"
#import "SQIPBuyerVerifiedDetails.h"
#import "SQIPContact.h"
#import "SQIPCountry.h"
#import "SQIPCurrency.h"
#import "SQIPMoney.h"
#import "SQIPVerificationParameters.h"
#import "SQIPVerificationRequestTypedefs.h"
#import "SQIPBuyerVerificationSDK.h"

FOUNDATION_EXPORT double SquareBuyerVerificationSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char SquareBuyerVerificationSDKVersionString[];
