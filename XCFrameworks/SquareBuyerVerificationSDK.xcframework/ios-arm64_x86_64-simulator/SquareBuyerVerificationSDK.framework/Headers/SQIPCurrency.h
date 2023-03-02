
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
 Indicates the associated currency for a money amount.
 Values correspond to [ISO 4217](https://en.wikipedia.org/wiki/ISO_4217).
 */
typedef NS_ENUM(NSUInteger, SQIPCurrency) {

    SQIPCurrencyUNKNOWN,

    SQIPCurrencyAED,

    SQIPCurrencyAFN,

    SQIPCurrencyALL,

    SQIPCurrencyAMD,

    SQIPCurrencyANG,

    SQIPCurrencyAOA,

    SQIPCurrencyARS,

    SQIPCurrencyAUD,

    SQIPCurrencyAWG,

    SQIPCurrencyAZN,

    SQIPCurrencyBAM,

    SQIPCurrencyBBD,

    SQIPCurrencyBDT,

    SQIPCurrencyBGN,

    SQIPCurrencyBHD,

    SQIPCurrencyBIF,

    SQIPCurrencyBMD,

    SQIPCurrencyBND,

    SQIPCurrencyBOB,

    SQIPCurrencyBOV,

    SQIPCurrencyBRL,

    SQIPCurrencyBSD,

    SQIPCurrencyBTN,

    SQIPCurrencyBWP,

    SQIPCurrencyBYR,

    SQIPCurrencyBZD,

    SQIPCurrencyCAD,

    SQIPCurrencyCDF,

    SQIPCurrencyCHE,

    SQIPCurrencyCHF,

    SQIPCurrencyCHW,

    SQIPCurrencyCLF,

    SQIPCurrencyCLP,

    SQIPCurrencyCNY,

    SQIPCurrencyCOP,

    SQIPCurrencyCOU,

    SQIPCurrencyCRC,

    SQIPCurrencyCUC,

    SQIPCurrencyCUP,

    SQIPCurrencyCVE,

    SQIPCurrencyCZK,

    SQIPCurrencyDJF,

    SQIPCurrencyDKK,

    SQIPCurrencyDOP,

    SQIPCurrencyDZD,

    SQIPCurrencyEGP,

    SQIPCurrencyERN,

    SQIPCurrencyETB,

    SQIPCurrencyEUR,

    SQIPCurrencyFJD,

    SQIPCurrencyFKP,

    SQIPCurrencyGBP,

    SQIPCurrencyGEL,

    SQIPCurrencyGHS,

    SQIPCurrencyGIP,

    SQIPCurrencyGMD,

    SQIPCurrencyGNF,

    SQIPCurrencyGTQ,

    SQIPCurrencyGYD,

    SQIPCurrencyHKD,

    SQIPCurrencyHNL,

    SQIPCurrencyHRK,

    SQIPCurrencyHTG,

    SQIPCurrencyHUF,

    SQIPCurrencyIDR,

    SQIPCurrencyILS,

    SQIPCurrencyINR,

    SQIPCurrencyIQD,

    SQIPCurrencyIRR,

    SQIPCurrencyISK,

    SQIPCurrencyJMD,

    SQIPCurrencyJOD,

    SQIPCurrencyJPY,

    SQIPCurrencyKES,

    SQIPCurrencyKGS,

    SQIPCurrencyKHR,

    SQIPCurrencyKMF,

    SQIPCurrencyKPW,

    SQIPCurrencyKRW,

    SQIPCurrencyKWD,

    SQIPCurrencyKYD,

    SQIPCurrencyKZT,

    SQIPCurrencyLAK,

    SQIPCurrencyLBP,

    SQIPCurrencyLKR,

    SQIPCurrencyLRD,

    SQIPCurrencyLSL,

    SQIPCurrencyLTL,

    SQIPCurrencyLVL,

    SQIPCurrencyLYD,

    SQIPCurrencyMAD,

    SQIPCurrencyMDL,

    SQIPCurrencyMGA,

    SQIPCurrencyMKD,

    SQIPCurrencyMMK,

    SQIPCurrencyMNT,

    SQIPCurrencyMOP,

    SQIPCurrencyMRO,

    SQIPCurrencyMUR,

    SQIPCurrencyMVR,

    SQIPCurrencyMWK,

    SQIPCurrencyMXN,

    SQIPCurrencyMXV,

    SQIPCurrencyMYR,

    SQIPCurrencyMZN,

    SQIPCurrencyNAD,

    SQIPCurrencyNGN,

    SQIPCurrencyNIO,

    SQIPCurrencyNOK,

    SQIPCurrencyNPR,

    SQIPCurrencyNZD,

    SQIPCurrencyOMR,

    SQIPCurrencyPAB,

    SQIPCurrencyPEN,

    SQIPCurrencyPGK,

    SQIPCurrencyPHP,

    SQIPCurrencyPKR,

    SQIPCurrencyPLN,

    SQIPCurrencyPYG,

    SQIPCurrencyQAR,

    SQIPCurrencyRON,

    SQIPCurrencyRSD,

    SQIPCurrencyRUB,

    SQIPCurrencyRWF,

    SQIPCurrencySAR,

    SQIPCurrencySBD,

    SQIPCurrencySCR,

    SQIPCurrencySDG,

    SQIPCurrencySEK,

    SQIPCurrencySGD,

    SQIPCurrencySHP,

    SQIPCurrencySLL,

    SQIPCurrencySOS,

    SQIPCurrencySRD,

    SQIPCurrencySSP,

    SQIPCurrencySTD,

    SQIPCurrencySVC,

    SQIPCurrencySYP,

    SQIPCurrencySZL,

    SQIPCurrencyTHB,

    SQIPCurrencyTJS,

    SQIPCurrencyTMT,

    SQIPCurrencyTND,

    SQIPCurrencyTOP,

    SQIPCurrencyTRY,

    SQIPCurrencyTTD,

    SQIPCurrencyTWD,

    SQIPCurrencyTZS,

    SQIPCurrencyUAH,

    SQIPCurrencyUGX,

    SQIPCurrencyUSD,

    SQIPCurrencyUSN,

    SQIPCurrencyUSS,

    SQIPCurrencyUYI,

    SQIPCurrencyUYU,

    SQIPCurrencyUZS,

    SQIPCurrencyVEF,

    SQIPCurrencyVND,

    SQIPCurrencyVUV,

    SQIPCurrencyWST,

    SQIPCurrencyXAF,

    SQIPCurrencyXAG,

    SQIPCurrencyXAU,

    SQIPCurrencyXBA,

    SQIPCurrencyXBB,

    SQIPCurrencyXBC,

    SQIPCurrencyXBD,

    SQIPCurrencyXCD,

    SQIPCurrencyXDR,

    SQIPCurrencyXOF,

    SQIPCurrencyXPD,

    SQIPCurrencyXPF,

    SQIPCurrencyXPT,

    SQIPCurrencyXTS,

    SQIPCurrencyXXX,

    SQIPCurrencyYER,

    SQIPCurrencyZAR,

    SQIPCurrencyZMK,

    SQIPCurrencyZMW,

    SQIPCurrencyBTC,

};

/**
 Creates a string from a SQIPCurrency. i.e. SQIPCurrencyUSD -> "USD"
 :nodoc:
 */
extern NSString *_Nonnull NSStringCurrencyCodeForCurrency(SQIPCurrency currency) CF_SWIFT_NAME(getter:SQIPCurrency.code(self:));
