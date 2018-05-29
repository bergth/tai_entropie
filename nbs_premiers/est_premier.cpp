#include "est_premier.hpp"
#include <iostream>
#include <vector>
using namespace std;


bigint power(bigint a, bigint n)
{
    bigint p = n;
    n = n - 1;
    a = a % p;
    bigint res = 1;
    while(n > 0)
    {
        if (n & 1)
        {
            res = (res*a) % p;
        }
        n = n >> 1;
        a = (a*a) %p;
    }
    return res;
}

bool naive(bigint n)
{
    if(n == 0)
        return false;
    if(n == 1)
        return true;
    for(bigint i = 2; i < n; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

bool naive_2(bigint n)
{
    if(n == 0)
        return false;
    if(n == 1)
        return true;
    bigint mid = n/2;
    for(bigint i = 2; i <= mid; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

bool naive_3(bigint n)
{
    if(n == 0 || n == 1)
        return true;
    bigint sqr = sqrt(n);
    for(bigint i = 2; i <= sqr; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

bool naive_4(bigint n)
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

bool fermat(bigint n, int k)
{
    if(n == 0)
        return true;
    if(n <= 3)
        return false;
    if(n == 4)
        return true;

    for(int i = 0; i < k; i++)
    {
        bigint a = 2 + rand()%(n-4);
        if(power(a,n) != 1)
        {
            return false;
        }
    }
    return true;
}

bool fermat_5(bigint n)
{
    return fermat(n,5);
}

bool fermat_10(bigint n)
{
    return fermat(n,10);
}

bool fermat_20(bigint n)
{
    return fermat(n,20);
}

bool fermat_40(bigint n)
{
    return fermat(n,40);
}

bool fermat_80(bigint n)
{
    return fermat(n,80);
}
