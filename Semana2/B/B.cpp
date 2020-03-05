#include <iostream>

using namespace std;


char game[3][3];
int n;
char winner='';
int qtdX,qtdO;

void printGame()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<game[i][j]<<" ";
        }
        cout<<endl;
    }
}

void searchWinner()
{
    if(game[0][0]==game[1][1] && game[0][0]==game[2][2]) // testa diagonal principal
    {
        winner=game[0][0];
        return;
    }
    if(game[2][0]==game[1][1] && game[2][0]==game[0][2]) // testa diagonal secundária
    {
        winner=game[2][0];
        return;
    }
    for(int i=0; i<3; i++)
    {
        if(game[i][0]==game[i][1] && game[i][0]==game[i][2]) // testa linha i
        {
            winner=game[i][0];
            return;
        }

        if(game[0][i]==game[1][i] && game[0][i]==game[2][i]) // testa coluna i
        {
            winner=game[0][i];
            return;
        }
    }

}

void initGame()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            game[i][j]='.';
        }
    }
}

int main()
{
    initGame();

    cin>>n;

    for(int i=0; i<n; i++)
    {
        initGame();

        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                cin>>game[j][k];
            }
        }








    }
    return 0;
}
