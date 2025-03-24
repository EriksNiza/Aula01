#include <iostream>
using namespace std;
int main() {
    float salario,promocao;
    cout<< "Digite o valor do seu salario R$: ";
    cin>> salario;
    promocao=salario+(salario*0.15);
    cout<<"esse eh o valor com a promoção R$: "<<promocao<<endl;
    return 0;
}
