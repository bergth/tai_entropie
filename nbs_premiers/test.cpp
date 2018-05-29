#include "test.hpp"
#include<vector>
#include<random>
using namespace std;

/*int test(est_premier f, int a, int b)
{
    int res = 0;
    for(int i = a; i <= b; i++)
    {
        if(f(i))
            res++;
    }
    return res;
}*/


void test_multiples(vector<est_premier> funcs, bigint a, bigint b, int n)
{

    vector<long int> nbs;
    std::default_random_engine re(42);
    std::uniform_int_distribution<long int> distrib {(long int)a,(long int)b};
    for(int i = 0; i < n; i++)
    {
        nbs.push_back(distrib(re));
    }

    time_p first;
    time_p second;
    fsec fs;
    float nb_secs = 0;
    int res = 0;
    for(size_t j = 0; j < funcs.size(); j++)
    {
        nb_secs = 0;
        res = 0;
        for(size_t i = 0; i < nbs.size(); i++)
        {
            first = Time::now();
            res += funcs[j](nbs[i]);
            second = Time::now();
            fs = second - first;
            nb_secs += fs.count();
            a = b;
            b *= 10;
        }
        cout << j << ": " << res << " --> " << nb_secs << " s" << endl;
    }
}


