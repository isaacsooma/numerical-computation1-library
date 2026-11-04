#include "aggregation.hpp"
#include "array_creation.hpp"
#include "array_utils.hpp"
#include "indexing.hpp"
#include "matrix.hpp"
#include "part1_arithmetic.hpp"
#include "part2_functions.hpp"
#include "statistics.hpp"
#include <iostream>
#include <limits>
#include <string>
#include <vector>

static std::vector<double> read_values(const std::string& label) {
    std::vector<double> values;
    std::cout << label << " (enter one number per line; blank line finishes):\n";
    std::string line;
    while (std::getline(std::cin, line)) {
        if (line.empty()) break;
        try { values.push_back(std::stod(line)); }
        catch (...) { std::cout << "Please enter a valid number or blank line.\n"; }
    }
    return values;
}

static void statistics_menu() {
    auto x = read_values("Enter data");
    if (x.empty()) { std::cout << "No values entered.\n"; return; }
    std::cout << "Mean: " << statistics::mean(x)
              << "\nMedian: " << statistics::median(x)
              << "\nMinimum: " << statistics::minimum(x)
              << "\nMaximum: " << statistics::maximum(x)
              << "\nStandard deviation: " << statistics::standard_deviation(x)
              << "\nCount: " << statistics::count(x)
              << "\n25th percentile: " << statistics::percentile(x, 25)
              << "\n75th percentile: " << statistics::percentile(x, 75) << '\n';
    std::cout << "Calculate correlation with a second variable? (y/n): ";
    std::string answer; std::getline(std::cin, answer);
    if (answer == "y" || answer == "Y") {
        auto y = read_values("Enter the second variable (same number of values)");
        std::cout << "Correlation: " << statistics::correlation(x, y) << '\n';
    }
}

static void creation_menu() {
    std::size_t rows, cols;
    std::cout << "Rows and columns: ";
    if (!(std::cin >> rows >> cols)) throw std::runtime_error("Invalid dimensions");
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    auto a = array_creation::zeros({rows, cols});
    auto b = array_creation::ones({rows, cols});
    std::cout << "Zeros: "; for (double v : a.values()) std::cout << v << ' ';
    std::cout << "\nOnes: "; for (double v : b.values()) std::cout << v << ' ';
    std::cout << '\n';
}

static void load_menu() {
    std::string path;
    std::cout << "File path [data/input/sample_2d_array.txt]: ";
    std::getline(std::cin, path);
    if (path.empty()) path = "data/input/sample_2d_array.txt";
    auto a = array_utils::load(path);
    std::cout << "Loaded shape: "; for (auto d : a.shape()) std::cout << d << ' ';
    std::cout << "\nValues: "; for (double v : a.values()) std::cout << v << ' ';
    array_utils::save(a, "data/output/round_trip_array.txt");
    std::cout << "\nSaved copy to data/output/round_trip_array.txt\n";
}

int main() {
    while (true) {
        std::cout << "\n=== NUMERICAL COMPUTING LIBRARY ===\n"
                  << "1. Statistical operations\n"
                  << "2. Array creation (zeros/ones)\n"
                  << "3. Aggregation and axis reductions (sample 2x3 array)\n"
                  << "4. Indexing and slicing (sample 2x3 array)\n"
                  << "5. Load and save array data\n"
                  << "6. Matrix operations (sample multiplication)\n"
                  << "7. Mathematical functions (power/sqrt/abs/exp)\n"
                  << "8. Vector arithmetic\n"
                  << "0. Exit\nChoice: ";
        int choice;
        if (!(std::cin >> choice)) return 0;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        try {
            if (choice == 0) break;
            if (choice == 1) statistics_menu();
            else if (choice == 2) creation_menu();
            else if (choice == 3) {
                NDArray a = array_utils::load("data/input/sample_2d_array.txt");
                NDArray axis0 = aggregation::sum(a, 0);
                NDArray axis1 = aggregation::sum(a, 1);
                std::cout << "Total sum: " << aggregation::sum(a) << "\nAxis 0: ";
                for (double v : axis0.values()) std::cout << v << ' ';
                std::cout << "\nAxis 1: ";
                for (double v : axis1.values()) std::cout << v << ' ';
                std::cout << '\n';
            } else if (choice == 4) {
                NDArray a = array_utils::load("data/input/sample_2d_array.txt");
                NDArray sliced = indexing::slice(a, 1, 0, 2);
                std::cout << "Element [1,2]: " << indexing::get(a, {1,2}) << "\nFirst two columns: ";
                for (double v : sliced.values()) std::cout << v << ' ';
                std::cout << '\n';
            } else if (choice == 5) load_menu();
            else if (choice == 6) {
                Matrix left{{1,2},{3,4}}, right{{5,6},{7,8}};
                Matrix product = multiplyMatrices(left, right);
                std::cout << "Matrix product:\n"; displayMatrix(product);
            } else if (choice == 7) {
                double x; std::cout << "Enter a number: ";
                if (!(std::cin >> x)) throw std::runtime_error("Invalid number");
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "x squared: " << part2::power(x, 2)
                          << "\nsqrt(abs(x)): " << part2::squareRoot(part2::absoluteValue(x))
                          << "\nexp(x): " << part2::exponential(x) << '\n';
            } else if (choice == 8) {
                auto left = read_values("Enter first vector");
                auto right = read_values("Enter second vector (same length)");
                auto result = part1::add(left, right);
                std::cout << "Sum: "; for (double v : result) std::cout << v << ' ';
                std::cout << '\n';
            }
            else std::cout << "Unknown menu choice.\n";
        } catch (const std::exception& e) {
            std::cout << "Operation failed: " << e.what() << '\n';
        }
    }
    std::cout << "Goodbye.\n";
    return 0;
}
