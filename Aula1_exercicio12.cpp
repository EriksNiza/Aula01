#include <iostream>
using namespace std;
int main() {
    float valorproduto,desconto;
    cout<< "Digite o valor do produto: ";
    cin>> valorproduto;
    desconto=valorproduto-(valorproduto*0.05);
    cout<<"esse eh o valor com o desconto R$: "<<desconto<<endl;
    return 0;
}
