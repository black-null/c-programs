int comp(const void *a, const void *b) {
    int p = __builtin_popcount(*(int*)a) - __builtin_popcount(*(int*)b);
    return p ? p : *(int*)a-*(int*)b;
}

void sort_by_bit(int *a, int n){
    qsort(a, n, 4UL, comp);
}
