#include <criterion/criterion.h>

void sort_by_bit(int * arr, int arrLength);

// Basic test

Test(sort_by_bit, pass_basic_test){
    int a[] = {3, 8, 3, 6, 5, 7, 9, 1};
    int n = (sizeof a / sizeof *a);

    sort_by_bit(a, n);

    int res[] = {1, 8, 3, 3, 5, 6, 9,7};
    
    for (int i = 0; i < n; i += 1){
        cr_assert(
            a[i] == res[i]
        );    
    }
}

