#include <iostream>

/**
 * Prints the size of the transferred value in bytes as follows:
 *
 * Size of 'type_name': X byte
 *
 * Where X is the size that is returned by the function sizeof(T).
 *
 * @param   type_name        The name of the type.
 */
template <typename T>
void print_size(std::string type_name)
{
    std::cout << "Size of " << type_name << ": " << sizeof(T) << " byte" << std::endl;
}

/**
 * Prints out the following integer types:
 *
 * - signed char
 * - unsigned char
 * - char
 * - short
 * - short int
 * - unsigned short int
 * - int
 * - unsigned int
 * - long int
 * - unsigned long int
 * - long long int
 * - unsigned long long int
 */
void print_integer_types()
{
    print_size<signed char>            ("signed char");
    print_size<unsigned char>          ("unsigned char");
    print_size<char>                   ("char");
    print_size<short>                  ("short");
    print_size<short int>              ("short int");
    print_size<unsigned short int>     ("unsigned short int");
    print_size<int>                    ("int");
    print_size<unsigned int>           ("unsigned int");
    print_size<long int>               ("long int");
    print_size<unsigned long int>      ("unsigned long int");
    print_size<long long int>          ("long long int");
    print_size<unsigned long long int> ("unsigned long long int");
}

/**
 * Prints out the following real number types:
 *
 * - float
 * - double
 * - long double
 */
void print_real_number_types()
{
    print_size<float>       ("float");
    print_size<double>      ("double");
    print_size<long double> ("long double");
}

/**
 * This application prints all listed primitive data types of the
 * GNU C Reference Manual [1] excluding the complex number types
 * with information on their allocated memory:
 *
 * Integer Types:
 * - signed char
 * - unsigned char
 * - char
 * - short
 * - short int
 * - unsigned short int
 * - int
 * - unsigned int
 * - long int
 * - unsigned long int
 * - long long int
 * - unsigned long long int
 *
 * Real Number Types:
 * - float
 * - double
 * - long double
 *
 * [1] Rothwell, Trevis, & Youngman, James. 2015. The GNU C Reference Manual.
 * http://www.gnu.org/software/gnu-c-manual/gnu-c-manual.pdf . Free Software
 * Foundation, Inc. [Online. Accessed 1st July 2015].
 *
 * @author Florian Willich
 */
int main()
{
    print_integer_types();
    print_real_number_types();

    return 0;
}