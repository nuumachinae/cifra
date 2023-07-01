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
///   Date: 6/23/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_HPP

#include "xos/app/console/crypto/base/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace crypto {
namespace base {

/// class maint
template
<class TExtends = xos::app::console::crypto::base::main_optt<>,  class TImplements = typename TExtends::implements>

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
    maint():
        run_(0),
        default_plain_text_("plain"),
        default_cipher_text_("cipher") {
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

    /// on...plain_option
    virtual int on_set_plain_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            set_plain_text(optarg);
        } else {
        }
        return err;
    }

    /// ...plain_text...
    virtual const char_t* set_default_plain_text(const char_t* to) {
        default_plain_text_.assign(to);
        return default_plain_text_.chars();
    }
    virtual const char_t* default_plain_text(size_t& length) const {
        return default_plain_text_.has_chars(length);
    }
    virtual const string_t& default_plain_text_string() const {
        return default_plain_text_;
    }
    virtual const char_t* set_plain_text(const char_t* to) {
        plain_text_.assign(to);
        return plain_text_.chars();
    }
    virtual const char_t* plain_text(size_t& length) const {
        return plain_text_.has_chars(length);
    }
    virtual const string_t& plain_text_string() const {
        return plain_text_;
    }

    /// ...cipher_text...
    virtual const char_t* set_default_cipher_text(const char_t* to) {
        default_cipher_text_.assign(to);
        return default_cipher_text_.chars();
    }
    virtual const char_t* default_cipher_text(size_t& length) const {
        return default_cipher_text_.has_chars(length);
    }
    virtual const string_t& default_cipher_text_string() const {
        return default_cipher_text_;
    }
    virtual const char_t* set_cipher_text(const char_t* to) {
        cipher_text_.assign(to);
        return cipher_text_.chars();
    }
    virtual const char_t* cipher_text(size_t& length) const {
        return cipher_text_.has_chars(length);
    }
    virtual const string_t& cipher_text_string() const {
        return cipher_text_;
    }

protected:
    string_t default_plain_text_, plain_text_,
             default_cipher_text_, cipher_text_;
}; /// class maint
typedef maint<> main;

} /// namespace base
} /// namespace crypto
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_HPP
