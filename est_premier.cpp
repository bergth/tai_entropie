#include "est_premier.hpp"
#include <iostream>
#include <vector>
using namespace std;

int power(int a, unsigned int n, int p)
{
    int res = 1;      // Initialize result
    a = a % p;  // Update 'a' if 'a' >= p
 
    while (n > 0)
    {
        // If n is odd, multiply 'a' with result
        if (n & 1)
            res = (res*a) % p;
 
        // n must be even now
        n = n>>1; // n = n/2
        a = (a*a) % p;
    }
    return res;
}


bool naive(long int n)
{
    if(n == 0 || n == 1)
        return true;
    for(long int i = 2; i < n; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

bool naive_2(long int n)
{
    if(n == 0 || n == 1)
        return true;
    long int mid = n/2;
    for(long int i = 2; i <= mid; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

bool naive_3(long int n)
{
    if(n == 0 || n == 1)
        return true;
    long int sqr = sqrt(n);
    for(long int i = 2; i <= sqr; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

bool naive_4(long int n)
{
    if(n == 0 || n == 1)
        return true;
    if(n%2 == 0)
        return false;
    long int sqr = sqrt(n);
    for(long int i = 3; i <= sqr; i += 2)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

// PGP
bool fermat_PGP(long int n)
{
    vector<long int> a = {2,3,5,7};
    for(size_t i = 0; i < a.size(); i++)
    {
        if(!fermat_test(n,a[i]))
            return false;
    }
    return true;
}

bool fermat_test(long int n,long int a)
{
    if(n == 0 || n == 1 || n == 2)
        return true;
    cout << endl << "t:" << n << " " << a << " -> " << ((long int)(powl(a,n-1)) % n) << endl;
    if((long int)(power(a,n-1,1)) != 1)
        return false;
    return true;
}
