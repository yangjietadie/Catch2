/*
 *  Created by Phil on 5/8/2012.
 *  Copyright 2012 Two Blue Cubes Ltd. All rights reserved.
 *
 *  Distributed under the Boost Software License, Version 1.0. (See accompanying
 *  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#include "catch_notimplemented_exception.h"
#include <sstream>

namespace Catch {

    NotImplementedException::NotImplementedException( SourceLineInfo const& lineInfo ) {
        std::ostringstream oss;
        oss << lineInfo << ": function ";
        oss << "not implemented";
        m_what = oss.str();
    }

    const char* NotImplementedException::what() const noexcept {
        return m_what.c_str();
    }

} // end namespace Catch