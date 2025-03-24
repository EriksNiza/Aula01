#include <iostream>
//Erik Schiavinato Niza
using namespace std;

int main() {
    float metros,km,hm,dam,dm,cm,mm;
	cout << "Digite uma distancia em metros: ";
	cin >> metros;
   	km=metros/1000;
   	hm=metros/100;
   	dam=metros/10;
   	dm=metros*10;
   	cm=metros*100;
   	mm=metros*1000;
	cout << "A distancia "<< metros << " Tem como outras distancias\n Mm= "<< mm <<
	" \n Cm= "<<cm<<"\n Dm= "<<dm<<"\n Dam= "<<dam<<"\n Hm= "<<hm<<"\n Km= "<<km<< endl;
	
}
