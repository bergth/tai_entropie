#include<cstdint>
#include<cmath>

typedef unsigned long long int bigint;
typedef bool(*est_premier)(bigint);


bool naive(long int n);
bool naive_2(long int n);
bool naive_3(long int n);
bool naive_4(bigint n);
bool fermat(bigint n, int k);
bool fermat_5(bigint n);
bool fermat_10(bigint n);
bool fermat_20(bigint n);
bool fermat_40(bigint n);