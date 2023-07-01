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
///   Date: 6/22/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_RANDOM_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_RANDOM_MAIN_OPT_HPP

#include "xos/app/console/verbose/main.hpp"

#define XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPT "generate"
#define XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTARG "[0..n]"
#define XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTUSE "generate random bytes"
#define XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTVAL_S "g::"
#define XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTVAL_C 'g'
#define XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTION \
   {XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPT, \
    XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPT "bits"
#define XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTARG "[0..n]"
#define XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTUSE "random size in bits"
#define XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTVAL_S "b::"
#define XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTVAL_C 'b'
#define XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTION \
   {XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPT, \
    XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPT "bytes"
#define XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTARG "[0..n]"
#define XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTUSE "random size in bytes"
#define XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTVAL_S "y::"
#define XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTVAL_C 'y'
#define XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTION \
   {XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPT, \
    XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTARG_RESULT, \
    XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_RANDOM_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTVAL_S \
   XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTVAL_S \
   XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTVAL_S \

#define XOS_APP_CONSOLE_RANDOM_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTION \
   XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTION \
   XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_RANDOM_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_RANDOM_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_VERBOSE_MAIN_OUTPUT_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_RANDOM_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_RANDOM_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_VERBOSE_MAIN_OUTPUT_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_RANDOM_MAIN_ARGS 0
#define XOS_APP_CONSOLE_RANDOM_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace random {

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
    main_optt()
    : run_(0),
      generate_pseudo_random_number_run_(0),
      bits_(1024), bytes_((bits_ + (8 - 1)) / 8) {
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

    /// ...generate_pseudo_random_number_run
    int (derives::*generate_pseudo_random_number_run_)(int argc, char_t** argv, char_t** env);
    virtual int generate_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (generate_pseudo_random_number_run_) {
            if (!(err = (this->*generate_pseudo_random_number_run_)(argc, argv, env))) {
            } else {
            }
        } else {
            if (!(err = default_generate_pseudo_random_number_run(argc, argv, env))) {
            } else {
            }
        }
        return err;
    }
    virtual int default_generate_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_generate_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_generate_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_generate_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_generate_pseudo_random_number_run(argc, argv, env))) {
            int err2 = 0;
            err = generate_pseudo_random_number_run(argc, argv, env);
            if ((err2 = after_generate_pseudo_random_number_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_generate_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_generate_pseudo_random_number_run;
        return err;
    }
    virtual int generate_pseudo_random_number_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_generate_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int generate_pseudo_random_number_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...output_bits_run
    virtual int output_bits_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        unsigned& bits = this->bits();
        unsigned_to_string output(bits);
        this->outln(output);
        return err;
    }
    virtual int before_output_bits_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_bits_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_bits_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_bits_run(argc, argv, env))) {
            int err2 = 0;
            err = output_bits_run(argc, argv, env);
            if ((err2 = after_output_bits_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_bits_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_bits_run;
        return err;
    }
    virtual int output_bits_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_bits_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_bits_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...output_bytes_run
    virtual int output_bytes_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        unsigned& bytes = this->bytes();
        unsigned_to_string output(bytes);
        this->outln(output);
        return err;
    }
    virtual int before_output_bytes_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_bytes_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_bytes_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_bytes_run(argc, argv, env))) {
            int err2 = 0;
            err = output_bytes_run(argc, argv, env);
            if ((err2 = after_output_bytes_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_bytes_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_bytes_run;
        return err;
    }
    virtual int output_bytes_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_bytes_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_bytes_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// on...generate_option...
    virtual int on_get_generate_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_generate_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_generate_pseudo_random_number_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_generate_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            unsigned to = 0;
            string_t arg(optarg);
            if ((0 < (to = arg.to_unsigned()))) {
                this->set_bytes(to);
                this->set_bits_to_bytes(to);
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_generate_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_generate_pseudo_random_number_run(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_generate_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_generate_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_generate_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_generate_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_generate_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* generate_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTUSE;
        optarg = XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTARG;
        return chars;
    }

    /// on...bits_option...
    virtual int on_get_bits_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_bits_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_output_bits_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_bits_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            unsigned to = 0;
            string_t arg(optarg);
            if ((0 < (to = arg.to_unsigned()))) {
                this->set_bits(to);
                this->set_bytes_to_bits(to);
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_bits_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_generate_pseudo_random_number_run(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_bits_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_bits_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_bits_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_bits_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_bits_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* bits_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTUSE;
        optarg = XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTARG;
        return chars;
    }

    /// on...bytes_option...
    virtual int on_get_bytes_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_bytes_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_output_bytes_run(argc, argv, env))) {
        } else {
        }
        return err;
    }
    virtual int on_set_bytes_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            unsigned to = 0;
            string_t arg(optarg);
            if ((0 < (to = arg.to_unsigned()))) {
                this->set_bytes(to);
                this->set_bits_to_bytes(to);
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_bytes_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_generate_pseudo_random_number_run(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_bytes_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_bytes_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_bytes_option_set(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
            if (!(err = on_get_bytes_option(optarg, optind, argc, argv, env))) {
                if (!(err = on_bytes_option_get(optarg, optind, argc, argv, env))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual const char_t* bytes_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTUSE;
        optarg = XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTARG;
        return chars;
    }

    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTVAL_C:
            err = this->on_generate_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTVAL_C:
            err = this->on_bits_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTVAL_C:
            err = this->on_bytes_option(optval, optarg, optname, optind, argc, argv, env);
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

        case XOS_APP_CONSOLE_RANDOM_MAIN_GENERATE_OPTVAL_C:
            chars = this->generate_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RANDOM_MAIN_BITS_OPTVAL_C:
            chars = this->bits_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_RANDOM_MAIN_BYTES_OPTVAL_C:
            chars = this->bytes_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }

    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_RANDOM_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_RANDOM_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_RANDOM_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_RANDOM_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

    /// ...bits / ...bytes
    virtual unsigned& set_bits_to_bytes(const unsigned& to) {
        unsigned& bits = this->bits();
        bits = (to * 8);
        return bits;
    }
    virtual unsigned& set_bits(const unsigned& to) {
        unsigned& bits = this->bits();
        bits = to;
        return bits;
    }
    virtual unsigned& bits() const {
        return (unsigned&)bits_;
    }
    virtual unsigned& set_bytes_to_bits(const unsigned& to) {
        unsigned& bytes = this->bytes();
        bytes = (to + (8 - 1)) / 8;
        return bytes;
    }
    virtual unsigned& set_bytes(const unsigned& to) {
        unsigned& bytes = this->bytes();
        bytes = to;
        return bytes;
    }
    virtual unsigned& bytes() const {
        return (unsigned&)bytes_;
    }

protected:
    unsigned bits_, bytes_;
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace random
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_RANDOM_MAIN_OPT_HPP
