#include <iostream>

using namespace std;

char game[3][3];
bool Xwin = false, Owin = false;
int qtdX, qtdO;

void printGame()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << game[i][j] << " ";
        }
        cout << endl;
    }
}

/**
 * Retorna true se o caractere passado for o do vencedor, falso se 'c' não venceu.
 */
bool searchWinner(char c)
{
    for (int i = 0; i < 3; i++)
    {
        if (game[i][i] == c)
        {
            if (game[i][0] == game[i][1] && game[i][0] == game[i][2]) // testa linha i
            {
                return true;
            }

            if (game[0][i] == game[1][i] && game[0][i] == game[2][i]) // testa coluna i
            {
                return true;
            }
        }
    }

    if (game[1][1] == c) // se a casa central não estiver vazia
    {
        if (game[0][0] == game[1][1] && game[0][0] == game[2][2]) // testa diagonal principal
        {
            return true;
        }
        if (game[2][0] == game[1][1] && game[2][0] == game[0][2]) // testa diagonal secundária
        {
            return true;
        }
    }
    return false;
}

/**
 * Conta quandos X e O tem no jogo e retorna se os valores são compatíveis com um jogo válido.
 * - Quantidades devem ser iguais ou diferir por 1 unidade
 * - Deve sempre haver mais X do que O, pois este começa antes.
 */
bool countXO()
{
    qtdX = 0;
    qtdO = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (game[i][j] == 'X')
            {
                qtdX++;
            }
            else if (game[i][j] == 'O')
            {
                qtdO++;
            }
        }
    }

    return qtdX == qtdO || qtdX == qtdO + 1;
}

void initGame()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            game[i][j] = '.';
        }
    }
}

int main()
{
    int n;
    bool validGame = true;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        initGame();

        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cin >> game[j][k];
            }
        }

        //cout << "jogo:\n";
        //printGame();
        Xwin = searchWinner('X');
        Owin = searchWinner('O');
        //countXO();
        //cout << "qtdO: " << qtdO << ", qtdX: " << qtdX << endl;
        //cout << "Xwin: " << Xwin << ", Owin: " << Owin << endl;

        //Testes
        if (!countXO()) // Quantidade de X deve ser igual ou 1 unidade a mais que O
        {
            //cout << "Caiu no teste da quantidade\n";
            validGame = false;
        }
        else if (Xwin && Owin) // Ambos não podem ganhar
        {
            //cout << "Ambos ganharam\n";
            validGame = false;
        }
        else if (Owin && qtdO != qtdX) // Se O ganha, quandidades deve mser iguais
        {
            validGame = false;
        }
        else if (Xwin && qtdX != qtdO + 1) // Se X ganha, quantidade de X deve ser maior em 1 unidade
        {
            validGame = false;
        }

        cout << (validGame ? "yes" : "no");
        cout << endl;
    }
    return 0;
}
