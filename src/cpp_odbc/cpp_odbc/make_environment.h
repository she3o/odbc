#pragma once
/**
 *  @file make_environment.h
 *  @date 12.12.2014
 *  @author mkoenig
 *  @brief
 *
 *  $LastChangedDate$
 *  $LastChangedBy$
 *  $LastChangedRevision$
 *
 */

#include "cpp_odbc/environment.h"
#include <memory>
#include <boost/shared_ptr.hpp>

namespace cpp_odbc {

/**
 * @brief Returns an environment which fires calls using the unixODBC API
 */
boost::shared_ptr<environment> make_environment();

/**
 * @brief Returns an environment which fires calls using the unixODBC API
 *        including debugging output
 */
boost::shared_ptr<environment> make_debug_environment();

}
