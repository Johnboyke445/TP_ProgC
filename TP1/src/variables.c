#include <stdio.h>

int main(){
    // 1. char
    char c = 'A';
    unsigned char uc = 200; // valeur entre 0 et 255
    printf("char = %c, unsigned char = %u\n", c, uc);

    // 2. short
    short s = -123;
    unsigned short us = 50000;
    printf("short = %d, unsigned short  = %u\n", s, us);

    // 3. int
    int i = -1000;
    unsigned int ui = 4000;
    printf("int = %d, unsigned int = %u\n", i, ui);

    // 4. long int
    long int li = -100000;
    unsigned long int uli = 100000;
    printf("long int = %ld, unsigned long int = %lu\n", li, uli);

    // 5. long long int
    long long int lli = -10000000000;
    unsigned long long int ulli = 10000000000;
    printf("long long int = %lld, unsigned long long int = %llu\n", lli, ulli);

    // 6. float
    float f = 3.14f;
    printf("float = %f\n", f);

    // 7. double
    double d = 3.1415926535;
    printf("double = %lf\n", d);

    // 8. long double
    long double ld = 3.141592653589793238;
    printf("long double = %Lf\n", ld);

    return 0;
}


