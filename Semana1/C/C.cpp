#include <iostream>
#include <vector>

using namespace std;

class Coord
{
public:
    int x;
    int y;
    Coord(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    friend std::ostream &operator<<(std::ostream &strm, const Coord &c)
    {
        strm << c.x << "," << c.y;
    }
};

int a = 2, b = 1;
vector<Coord> answer;

/**
 * Testa se é possível, com valores de 'a' e 'b' fixos, obter 's' por meio de uma combinação linear
 */
void magica(int s)
{
    int soma = 0;
    while (soma < s)
        soma += (a + b);

    cout << "testando a= " << a << " e b= " << b << ": ";
    cout << soma << endl;

    if (soma == s)
        cout << a << "," << b << endl;
}

int main()
{
    bool alternate = false;
    int s;
    cin >> s;
    cout << s << ":\n";

    while (a < s)
    {
        magica(s);
        b++;

        magica(s);
        a++;
    }

    for (auto c : answer)
    {
        // cout << c << endl;
    }

    return 0;
}

/*

// Testa se é possível, com valores de 'a' e 'b' fixos, obter 's' por meio de uma combinação linear
void magica(int s)
{
    int mult = 0;

    for (int i = 1; i < s; i++)
    {
        for (int j = 1; j < s; j++)
        {
            mult = i * a + j * b;

            if (mult == s)
            {
                cout << a << "*" << i << " + " << b << "*" << j << endl;
                answer.push_back(Coord(a, b));
                return; // após achar que os valores atuais de 'a' e 'b' dã certo, pode testar com outros
            }
        }
        mult = 0;
    }
}
*/