#include <iostream>

template <typename T>
void print_size(T type, std::string name)
{
    std::cout << "Size of " << name << ": " << sizeof(type) << " byte" << std::endl;
}

int main() {

    char    character { 'a' };
    int     integer_standard { 1 };
    int64_t integer_64 { 1 };
    float   floating_point { 1.0f };
    double  floating_point_double_precision { 1.0 };

    print_size<char>(character, "character (char)");
    print_size<int>(integer_standard, "standard integer (int)");
    print_size<int64_t >(integer_64, "64-bit integer (int64_t)");
    print_size<float>(floating_point, "floating point (float)");
    print_size<double>(floating_point_double_precision, "floating point with double precision (double)");

    return 0;
};