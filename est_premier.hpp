#include<cstdint>
#include<cmath>

typedef unsigned long long int bigint;
typedef bool(*est_premier)(bigint);

// méthode naive: on teste tous les diviseurs
bool naive(bigint n);
// méthode naive: on teste jusqu'à n/2
bool naive_2(bigint n);
// méthode naive: on teste jusqu'à sqrt(n)
bool naive_3(bigint n);
// méthode naive: on teste que les nombres impaires jusqu'à sqrt(n)
bool naive_4(bigint n);

//méthode de fermat
bool fermat(bigint n, int k);
// méthode de fermat avec k = 5
bool fermat_5(bigint n);
// méthode de fermat avec k = 10
bool fermat_10(bigint n);
// méthode de fermat avec k = 20
bool fermat_20(bigint n);
// méthode de fermat avec k = 40
bool fermat_40(bigint n);
// méthode de fermat avec k = 80
bool fermat_80(bigint n);
