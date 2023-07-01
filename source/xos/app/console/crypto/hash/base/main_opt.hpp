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
///   Date: 6/25/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_OPT_HPP

#include "xos/app/console/crypto/base/main.hpp"
#include "xos/crypto/hash/algorithm.hpp"
#include "xos/io/crt/file/reader.hpp"

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_OPTIONS_CHARS_EXTEND \

#define XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_ARGS \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_ARGS

#define XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_ARGV \
    XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_PLAIN_ARGV

namespace xos {
namespace app {
namespace console {
namespace crypto {
namespace hash {
namespace base {

/// class main_optt
template
<class TExtends = xos::app::console::crypto::base::maint<>,  class TImplements = typename TExtends::implements>

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
            const char_t* arg = 0;
            if ((argc > optind) && (arg = argv[optind]) && (arg[0])) {
                err = this->all_hash_run(argc, argv, env);
            } else {
                err = extends::run(argc, argv, env);
            }
        }
        return err;
    }

    /// ...hash_run
    int (derives::*hash_run_)(int argc, char_t** argv, char_t** env);
    virtual int hash_run(int argc, char_t** argv, char_t** env) {
        xos::crypto::hash::algorithm* this_hash_algorithm = 0;
        int err = 1;

        LOGGER_IS_LOGGED_INFO("if ((this->hash_algorithm()))...");
        if ((this_hash_algorithm = this->hash_algorithm())) {
            xos::crypto::hash::algorithm& algorithm = *this_hash_algorithm;
            const char_t* arg = 0;

            LOGGER_IS_LOGGED_INFO("if ((argc > optind) && (arg = argv[optind]) && (arg[0]))...");
            if ((argc > optind) && (arg = argv[optind]) && (arg[0])) {

                LOGGER_IS_LOGGED_INFO("if (!(err = this->all_hash_source(algorithm, arg)))...");
                if (!(err = this->all_hash_source(algorithm, arg))) {
                    LOGGER_IS_LOGGED_INFO("...!(err = this->all_hash_source(algorithm, arg))");
                }
            } else {
                const char_t* chars = 0; size_t length = 0;

                LOGGER_IS_LOGGED_INFO("if ((chars = this->plain_text(length)) && (0 < length))...");
                if ((chars = this->plain_text(length)) && (0 < length)) {
                    LOGGER_IS_LOGGED_INFO("...\"" << chars << "\" = plain_text(length = " << length << ")");
                    LOGGER_IS_LOGGED_INFO("if (!(err = this->all_hash_chars(algorithm, chars, length)))...");
                    if (!(err = this->all_hash_chars(algorithm, chars, length))) {
                        LOGGER_IS_LOGGED_INFO("...!(err = this->all_hash_chars(algorithm, chars, length))");
                    }
                } else {
                    LOGGER_IS_LOGGED_INFO("if (!(err = this->all_hash_chars(algorithm, 0,0)))...");
                    if (!(err = this->all_hash_chars(algorithm, 0,0))) {
                        LOGGER_IS_LOGGED_INFO("...!(err = this->all_hash_chars(algorithm, 0,0))");
                    }
                }
            }
        }
        return err;
    }
    virtual int before_hash_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_hash_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_hash_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_hash_run(argc, argv, env))) {
            int err2 = 0;
            err = hash_run(argc, argv, env);
            if ((err2 = after_hash_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_hash_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_hash_run;
        return err;
    }
    virtual int hash_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_hash_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int hash_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...hash_source
    virtual int hash_source(xos::crypto::hash::algorithm& hash, io::reader& source) {
        int err = 1;
        size_t size = 0;
        byte_t *block = 0;

        if ((block = this->set_block_to_size(size))) {
            err = this->all_hash_source(hash, block, size, source);
        }
        return err;
    }
    virtual int before_hash_source(xos::crypto::hash::algorithm& hash, io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int after_hash_source(xos::crypto::hash::algorithm& hash, io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int all_hash_source(xos::crypto::hash::algorithm& hash, io::reader& source) {
        int err = 0;
        if (!(err = before_hash_source(hash, source))) {
            int err2 = 0;
            err = hash_source(hash, source);
            if ((err2 = after_hash_source(hash, source))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...hash_source
    virtual int hash_source(xos::crypto::hash::algorithm& hash, const char_t* location) {
        int err = 1;
        const char_t* chars = 0;

        if ((chars = location) && (chars[0])) {
            io::crt::file::reader source;

            LOGGER_IS_LOGGED_INFO("source.open(chars = \"" << chars << "\")...");
            if ((source.open(chars))) {
                LOGGER_IS_LOGGED_INFO("...source.open(chars = \"" << chars << "\")");

                LOGGER_IS_LOGGED_INFO("if (!(err = this->all_hash_source(hash, source)))...");
                if (!(err = this->all_hash_source(hash, source))) {
                    LOGGER_IS_LOGGED_INFO("...!(" << err << " = this->all_hash_source(hash, source))");
                }

                LOGGER_IS_LOGGED_INFO("source.close() \"" << chars << "\"...");
                if ((source.close())) {
                    LOGGER_IS_LOGGED_INFO("...source.close() \"" << chars << "\"");
                } else {
                    LOGGER_IS_LOGGED_ERROR("...failed on source.close() \"" << chars << "\"");
                }
            } else {
                LOGGER_IS_LOGGED_ERROR("...failed on source.open(chars = \"" << chars << "\")");
            }
        }
        return err;
    }
    virtual int before_hash_source(xos::crypto::hash::algorithm& hash, const char_t* location) {
        int err = 0;
        return err;
    }
    virtual int after_hash_source(xos::crypto::hash::algorithm& hash, const char_t* location) {
        int err = 0;
        return err;
    }
    virtual int all_hash_source(xos::crypto::hash::algorithm& hash, const char_t* location) {
        int err = 0;
        if (!(err = before_hash_source(hash, location))) {
            int err2 = 0;
            err = hash_source(hash, location);
            if ((err2 = after_hash_source(hash, location))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...hash_source
    virtual int hash_source(xos::crypto::hash::algorithm& hash, byte_t* block, size_t blocksize, io::reader& source) {
        int err = 1;
        ssize_t hashsize = 0, readcount = 0;
        size_t blockcount = 0, dots = 0;
        time_t t1 = 0, t2 = 0, t = 1;

        LOGGER_IS_LOGGED_INFO("if ((0 < (hashsize = hash.hashsize())) && (!(err = this->all_hash_initialize(hash))))...");
        if ((0 < (hashsize = hash.hashsize())) && (!(err = this->all_hash_initialize(hash)))) {

            LOGGER_IS_LOGGED_INFO("...((0 < (" << hashsize << " = hash.hashsize())) && (!(" << err << " = this->all_hash_initialize(hash))))");
            err = 0;
            LOGGER_IS_LOGGED_INFO("::time(&t1)...");
            ::time(&t1);
            for (ssize_t count = 0, amount = 0; 0 <= amount; count += amount, ++blockcount) {

                LOGGER_IS_LOGGED_INFO("if (0 < (amount = source.read(block, blocksize)))...");
                if (0 < (amount = source.read(block, blocksize))) {
                    LOGGER_IS_LOGGED_INFO("...(0 < (" << amount << " = source.read(block, blocksize)))");
                    readcount = amount;
                    LOGGER_IS_LOGGED_INFO("if (amount != (hash.hash(block, " << readcount << ")))...");
                    if (amount != (hash.hash(block, readcount))) {
                        LOGGER_IS_LOGGED_INFO("...(" << amount << " != (hash.hash(block, " << readcount << ")))");
                        err = 1;
                    } else {
                        LOGGER_IS_LOGGED_INFO("...(" << amount << " == (hash.hash(block, " << readcount << ")))");
                        LOGGER_IS_LOGGED_INFO("::time(&t2...");
                        ::time(&t2);
                        LOGGER_IS_LOGGED_INFO("if (" << (t2 - t1) << " >= " << t << ")...");
                        if ((t2 - t1) >= t) {
                            LOGGER_IS_LOGGED_INFO("...(" << (t2 - t1) << " >= " << t << ")");
                            t1 = t2;
                            ++dots;
                            this->err(".", 1);
                            LOGGER_IS_LOGGED_INFO("..." << (blockcount+1) << " blocks read");
                        }
                        continue;
                    }
                } else {
                    if (0 > (amount)) {
                        err = 1;
                    }
                }
                if (!(err)) {
                    if (dots) {
                        this->errln();
                    }
                    LOGGER_IS_LOGGED_INFO("if (!(err = this->hash_finalize(hash, hashsize, block, blocksize)))...");
                    if (!(err = this->hash_finalize(hash, hashsize, block, blocksize))) {
                        LOGGER_IS_LOGGED_INFO("...(!(err = this->hash_finalize(hash, hashsize, block, blocksize)))");
                    }
                }
                break;
            }
            if (!(err)) {
                LOGGER_IS_LOGGED_INFO("..." << (blockcount) << " blocks read");
            }
        }
        return err;
    }
    virtual int before_hash_source(xos::crypto::hash::algorithm& hash, byte_t* block, size_t blocksize, io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int after_hash_source(xos::crypto::hash::algorithm& hash, byte_t* block, size_t blocksize, io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int all_hash_source(xos::crypto::hash::algorithm& hash, byte_t* block, size_t blocksize, io::reader& source) {
        int err = 0;
        if (!(err = before_hash_source(hash, block, blocksize, source))) {
            int err2 = 0;
            err = hash_source(hash, block, blocksize, source);
            if ((err2 = after_hash_source(hash, block, blocksize, source))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...hash_chars
    virtual int hash_chars(xos::crypto::hash::algorithm& hash, const char_t* source, size_t length) {
        int err = 1;
        ssize_t hashsize = 0;

        LOGGER_IS_LOGGED_INFO("if ((0 < (hashsize = hash.hashsize())))...");
        if ((0 < (hashsize = hash.hashsize()))) {
            byte_t *block = 0; size_t blocksize = 0;

            LOGGER_IS_LOGGED_INFO("if ((block = this->hash(blocksize)) && (hashsize <= (blocksize)))...");
            if ((block = this->hash(blocksize)) && (hashsize <= (blocksize))) {

                LOGGER_IS_LOGGED_INFO("if (!(err = this->all_hash_chars(hash, hashsize, block, hashsize, source, length)))...");
                if (!(err = this->all_hash_chars(hash, hashsize, block, hashsize, source, length))) {
                    LOGGER_IS_LOGGED_INFO("...!(err = this->all_hash_chars(hash, hashsize, block, hashsize, source, length))");
                }
            }
        }
        return err;
    }
    virtual int before_hash_chars(xos::crypto::hash::algorithm& hash, const char_t* source, size_t length) {
        int err = 0;
        return err;
    }
    virtual int after_hash_chars(xos::crypto::hash::algorithm& hash, const char_t* source, size_t length) {
        int err = 0;
        return err;
    }
    virtual int all_hash_chars(xos::crypto::hash::algorithm& hash, const char_t* source, size_t length) {
        int err = 0;
        if (!(err = before_hash_chars(hash, source, length))) {
            int err2 = 0;
            err = hash_chars(hash, source, length);
            if ((err2 = after_hash_chars(hash, source, length))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...hash_chars
    virtual int hash_chars(xos::crypto::hash::algorithm& hash, size_t hashsize, byte_t* block, size_t blocksize, const char_t* source, size_t length) {
        int err = 1;

        if ((block) && (blocksize)) {

            LOGGER_IS_LOGGED_INFO("if (!(err = (this->all_hash_initialize(hash))))...");
            if (!(err = (this->all_hash_initialize(hash)))) {
                ssize_t count = 0;

                LOGGER_IS_LOGGED_INFO("if ((source) && (length))...");
                if ((source) && (length)) {
                    LOGGER_IS_LOGGED_INFO("hash.hash(source = \"" << string_t(source, length) << "\", length = " << length << ")...");
                    LOGGER_IS_LOGGED_INFO("if (length != (hash.hash(source, length)))...");
                    if (length != (hash.hash(source, length))) {
                        LOGGER_IS_LOGGED_INFO("...(length != (hash.hash(source, length))");
                        return err = 1;
                    }
                }
                LOGGER_IS_LOGGED_INFO("if (!(err = this->all_hash_finalize(hash, hashsize, block, blocksize)))...");
                if (!(err = this->all_hash_finalize(hash, hashsize, block, blocksize))) {
                    LOGGER_IS_LOGGED_INFO("...!(err = this->all_hash_finalize(hash, hashsize, block, blocksize))");
                }
            }
        }
        return err;
    }
    virtual int before_hash_chars(xos::crypto::hash::algorithm& hash, size_t hashsize, byte_t* block, size_t blocksize, const char_t* source, size_t length) {
        int err = 0;
        return err;
    }
    virtual int after_hash_chars(xos::crypto::hash::algorithm& hash, size_t hashsize, byte_t* block, size_t blocksize, const char_t* source, size_t length) {
        int err = 0;
        return err;
    }
    virtual int all_hash_chars(xos::crypto::hash::algorithm& hash, size_t hashsize, byte_t* block, size_t blocksize, const char_t* source, size_t length) {
        int err = 0;
        if (!(err = before_hash_chars(hash, hashsize, block, blocksize, source, length))) {
            int err2 = 0;
            err = hash_chars(hash, hashsize, block, blocksize, source, length);
            if ((err2 = after_hash_chars(hash, hashsize, block, blocksize, source, length))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...hash_initialize
    int (derives::*hash_initialize_)(xos::crypto::hash::algorithm& hash);
    virtual int hash_initialize(xos::crypto::hash::algorithm& hash) {
        int err = 0;
        if ((this->hash_initialize_)) {
            err = (this->*hash_initialize_)(hash);
        } else {
            err = this->all_simple_hash_initialize(hash);
        }
        return err;
    }
    virtual int before_hash_initialize(xos::crypto::hash::algorithm& hash) {
        int err = 0;
        return err;
    }
    virtual int after_hash_initialize(xos::crypto::hash::algorithm& hash) {
        int err = 0;
        return err;
    }
    virtual int all_hash_initialize(xos::crypto::hash::algorithm& hash) {
        int err = 0;
        if (!(err = before_hash_initialize(hash))) {
            int err2 = 0;
            err = hash_initialize(hash);
            if ((err2 = after_hash_initialize(hash))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...simple_hash_initialize
    virtual int simple_hash_initialize(xos::crypto::hash::algorithm& hash) {
        int err = 0;
        if (0 > hash.initialize()) {
            err = 1;
        }
        return err;
    }
    virtual int before_simple_hash_initialize(xos::crypto::hash::algorithm& hash) {
        int err = 0;
        return err;
    }
    virtual int after_simple_hash_initialize(xos::crypto::hash::algorithm& hash) {
        int err = 0;
        return err;
    }
    virtual int all_simple_hash_initialize(xos::crypto::hash::algorithm& hash) {
        int err = 0;
        if (!(err = before_simple_hash_initialize(hash))) {
            int err2 = 0;
            err = simple_hash_initialize(hash);
            if ((err2 = after_simple_hash_initialize(hash))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_simple_hash_initialize(int argc, char_t** argv, char_t** env) {
        int err = 0;
        hash_initialize_ = &derives::all_simple_hash_initialize;
        return err;
    }
    virtual int simple_hash_initialize_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_simple_hash_initialize(int argc, char_t** argv, char_t** env) {
        int err = 0;
        hash_initialize_ = 0;
        return err;
    }
    virtual int simple_hash_initialize_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...hmac_hash_initialize
    virtual int hmac_hash_initialize(xos::crypto::hash::algorithm& hash) {
        int err = 1;
        const byte_t* hmac_key = 0;
        size_t sizeof_hmac_key = 0;

        if ((hmac_key = this->hmac_key(sizeof_hmac_key))) {
            if (0 <= hash.initialize(hmac_key, sizeof_hmac_key)) {
                err = 0;
            }
        } else {
        }
        return err;
    }
    virtual int before_hmac_hash_initialize(xos::crypto::hash::algorithm& hash) {
        int err = 0;
        return err;
    }
    virtual int after_hmac_hash_initialize(xos::crypto::hash::algorithm& hash) {
        int err = 0;
        return err;
    }
    virtual int all_hmac_hash_initialize(xos::crypto::hash::algorithm& hash) {
        int err = 0;
        if (!(err = before_hmac_hash_initialize(hash))) {
            int err2 = 0;
            err = hmac_hash_initialize(hash);
            if ((err2 = after_hmac_hash_initialize(hash))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_hmac_hash_initialize(int argc, char_t** argv, char_t** env) {
        int err = 0;
        hash_initialize_ = &derives::all_hmac_hash_initialize;
        return err;
    }
    virtual int hmac_hash_initialize_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_hmac_hash_initialize(int argc, char_t** argv, char_t** env) {
        int err = 0;
        hash_initialize_ = 0;
        return err;
    }
    virtual int hmac_hash_initialize_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...hash_finalize
    int (derives::*hash_finalize_)(xos::crypto::hash::algorithm& hash, ssize_t hashsize, byte_t* block, size_t blocksize);
    virtual int hash_finalize(xos::crypto::hash::algorithm& hash, ssize_t hashsize, byte_t* block, size_t blocksize) {
        int err = 0;
        if ((this->hash_finalize_)) {
            err = (this->*hash_finalize_)(hash, hashsize, block, blocksize);
        } else {
            err = this->all_simple_hash_finalize(hash, hashsize, block, blocksize);
        }
        return err;
    }
    virtual int before_hash_finalize(xos::crypto::hash::algorithm& hash, ssize_t hashsize, byte_t* block, size_t blocksize) {
        int err = 0;
        return err;
    }
    virtual int after_hash_finalize(xos::crypto::hash::algorithm& hash, ssize_t hashsize, byte_t* block, size_t blocksize) {
        int err = 0;
        return err;
    }
    virtual int all_hash_finalize(xos::crypto::hash::algorithm& hash, ssize_t hashsize, byte_t* block, size_t blocksize) {
        int err = 0;
        if (!(err = before_hash_finalize(hash, hashsize, block, blocksize))) {
            int err2 = 0;
            err = hash_finalize(hash, hashsize, block, blocksize);
            if ((err2 = after_hash_finalize(hash, hashsize, block, blocksize))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...simple_hash_finalize
    virtual int simple_hash_finalize(xos::crypto::hash::algorithm& hash, ssize_t hashsize, byte_t* block, size_t blocksize) {
        int err = 1;

        LOGGER_IS_LOGGED_INFO("if (0 < (hashsize))...");
        if (0 < (hashsize)) {
            ssize_t count = 0;

            LOGGER_IS_LOGGED_INFO("if (" << hashsize << " == (count = hash.finalize(block = " << x_to_string(block, hashsize) << " , blocksize = " << blocksize << ")))...");
            if (hashsize == (count = hash.finalize(block, blocksize))) {
                const bool& output_lf = this->output_lf();

                LOGGER_IS_LOGGED_INFO("...(" << hashsize << " == (" << count << "  = hash.finalize(block = " << x_to_string(block, hashsize) << " , blocksize = " << blocksize << ")))");
                LOGGER_IS_LOGGED_INFO("this->output_hash(block = " << x_to_string(block, hashsize) << ", " << count << ", " << output_lf << ")...");
                this->output_hash(block, count, output_lf);
                err = 0;
            }
        }
        return err;
    }
    virtual int before_simple_hash_finalize(xos::crypto::hash::algorithm& hash, ssize_t hashsize, byte_t* block, size_t blocksize) {
        int err = 0;
        return err;
    }
    virtual int after_simple_hash_finalize(xos::crypto::hash::algorithm& hash, ssize_t hashsize, byte_t* block, size_t blocksize) {
        int err = 0;
        return err;
    }
    virtual int all_simple_hash_finalize(xos::crypto::hash::algorithm& hash, ssize_t hashsize, byte_t* block, size_t blocksize) {
        int err = 0;
        if (!(err = before_simple_hash_finalize(hash, hashsize, block, blocksize))) {
            int err2 = 0;
            err = simple_hash_finalize(hash, hashsize, block, blocksize);
            if ((err2 = after_simple_hash_finalize(hash, hashsize, block, blocksize))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_simple_hash_finalize(int argc, char_t** argv, char_t** env) {
        int err = 0;
        hash_finalize_ = &derives::all_simple_hash_finalize;
        return err;
    }
    virtual int simple_hash_finalize_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_simple_hash_finalize(int argc, char_t** argv, char_t** env) {
        int err = 0;
        hash_finalize_ = 0;
        return err;
    }
    virtual int simple_hash_finalize_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...output_hash
    ssize_t (derives::*output_hash_)(const void* bytes, size_t length, bool lf);
    virtual ssize_t output_hash(const void* bytes, size_t length, bool lf = false) {
        ssize_t amount = 0;
        if (output_hash_) {
            if (0 <= (amount = (this->*output_hash_)(bytes, length, lf))) {
            } else {
            }
        } else {
            if (0 <= (amount = default_output_hash(bytes, length, lf))) {
            } else {
            }
        }
        return amount;
    }
    virtual ssize_t default_output_hash(const void* bytes, size_t length, bool lf = false) {
        ssize_t amount = 0;
        if (0 <= (amount = this->all_output_x(bytes, length, lf))) {
        } else {
        }
        return amount;
    }
    virtual ssize_t before_output_hash(const void* bytes, size_t length, bool lf = false) {
        ssize_t amount = 0;
        return amount;
    }
    virtual ssize_t after_output_hash(const void* bytes, size_t length, bool lf = false) {
        ssize_t amount = 0;
        return amount;
    }
    virtual ssize_t all_output_hash(const void* bytes, size_t length, bool lf = false) {
        ssize_t amount = 0;
        if (0 <= (amount = before_output_hash(bytes, length, lf))) {
            ssize_t amount2 = 0;
            if (0 <= (amount2 = output_hash(bytes, length, lf))) {
                amount += amount2;
                if (0 <= (amount2 = after_output_hash(bytes, length, lf))) {
                    amount += amount2;
                }
            }
        }
        return amount;
    }

    /// ...this_output_plain_run
    virtual int this_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_output_plain_run(argc, argv, env))) {
        }
        return err;
    }
    virtual int before_this_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_this_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_this_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_this_output_plain_run(argc, argv, env))) {
            int err2 = 0;
            err = this_output_plain_run(argc, argv, env);
            if ((err2 = after_this_output_plain_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_this_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_this_output_plain_run;
        return err;
    }
    virtual int this_output_plain_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_this_output_plain_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int this_output_plain_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    /// option_usage
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

    /// on...plain_option...
    virtual int on_plain_option_get
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_this_output_plain_run(argc, argv, env))) {
            if (!(err = this_output_plain_run_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_plain_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = set_hash_run(argc, argv, env))) {
                if (!(err = hash_run_set(argc, argv, env))) {
                } else {
                }
            } else {
            }
        } else {
        }
        return err;
    }

    /// ...hash_algorithm
    virtual xos::crypto::hash::algorithm* set_hash_algorithm(xos::crypto::hash::algorithm* to) {
        return hash_algorithm();
    }
    virtual xos::crypto::hash::algorithm* hash_algorithm() const {
        return 0;
    }

    /// ...hmac_key...
    virtual const byte_t* hmac_key(size_t& size) const {
        size = 0;
        return 0;
    }

    /// ...hash...
    virtual byte_t* hash(size_t& size) const {
        size = 0;
        return 0;
    }

    /// ...block...
    virtual byte_t* set_block_to_size(size_t& size) {
        size = 0;
        return 0;
    }
    virtual size_t set_block_size(size_t to) {
        return block_size();
    }
    virtual size_t block_size() const {
        return 0;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace base
} /// namespace hash
} /// namespace crypto
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_CRYPTO_HASH_BASE_MAIN_OPT_HPP
