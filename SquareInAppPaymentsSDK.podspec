Pod::Spec.new do |s|
  s.name = 'SquareInAppPaymentsSDK'
  s.version = '1.1.0'
  s.license = {
    type: 'Square Developer License',
    text: <<-LICENSE
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
  }
  # Since this is a binary pod, redirect the Cocoapods.org entry to the github repo.
  s.homepage = 'https://github.com/square/in-app-payments-ios'
  s.authors = 'Square'
  s.summary = 'A secure, managed payments SDK that enables iOS developers to build mobile, in-app payment experiences for customers of Square merchants.'
  s.ios.deployment_target = '10.0'
  s.source = {
    http: "https://github.com/square/in-app-payments-ios/releases/download/#{s.version}/SquareInAppPaymentsSDK.framework.zip"
  }
  s.source_files = 'SquareInAppPaymentsSDK.framework/**/*.{h,hh}'
  s.public_header_files = 'SquareInAppPaymentsSDK.framework/Headers/*.{h,hh}'
  s.vendored_frameworks = 'SquareInAppPaymentsSDK.framework'
end
