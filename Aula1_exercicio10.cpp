#include <iostream>
using namespace std;
int main() {
    float H,largura,tinta,area;
    cout<< "digite a altura: ";
    cin>> H;
    cout<< "digite a largura: ";
    cin>> largura;
    area=H*largura;
    tinta=area/2;
    cout<< "A area que devera ser pintada é: "<<area<< " e precisa dessa quantidade em litro para pinta-la:  "<<tinta<<endl;
}
