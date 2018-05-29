#include "est_premier.hpp"
#include <iostream>
#include <vector>
#include<chrono>

typedef std::chrono::high_resolution_clock Time;
typedef std::chrono::high_resolution_clock::time_point time_p;
typedef std::chrono::milliseconds ms;
typedef std::chrono::duration<float> fsec;

//int test(est_premier f, int a, int b);
void test_multiples(std::vector<est_premier> funcs, bigint a, bigint b, int n);