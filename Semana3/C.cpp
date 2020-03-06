#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int N;
unsigned long int t;

vector<int> primes;

void printPrimes(){
    for(int p : primes) {
        cout<<p<<" ";
    }
    cout<<endl;
}

void findPrimes(){
    int n=2;
    bool prime=true;
    int ceil;
    for(; n<1000000000000; n++){
        ceil = sqrt(n);
        for(int i=2; i<ceil; i++){
            cout<<"checking "<<n<<endl;
            printPrimes();
            if(n%i==0){
                prime=false;
                break;   
            }
        }
        if(prime) primes.push_back(n);
    }
}

int main(){
    findPrimes();
    printPrimes();

    cin>>N;

    for(;N>0;N--){
        cin>>t;

        
    }
return 0;
}