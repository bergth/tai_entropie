#include <iostream>
#include <vector>
#include "test.hpp"
using namespace std;


int main()
{
    vector<est_premier> funcs = {naive_4, fermat_5, fermat_10, fermat_20, fermat_40};
    test_multiples(funcs,10000,100000000,1000000);
}

