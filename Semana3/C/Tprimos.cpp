#include <iostream>

using namespace std;

void tPrime()
{
    long N = 1;
    int i;
    int cont;

    while (N++)
    {
        cont = 2;
        for (i = 2; i < N; i++)
        {
            if (N % i == 0)
            {
                cont++;
                // cout << N << " % " << i << " == 0; cont: " << cont << "\n";
            }
        }

        if (cont == 3)
        {
            cout << N << endl;
        }
    }
}

int main()
{
    tPrime();
    return 0;
}

/**
 * Prints on screen all T-Primes found

void tPrime()
{
    long N = 1;
    int i;
    int cont, max_limit;

    while (N++)
    {
        cont = 2;
        for (i = 2; i < N; i++)
        {
            if (N % i == 0)
            {
                cont++;
                // cout << N << " % " << i << " == 0; cont: " << cont << "\n";
            }
        }

        if (cont == 3)
        {
            cout << N << endl;
        }
    }
}
 */
/*
T-primes < 1000
1
4
9
25
49
121
283
361
529
841
961
*/