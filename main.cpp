#include <iostream>
#include <vector>
#include "test.hpp"
using namespace std;


int main()
{
    srand(time(NULL));
    // a = 10^7 b = 10^8 nb = 500
    //test_multiples({naive,naive_2,naive_3,naive_4},10000000,100000000,500);

    // a = 10^8 b = 10^9 n = 7*10^5
   // test_multiples({naive_4,fermat_20},100000000,1000000000,700000);


    // a = 10^3 b = 10^4 n = 10^5
    test_multiples({naive_4,fermat_5,fermat_20,fermat_80},100000,1000000000,1000000);

    // a = 0 b = 100 n = 10^5
    //test_multiples({naive_4,fermat_5,fermat_80},0,100,100000);
   
}
/*
    
a = 10^8  b = 10^9 et n = 10^8
test_multiples({naive_4,fermat_5,fermat_20,fermat_80},100000000,1000000000,100000000);
0: 5006096 --> 494.191 s
1: 5006116 --> 23.6477 s
2: 5006111 --> 50.5683 s
3: 5006099 --> 161.53 s
*/