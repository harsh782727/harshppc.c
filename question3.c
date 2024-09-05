#include <stdio.h>

int main() {
    printf("Size of char: %lu byte\n", sizeof(char));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of short int: %lu bytes\n", sizeof(short int));
    printf("Size of long int: %lu bytes\n", sizeof(long int));
    printf("Size of long long int: %lu bytes\n", sizeof(long long int));
    printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));
    printf("Size of signed char: %lu byte\n", sizeof(signed char));
    printf("Size of unsigned char: %lu byte\n", sizeof(unsigned char));
    printf("Size of long double: %lu bytes\n", sizeof(long double));

    return 0;
}
