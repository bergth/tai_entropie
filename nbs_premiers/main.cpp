#include <iostream>
#include <vector>
#include "test.hpp"
using namespace std;


int main()
{
    vector<est_premier> funcs = {naive, naive_2, naive_3, naive_4, fermat_5, fermat_10, fermat_20, fermat_40};
    vector<est_premier> f_to_test;
    string in = "";
    int val = 0;

    cout << "0: naive (i < n)" << endl;
    cout << "1: naive v2 (i < n/2)" << endl;
    cout << "2: naive v3 (i < sqrt(n))" << endl;
    cout << "3: naive v4 (i < sqrt(n) et i += 2)" << endl;
    cout << "4: fermat avec k = 5" << endl;
    cout << "5: fermat avec k = 10" << endl;
    cout << "6: fermat avec k = 20" << endl;
    cout << "7: fermat avec k = 40" << endl;

    cout << "rentrer les fonctions à tester" << endl;
    while(in != "stop")
    {
        cout << "> ";
        cin >> in;
        cout << endl;
        if(in != "stop")
        {
            val = stoi(in);
            if(val >= 0 && val <= 7)
            {
                f_to_test.push_back(funcs[val]);
            }
            else
                return 1;
        }
    }

    cout << "Rentrer les deux intervals a et b:" << endl;
    cout << "a > ";
    cin >> in;
    cout << endl;
    bigint a = stoll(in);
    cout << "b > ";
    cin >> in;
    cout << endl;
    bigint b = stoll(in);

    cout << "Rentrer nb nombres premiers:" << endl;
    cout << "> ";
    cin >> in;
    int nb_pr = stoi(in);
    cout << "Debut des tests: " << endl << endl;
    cout << "Nombres de fonctions: " << f_to_test.size() << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "nb: " << nb_pr << endl;
    test_multiples(f_to_test,a,b,nb_pr);
}

