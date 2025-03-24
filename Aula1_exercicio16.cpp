#include <iostream>
using namespace std;
int main() {
   int cigarros,anosfumando,cigarrostotais; float minutos_perdidos,dias_perdidos;
   cout<<"digite a quantidade de cigarros fumados em um dia:";
   cin>> cigarros;
   cout<<"quantos anos voce fuma:";
   cin>> anosfumando;
   cigarrostotais=cigarros*365;
   minutos_perdidos=cigarrostotais*10;
   dias_perdidos=minutos_perdidos/1440;
   cout<<"voce perdeu essa quantidade de dias por fumar : "<<dias_perdidos<<endl;
   
    return 0;
}
