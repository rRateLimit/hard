#include <stdio.h>

int main() {
#if defined(__AVX__)
    printf("AVX instruction set is enabled at compile time.\n");
#else
    printf("AVX instruction set is not enabled at compile time.\n");
#endif

#if defined(__AVX2__)
    printf("AVX2 instruction set is enabled at compile time.\n");
#else
    printf("AVX2 instruction set is not enabled at compile time.\n");
#endif

    // Other AVX families (e.g., AVX-512F)
#if defined(__AVX512F__)
    printf("AVX-512F instruction set is enabled at compile time.\n");
#else
    printf("AVX-512F instruction set is not enabled at compile time.\n");
#endif

    return 0;
}
