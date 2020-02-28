#include <iostream>

using namespace std;

char campo[100][100];
int n=1,m=1;

void printCampo() {
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            cout<<campo[i][j];
        }
        cout<<endl;
    }
}

void zeraCampo(){
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            campo[i][j]='0';
        }
    }
}

void increment(int i, int j) {
    
    if(i>0 && j>0   && campo[i-1][j-1]!='*') campo[i-1][j-1]++; // superior esquerdo
    if(i>0          && campo[i-1][j]  !='*') campo[i-1][j]++;   // cima
    if(i>0 && j<99  && campo[i-1][j+1]!='*') campo[i-1][j+1]++;   //superior direito

    if(j<99         && campo[i][j+1]  !='*') campo[i][j+1]++;   // direito
    if(j>0          && campo[i][j-1]  !='*') campo[i][j-1]++;   // esquerdo

    if(i<99 && j>0  && campo[i+1][j-1]!='*') campo[i+1][j-1]++;   // inferior esquerdo
    if(i<99 && j<99 && campo[i+1][j+1]!='*') campo[i+1][j+1]++; // inferior direito
    if(i<99         && campo[i+1][j]  !='*') campo[i+1][j]++;   // baixo

    campo[i][j]='*';
}

int main() {
    char c;
    int field=1;

    while(cin>>n>>m && (n!=0 || m!=0)) {
        zeraCampo();

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++){
                cin >> c;

                if(c == '*'){
                    
                    increment(i,j);
                }
            }
        }

        cout<<"Field #"<<field++<<":"<<endl;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cout<<campo[i][j];
            }
            cout<<endl;
        }

        cout<<endl;
    }
    return 0;
}