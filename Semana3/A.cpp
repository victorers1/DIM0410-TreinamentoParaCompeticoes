#include <iostream>

using namespace std;

const int MAX = 100000;

int prob[MAX+1]={0};
int nprob, levels, n;
int falta;

bool temSolucao(){
    return falta==0;
}

void marcaSolucao(){
    for(int i=1; i<=levels; i++){
        prob[i]--;

        if(prob[i]==0){
            falta++;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x;
    cin >> levels >> n;
    falta=levels;

    for(; n>0; n--){
        cin>> x;
        prob[x]++;
        if(prob[x]==1){
            falta--;
        }
        if(temSolucao()){
            cout<<"1";
            marcaSolucao();
        } else {
            cout<<"0";
        }
    }
    cout<<endl;
    return 0;
}