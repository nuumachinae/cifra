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
///   File: main.hpp
///
/// Author: $author$
///   Date: 6/25/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_CRYPTO_HASH_MD5_MAIN_HPP
#define XOS_APP_CONSOLE_CRYPTO_HASH_MD5_MAIN_HPP

#include "xos/app/console/crypto/hash/md5/main_opt.hpp"
#include "xos/crypto/hash/implemented/md5.hpp"

namespace xos {
namespace app {
namespace console {
namespace crypto {
namespace hash {
namespace md5 {

/// class maint
template
<class TExtends = xos::app::console::crypto::hash::md5::main_optt<>,  class TImplements = typename TExtends::implements>

class maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint(): run_(0), md5_algorithm_(0) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint &copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    /// run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// md5...
    xos::crypto::hash::md5* (derives::*md5_algorithm_)() const;
    virtual xos::crypto::hash::md5* md5_algorithm() const {
        if ((md5_algorithm_)) {
            return (this->*md5_algorithm_)();
        }
        return implemented_md5();
    }
    virtual xos::crypto::hash::md5* implemented_md5() const {
        return (xos::crypto::hash::md5*)&implemented_md5_;
    }

protected:
    xos::crypto::hash::implemented::md5 implemented_md5_;
}; /// class maint
typedef maint<> main;

} /// namespace md5
} /// namespace hash
} /// namespace crypto
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_CRYPTO_HASH_MD5_MAIN_HPP
