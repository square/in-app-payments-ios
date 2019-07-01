module SquareInAppPaymentsSDK
  VERSION = '1.1.2'

  LICENSE_TYPE = 'Square Developer License'
  LICENSE_TEXT = <<-LICENSE
Copyright (c) 2018-present, Square, Inc. All rights reserved.

Your use of this software is subject to the Square Developer Terms of
Service (https://squareup.com/legal/developers). This copyright notice shall
be included in all copies or substantial portions of the software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
    LICENSE
  LICENSE = { type: LICENSE_TYPE, text: LICENSE_TEXT }

  # Since this is a binary pod, redirect the Cocoapods.org entry to the github repo.
  HOMEPAGE_URL = 'https://github.com/square/in-app-payments-ios'
  AUTHORS = 'Square'
  IOS_DEPLOYMENT_TARGET = '10.0'
  SOURCE = { http: "https://github.com/square/in-app-payments-ios/releases/download/#{VERSION}/SquareInAppPaymentsSDK.framework.zip" }
end
