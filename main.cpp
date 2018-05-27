#include <iostream>
#include <vector>
#include "test.hpp"
using namespace std;


int main()
{
    vector<est_premier> funcs = { naive_4, fermat_PGP};
    test_multiples(funcs,100000000,1000000000,200);
}

