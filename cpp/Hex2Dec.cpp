/*
 * Hex2Dec.cxx
 * Copyright 2020  <>
 */


#include <iostream>
#include <cstring>
using namespace std;

int Hex2Dec(char x[4]){
    int dlugosc = strlen(x);
    int y = 1;
    int wartosc = 0;
    for(int i=dlugosc-1;i>=0;i--){
        if(x[i]>= '0' && x[i]<='9'){
            wartosc+=(x[i]-48)*y;
            y=y*16;}
        else if(x[i]>= 'A' && x[i]<='F'){
            wartosc+=(x[i]-55)*y;
            y=y*16;}
        else if(x[i]>= 'a' && x[i]<='b'){
            wartosc+=(x[i]-87)*y;
            y=y*16;}
        }
    return wartosc;
    }
int main(int argc, char **argv)
{
	char x[4];
    cout<<"Podaj liczbę szesnastkową(wielkie litery!): ";
    for(int i = 0;i<4;i++){
        cin>>x[i];}
    //for(int i = 0;i<4;i++){
        //cout<<x[i];}
    cout<<Hex2Dec(x);
	return 0;
}

