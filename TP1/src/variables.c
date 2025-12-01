#include <stdio.h>

int main(){
    // 1. char
    char c = 'A';
    unsigned char uc = 200; // valeur entre 0 et 255
    printf("char c = %c, unsigned char uc = %u\n", c, uc);

    // 2. short
    short s = -123;
    unsigned short us = 50000;
    printf("short s = %d, unsigned short us = %u\n", s, us);

    // 3. int
    int i = -1000;
    unsigned int ui = 4000;
    printf("int i = %d, unsigned int ui = %u\n", i, ui);

    // 4. long int
    long int li = -100000;
    unsigned long int uli = 100000;
    printf("long int li = %ld, unsigned long int uli = %lu\n", li, uli);

    // 5. long long int
    long long int lli = -10000000000;
    unsigned long long int ulli = 10000000000;
    printf("long long int lli = %lld, unsigned long long int ulli = %llu\n", lli, ulli);

    // 6. float
    float f = 3.14f;
    printf("float f = %f\n", f);

    // 7. double
    double d = 3.1415926535;
    printf("double d = %lf\n", d);

    // 8. long double
    long double ld = 3.141592653589793238;
    printf("long double ld = %Lf\n", ld);

    return 0;
}

