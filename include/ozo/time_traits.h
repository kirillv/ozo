#pragma once

#include <chrono>

namespace ozo {

/**
 * @brief Time traits of the library
 * @ingroup group-core-types
 */
struct time_traits {
    using duration = std::chrono::steady_clock::duration; //!< Time duration type of the library
    using time_point = std::chrono::steady_clock::time_point; //!< Time point type of the library
    /**
     * Returns current time point
     *
     * @return time_point --- current time
     */
    static time_point now() noexcept(noexcept(std::chrono::steady_clock::now())) {
        return std::chrono::steady_clock::now();
    }
};

struct no_time_constrain_t {};

constexpr auto no_time_constrain = no_time_constrain_t{};

} // namespace ozo
