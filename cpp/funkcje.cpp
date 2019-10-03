/*
 * funkcje.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

void sumuj(int a, int b) 
{
cout<<"Suma: "<<a+b<<endl;
}

void podziel(float a, float b)
{
if (b!=0)
{
cout<<"Iloraz: "<<a/b<<endl;
}
else{
cout<<"nie dziel przez zero!!!";
}
}

int pomnoz(int a, int b)
{
    return a*b;
}
int odejmij(int a,int b)
{
    return a-b;
}

int main(int argc, char **argv)
{
	int a, b;
    cout << "Podaj liczby: "<<endl;
    cin >> a >> b;
//    sumuj(a,b);
//    sumuj(b,a);
//    podziel(a,b);
cout<<"Iloczyn: "<<pomnoz(a,b)<<endl;
int wynik;
    wynik=pomnoz(a,b);
    cout<<"Iloczyn: "<<wynik<<endl;
    cout<<"Róznica: "<<odejmij(a,b)<<endl;
    
	return 0;
}

