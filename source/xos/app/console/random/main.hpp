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
///   Date: 6/22/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_RANDOM_MAIN_HPP
#define XOS_APP_CONSOLE_RANDOM_MAIN_HPP

#include "xos/app/console/random/main_opt.hpp"
#include "xos/crypto/pseudo/random/number/generator.hpp"
#include "xos/crypto/array.hpp"

namespace xos {
namespace app {
namespace console {
namespace random {

/// class maint
template
<class TExtends = xos::app::console::random::main_optt<>,  class TImplements = typename TExtends::implements>

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
    maint(): run_(0) {
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

    /// ...generate_pseudo_random_number_run
    virtual int default_generate_pseudo_random_number_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        unsigned& bytes = this->bytes();

        if ((0 < bytes)) {
            xos::crypto::array random_array;

            if (bytes == (random_array.set_length(bytes))) {
                byte_t* random_bytes = 0; size_t random_length = 0;

                if ((random_bytes = random_array.has_elements(random_length))) {
                    size_t random_generated = 0;
                    xos::crypto::pseudo::random::number::generator random_generator;

                    if (random_length == (random_generated = random_generator.generate(random_bytes, random_length))) {
                        this->output_x(random_bytes, random_generated);
                    } else {
                    }
                } else {
                }
            }
        } else {
        }
        return err;
    }

protected:
}; /// class maint
typedef maint<> main;

} /// namespace random
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_RANDOM_MAIN_HPP
