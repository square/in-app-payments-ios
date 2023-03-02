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

#import "SQIPCountry.h"

/**
 This represents the optional fields that can be passed in as part of the verification process.
 The more fields you provide, the greater the chance the user will not be challenged or rejected.
 */
@interface SQIPContact : NSObject

/**
 First name of the contact.
 */
@property (nonatomic, strong, nullable) NSString *givenName;

/**
 Last name of the contact.
 */
@property (nonatomic, strong, nullable) NSString *familyName;

/**
 Email address of the contact.
 */
@property (nonatomic, strong, nullable) NSString *email;

/**
 The contact street address parts.
 */
@property (nonatomic, strong, nullable) NSArray<NSString *> *addressLines;

/**
 The contact address city.
 */
@property (nonatomic, strong, nullable) NSString *city;

/**
 The applicable administrative region (e.g., province, state) of the contact address.
 */
@property (nonatomic, strong, nullable) NSString *region;

/**
 The contact address postal code.
 */
@property (nonatomic, strong, nullable) NSString *postalCode;

/**
 A 2-letter string containing the ISO 3166-1 country code of the contact address. This field is returned in uppercase and maps to the Apple Pay countryCode field.
 */
@property (nonatomic) SQIPCountry country;

/**
 :nodoc:
 */
@property (assign, nonnull, readonly) NSString *countryCode;

/**
 The telephone number of the contact.
 */
@property (nonatomic, strong, nullable) NSString *phone;

/**
 Creates a new Contact object.
 */
- (nonnull instancetype)init NS_DESIGNATED_INITIALIZER;

/**
 Creates a new Contact object.

 @param givenName First name of the contact.
 @param familyName Last name of the contact.
 @param email Email address of the contact.
 @param addressLines The contact street address parts.
 @param city The contact address city.
 @param region The applicable administrative region (e.g., province, state) of the contact address.
 @param postalCode A 2-letter string containing the ISO 3166-1 country code of the contact address.
 @param country The telephone number of the contact.
 @param phone The telephone number of the contact.
 */
- (nonnull instancetype)initWithGivenName:(nullable NSString *)givenName
                               familyName:(nullable NSString *)familyName
                                    email:(nullable NSString *)email
                             addressLines:(nullable NSArray<NSString *> *)addressLines
                                     city:(nullable NSString *)city
                                   region:(nullable NSString *)region
                               postalCode:(nullable NSString *)postalCode
                                  country:(SQIPCountry)country
                                    phone:(nullable NSString *)phone;

/**
 :nodoc:
 `new` is unavailable.
 */
+ (nonnull instancetype)new NS_UNAVAILABLE;

@end
