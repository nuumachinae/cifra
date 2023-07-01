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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 6/23/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPT_HPP

#include "xos/app/console/verbose/main.hpp"

#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPT "plain"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTARG "[string]"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTUSE "plain text"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTVAL_S "p::"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTVAL_C 'p'
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPT, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPT "cipher"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTARG "[string]"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTUSE "cipher text"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTVAL_S "c::"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTVAL_C 'c'
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPT, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPT "text"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTUSE "text plain output"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTVAL_S "t"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTVAL_C 't'
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPT, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPT "0x"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTUSE "0x hex cipher output"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTVAL_S "0"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTVAL_C '0'
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPT, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPT "64"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTUSE "base 64 encoded io"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTVAL_S "4"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTVAL_C '4'
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPT, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPT "X"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTUSE "uppercase hex encoded io"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTVAL_S "X"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTVAL_C 'X'
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPT, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPT "x"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTUSE "lowercase hex encoded io"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTVAL_S "x"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTVAL_C 'x'
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPT, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTVAL_S \

#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTVAL_S \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTVAL_S \

#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTION \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTION \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTION \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTION \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTION \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTION \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_VERBOSE_MAIN_OUTPUT_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_VERBOSE_MAIN_OUTPUT_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_ARGS "[source]"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_ARGV "[source] plain source",

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_VERBOSE_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_VERBOSE_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_ARGS "[source]"
#define XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_ARGV "[source] plain/cipher source",

namespace xos {
namespace app {
namespace console {
namespace crypto {
namespace base {

/// class main_optt
template
<class TExtends = xos::app::console::verbose::maint<>,  class TImplements = typename TExtends::implements>

class main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt &copy) {
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

    /// ...plain_run
    virtual int plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_plain_run(argc, argv, env))) {
            int err2 = 0;
            err = plain_run(argc, argv, env);
            if ((err2 = after_plain_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_plain_run;
        return err;
    }
    virtual int plain_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int plain_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...cipher_run
    virtual int cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_cipher_run(argc, argv, env))) {
            int err2 = 0;
            err = cipher_run(argc, argv, env);
            if ((err2 = after_cipher_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_cipher_run;
        return err;
    }
    virtual int cipher_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int cipher_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...output_plain_run
    virtual int output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_plain_run(argc, argv, env))) {
            int err2 = 0;
            err = output_plain_run(argc, argv, env);
            if ((err2 = after_output_plain_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_plain_run;
        return err;
    }
    virtual int output_plain_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_plain_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...output_cipher_run
    virtual int output_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_output_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_cipher_run(argc, argv, env))) {
            int err2 = 0;
            err = output_cipher_run(argc, argv, env);
            if ((err2 = after_output_cipher_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_cipher_run;
        return err;
    }
    virtual int output_cipher_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_cipher_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_cipher_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// on...plain_option...
    virtual int on_get_plain_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_plain_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_output_plain_run(argc, argv, env))) {
            if (!(err = output_plain_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_set_plain_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_plain_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_plain_run(argc, argv, env))) {
                if (!(err = plain_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_plain_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_plain_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_plain_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_plain_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_plain_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* plain_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTARG;
        return chars;
    }

    /// on...cipher_option...
    virtual int on_get_cipher_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_cipher_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_set_cipher_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_cipher_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual int on_cipher_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_cipher_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_cipher_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_cipher_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_cipher_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* cipher_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTARG;
        return chars;
    }

    /// on...text_output_option...
    virtual int on_set_text_output_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_text_output_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_text_output_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_text_output_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_text_output_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* text_output_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTARG;
        return chars;
    }

    /// on...Ox_hex_output_option...
    virtual int on_set_Ox_hex_output_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_Ox_hex_output_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_Ox_hex_output_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_Ox_hex_output_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_Ox_hex_output_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* Ox_hex_output_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTARG;
        return chars;
    }

    /// on...base64_io_option...
    virtual int on_set_base64_io_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = this->set_output_base64(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_base64_io_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_base64_io_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_base64_io_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_base64_io_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* base64_io_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTARG;
        return chars;
    }

    /// on...lower_hex_io_option...
    virtual int on_set_lower_hex_io_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = this->set_output_lower_hex(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_lower_hex_io_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_lower_hex_io_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_lower_hex_io_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_lower_hex_io_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* lower_hex_io_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTARG;
        return chars;
    }

    /// on...upper_hex_io_option...
    virtual int on_set_upper_hex_io_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = this->set_output_upper_hex(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_upper_hex_io_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_upper_hex_io_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_upper_hex_io_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_upper_hex_io_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* upper_hex_io_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTARG;
        return chars;
    }

    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTVAL_C:
            err = this->on_plain_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTVAL_C:
            err = this->on_cipher_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTVAL_C:
            err = this->on_text_output_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTVAL_C:
            err = this->on_Ox_hex_output_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTVAL_C:
            err = this->on_base64_io_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTVAL_C:
            err = this->on_lower_hex_io_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTVAL_C:
            err = this->on_upper_hex_io_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }

    /// option_usage
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTVAL_C:
            chars = this->plain_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_CIPHER_OPTVAL_C:
            chars = this->cipher_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_TEXT_OUTPUT_OPTVAL_C:
            chars = this->text_output_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_0X_HEX_OUTPUT_OPTVAL_C:
            chars = this->Ox_hex_output_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE64_IO_OPTVAL_C:
            chars = this->base64_io_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_LOWER_HEX_IO_OPTVAL_C:
            chars = this->lower_hex_io_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_UPPER_HEX_IO_OPTVAL_C:
            chars = this->upper_hex_io_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }

    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace base
} /// namespace crypto
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_OPT_HPP
