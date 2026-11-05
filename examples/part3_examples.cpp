#include "part3_floating_Point_and_Invalid_Input.hpp"

#include <iostream>
#include <limits>

int main() {
    // Example 1: Check whether individual floating-point values are finite.
    std::cout << std::boolalpha;
    std::cout << "Is 25.5 finite? " << part3::isFinite(25.5) << '\n';
    std::cout << "Is infinity finite? "
              << part3::isFinite(std::numeric_limits<double>::infinity())
              << '\n';

    // Example 2: Check whether every value in an array is finite.
    part3::Array valid_values = {2.5, 4.0, 6.5};
    part3::Array values_with_infinity = {
        2.5, std::numeric_limits<double>::infinity(), 6.5
    };

    std::cout << "Are all values in the first array finite? "
              << part3::areFinite(valid_values) << '\n';
    std::cout << "Are all values in the second array finite? "
              << part3::areFinite(values_with_infinity) << '\n';

    // Example 3: Compare two values using a tolerance.
    std::cout << "Are 5.000001 and 5.0 approximately equal? "
              << part3::approximatelyEqual(5.000001, 5.0, 0.00001)
              << '\n';
    std::cout << "Are 5.5 and 5.0 approximately equal? "
              << part3::approximatelyEqual(5.5, 5.0, 0.1) << '\n';

    // Example 4: Invalid tolerances and non-finite values are rejected.
    std::cout << "Is a negative tolerance accepted? "
              << part3::approximatelyEqual(5.0, 5.0, -0.1) << '\n';
    std::cout << "Is infinity approximately equal to 5.0? "
              << part3::approximatelyEqual(
                     std::numeric_limits<double>::infinity(), 5.0, 0.01)
              << '\n';

    return 0;
}
