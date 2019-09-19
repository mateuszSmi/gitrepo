/*
 * trojkat.cpp
 * 
 * Copyright 2019  <>
 * Jesli da sie zbudowac trojkat sprawdz czy to trojkat prostokartny
 */


#include <iostream>
#imclude <cmath>
using namespace std;


int main(int argc, char **argv)
{
	float a,b,c;
    cout << "Podaj pierwszy bok: ";
    cin >> a;
    cout << "Podaj drugi bok: ";
    cin >> b;
    cout << "Podaj trzeci bok: ";
    cin >> c;
    if (a+b<=c){
    cout << "nie można zbudować trójkąta";}
    else if (a+c<=b){
    cout << "nie można zbudować trójkąta";}
    else if (c+b<=a){
    cout << "nie można zbudować trójkąta";}
    else {
    cout << "to trójkąt";}
    if(c==sqrt(a*a+b*b)){
    cout << "to trojkąt prostokątny";
    

    
}
	return 0;
}

