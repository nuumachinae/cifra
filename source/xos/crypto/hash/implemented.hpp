//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2023 $organization$
///
/// This software is provided by the author and contributors ``as is''
/// and any express or implied warranties, including, but not limited to,
/// the implied warranties of merchantability and fitness for a particular
/// purpose are disclaimed. In no event shall the author or contributors
/// be liable for any direct, indirect, incidental, special, exemplary,
/// or consequential damages (including, but not limited to, procurement
/// of substitute goods or services; loss of use, data, or profits; or
/// business interruption) however caused and on any theory of liability,
/// whether in contract, strict liability, or tort (including negligence
/// or otherwise) arising in any way out of the use of this software,
/// even if advised of the possibility of such damage.
///
///   File: implemented.hpp
///
/// Author: $author$
///   Date: 6/24/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_CRYPTO_HASH_IMPLEMENTED_HPP
#define XOS_CRYPTO_HASH_IMPLEMENTED_HPP

#include "xos/crypto/hash/md5/implemented.hpp"
#include "xos/crypto/hash/sha1/implemented.hpp"
#include "xos/crypto/hash/sha256/implemented.hpp"
#include "xos/crypto/hash/sha512/implemented.hpp"

namespace xos {
namespace crypto {
namespace hash {

namespace implemented = openssl;

} /// namespace hash
} /// namespace crypto
} /// namespace xos

#endif /// ndef XOS_CRYPTO_HASH_IMPLEMENTED_HPP
