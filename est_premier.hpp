#include<cstdint>
#include<cmath>

typedef bool(*est_premier)(long int);

bool naive(long int n);
bool naive_2(long int n);
bool naive_3(long int n);
bool naive_4(long int n);
bool fermat_test(long int n,long int a);
bool fermat_PGP(long int n);