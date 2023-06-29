#include <iostream>
using namespace std;

void SimpleSieve_primeNo(int n){ //T.C. = O(n.log(log n))
    bool b[n];

    for (int i = 2; i < n; i++) b[i] = 1;

    for (int i = 2; i * i < n; i++){

        if (b[i] == true){
            for (int j = i + i; j < n; j = j + i){
                b[j] = 0;
            }
        }
    }

    for (int i = 2; i < n; i++){
        if (b[i] == 1){
            cout << i << " ";
        }
    }
}

int EulerPhiFunction_noOfCoPrime(int n){
    //task
    
    
}

int main()
{
    SimpleSieve_primeNo(25);

    return 0;
}