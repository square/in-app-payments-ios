
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

/**
 Indicates the country associated with an entity, such as a business.
 Values are in [ISO 3166-1-alpha-2 format](https://www.iso.org/iso-3166-country-codes.html).
 */
typedef NS_ENUM(NSUInteger, SQIPCountry) {

    SQIPCountryUNKNOWN,

    SQIPCountryZZ,

    SQIPCountryAD,

    SQIPCountryAE,

    SQIPCountryAF,

    SQIPCountryAG,

    SQIPCountryAI,

    SQIPCountryAL,

    SQIPCountryAM,

    SQIPCountryAO,

    SQIPCountryAQ,

    SQIPCountryAR,

    SQIPCountryAS,

    SQIPCountryAT,

    SQIPCountryAU,

    SQIPCountryAW,

    SQIPCountryAX,

    SQIPCountryAZ,

    SQIPCountryBA,

    SQIPCountryBB,

    SQIPCountryBD,

    SQIPCountryBE,

    SQIPCountryBF,

    SQIPCountryBG,

    SQIPCountryBH,

    SQIPCountryBI,

    SQIPCountryBJ,

    SQIPCountryBL,

    SQIPCountryBM,

    SQIPCountryBN,

    SQIPCountryBO,

    SQIPCountryBQ,

    SQIPCountryBR,

    SQIPCountryBS,

    SQIPCountryBT,

    SQIPCountryBV,

    SQIPCountryBW,

    SQIPCountryBY,

    SQIPCountryBZ,

    SQIPCountryCA,

    SQIPCountryCC,

    SQIPCountryCD,

    SQIPCountryCF,

    SQIPCountryCG,

    SQIPCountryCH,

    SQIPCountryCI,

    SQIPCountryCK,

    SQIPCountryCL,

    SQIPCountryCM,

    SQIPCountryCN,

    SQIPCountryCO,

    SQIPCountryCR,

    SQIPCountryCU,

    SQIPCountryCV,

    SQIPCountryCW,

    SQIPCountryCX,

    SQIPCountryCY,

    SQIPCountryCZ,

    SQIPCountryDE,

    SQIPCountryDJ,

    SQIPCountryDK,

    SQIPCountryDM,

    SQIPCountryDO,

    SQIPCountryDZ,

    SQIPCountryEC,

    SQIPCountryEE,

    SQIPCountryEG,

    SQIPCountryEH,

    SQIPCountryER,

    SQIPCountryES,

    SQIPCountryET,

    SQIPCountryFI,

    SQIPCountryFJ,

    SQIPCountryFK,

    SQIPCountryFM,

    SQIPCountryFO,

    SQIPCountryFR,

    SQIPCountryGA,

    SQIPCountryGB,

    SQIPCountryGD,

    SQIPCountryGE,

    SQIPCountryGF,

    SQIPCountryGG,

    SQIPCountryGH,

    SQIPCountryGI,

    SQIPCountryGL,

    SQIPCountryGM,

    SQIPCountryGN,

    SQIPCountryGP,

    SQIPCountryGQ,

    SQIPCountryGR,

    SQIPCountryGS,

    SQIPCountryGT,

    SQIPCountryGU,

    SQIPCountryGW,

    SQIPCountryGY,

    SQIPCountryHK,

    SQIPCountryHM,

    SQIPCountryHN,

    SQIPCountryHR,

    SQIPCountryHT,

    SQIPCountryHU,

    SQIPCountryID,

    SQIPCountryIE,

    SQIPCountryIL,

    SQIPCountryIM,

    SQIPCountryIN,

    SQIPCountryIO,

    SQIPCountryIQ,

    SQIPCountryIR,

    SQIPCountryIS,

    SQIPCountryIT,

    SQIPCountryJE,

    SQIPCountryJM,

    SQIPCountryJO,

    SQIPCountryJP,

    SQIPCountryKE,

    SQIPCountryKG,

    SQIPCountryKH,

    SQIPCountryKI,

    SQIPCountryKM,

    SQIPCountryKN,

    SQIPCountryKP,

    SQIPCountryKR,

    SQIPCountryKW,

    SQIPCountryKY,

    SQIPCountryKZ,

    SQIPCountryLA,

    SQIPCountryLB,

    SQIPCountryLC,

    SQIPCountryLI,

    SQIPCountryLK,

    SQIPCountryLR,

    SQIPCountryLS,

    SQIPCountryLT,

    SQIPCountryLU,

    SQIPCountryLV,

    SQIPCountryLY,

    SQIPCountryMA,

    SQIPCountryMC,

    SQIPCountryMD,

    SQIPCountryME,

    SQIPCountryMF,

    SQIPCountryMG,

    SQIPCountryMH,

    SQIPCountryMK,

    SQIPCountryML,

    SQIPCountryMM,

    SQIPCountryMN,

    SQIPCountryMO,

    SQIPCountryMP,

    SQIPCountryMQ,

    SQIPCountryMR,

    SQIPCountryMS,

    SQIPCountryMT,

    SQIPCountryMU,

    SQIPCountryMV,

    SQIPCountryMW,

    SQIPCountryMX,

    SQIPCountryMY,

    SQIPCountryMZ,

    SQIPCountryNA,

    SQIPCountryNC,

    SQIPCountryNE,

    SQIPCountryNF,

    SQIPCountryNG,

    SQIPCountryNI,

    SQIPCountryNL,

    SQIPCountryNO,

    SQIPCountryNP,

    SQIPCountryNR,

    SQIPCountryNU,

    SQIPCountryNZ,

    SQIPCountryOM,

    SQIPCountryPA,

    SQIPCountryPE,

    SQIPCountryPF,

    SQIPCountryPG,

    SQIPCountryPH,

    SQIPCountryPK,

    SQIPCountryPL,

    SQIPCountryPM,

    SQIPCountryPN,

    SQIPCountryPR,

    SQIPCountryPS,

    SQIPCountryPT,

    SQIPCountryPW,

    SQIPCountryPY,

    SQIPCountryQA,

    SQIPCountryRE,

    SQIPCountryRO,

    SQIPCountryRS,

    SQIPCountryRU,

    SQIPCountryRW,

    SQIPCountrySA,

    SQIPCountrySB,

    SQIPCountrySC,

    SQIPCountrySD,

    SQIPCountrySE,

    SQIPCountrySG,

    SQIPCountrySH,

    SQIPCountrySI,

    SQIPCountrySJ,

    SQIPCountrySK,

    SQIPCountrySL,

    SQIPCountrySM,

    SQIPCountrySN,

    SQIPCountrySO,

    SQIPCountrySR,

    SQIPCountrySS,

    SQIPCountryST,

    SQIPCountrySV,

    SQIPCountrySX,

    SQIPCountrySY,

    SQIPCountrySZ,

    SQIPCountryTC,

    SQIPCountryTD,

    SQIPCountryTF,

    SQIPCountryTG,

    SQIPCountryTH,

    SQIPCountryTJ,

    SQIPCountryTK,

    SQIPCountryTL,

    SQIPCountryTM,

    SQIPCountryTN,

    SQIPCountryTO,

    SQIPCountryTR,

    SQIPCountryTT,

    SQIPCountryTV,

    SQIPCountryTW,

    SQIPCountryTZ,

    SQIPCountryUA,

    SQIPCountryUG,

    SQIPCountryUM,

    SQIPCountryUS,

    SQIPCountryUY,

    SQIPCountryUZ,

    SQIPCountryVA,

    SQIPCountryVC,

    SQIPCountryVE,

    SQIPCountryVG,

    SQIPCountryVI,

    SQIPCountryVN,

    SQIPCountryVU,

    SQIPCountryWF,

    SQIPCountryWS,

    SQIPCountryYE,

    SQIPCountryYT,

    SQIPCountryZA,

    SQIPCountryZM,

    SQIPCountryZW,

};

/**
 Creates a string from a SQIPCountry. i.e. SQIPCountryUS -> "US"
 :nodoc:
 */
extern NSString *_Nonnull NSStringCountryCodeForCountry(SQIPCountry country) CF_SWIFT_NAME(getter:SQIPCountry.code(self:));
