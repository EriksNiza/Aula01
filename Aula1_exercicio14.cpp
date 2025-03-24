#include <iostream>
using namespace std;
int main() {
    float uso,km,total;
    cout<< "Digite a quantidade de dias de uso do carro: ";
    cin>> uso;
    cout<< "Digite a quantidade de Km usados: ";
    cin>> km;
    total=(uso*90)+(km*0.2);
    cout<<"esse eh o valor com a total do carro R$: "<<total<<endl;
    return 0;
}
