#include <iostream>//manipula��o de fluxo de dados padr�o do sistema 
#include <locale> //biblioteca manipula��o de diversas conven��es culturais do utilizador (nessse codigo para acentua��o)
using namespace std;

int negativos(float * vet, int n){
int qtdNumNeg = 0;

    for (int i = 0; i<n; i++){
    if (vet[i] < 0){
            qtdNumNeg += 1;
     }
    }
    return qtdNumNeg;
}

int main() {
	setlocale(LC_ALL,""); //setlocale <locale>
	int n = 20;     
    float vet[n] = {-9,-8,-7,-6,-5,-4,-3,-2,-1,1,2,3,4,5,6,7,8,9,10};

    cout << "N�meros negativos armazenados no vetor: " << negativos(vet,n) << endl;

    return 0;
}



