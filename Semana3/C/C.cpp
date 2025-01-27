#include <iostream>
#include <vector>
#include <map>

typedef long long ll;

using namespace std;
int MAX = 1000000;

vector<bool> primes(MAX + 1, true); // Using from 1 to MAX+1
map<ll, bool> Tprimes;

/**
 *
 */
void sieve()
{
    primes[0] = primes[1] = false; // 1 is prime, and 0 doesn't count

    for (ll i = 2; i * i <= MAX; i++) // Percorre todo os elementos de primes[]
    {
        if (primes[i])
        {
            for (ll j = i * i; j < MAX; j += i) // Atualiza todos os multiplos de i maiores que i²
            {
                primes[j] = false;
            }
        }
    }
}

void mapping()
{
    for (ll i = 2; i < MAX; i++) // Percorre todos os elementos de primes[]
    {
        if (primes[i])
        {
            Tprimes[i * i] = true;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, x;

    sieve();
    mapping();

    cin >> n;
    while (n-- && cin >> x)
    {
        cout << (Tprimes[x] ? "YES" : "NO") << endl;
    }

    return 0;
}

