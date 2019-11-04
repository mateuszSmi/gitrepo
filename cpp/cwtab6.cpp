/*
 * cwtab6.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
#include <cstring>
using namespace std;

#define rozmiar 100
int main(int argc, char **argv)
{
    char tekst[rozmiar];
    int i = 0;
    int zb = 0;
    int m = 0;
    int d = 0;
    int c = 0;
    cout<<"Podaj zdanie: "<<endl;
    cin.getline(tekst, rozmiar);
    for (i=0;i<int(strlen(tekst));i++){
        if(tekst[i]<124 && tekst[i]>95){
        m++;
        }
        else if(tekst[i]>64 && tekst[i]<91){
        d++;
        }
        else if(tekst[i]>47 && tekst[i]<58){
        c++;
        }
        else if(tekst[i] == ' '){
        zb++;
        }
            }
        cout<<"W zdaniu jest "<<m<<" małych liter"<<endl;
        cout<<"W zdaniu jest "<<d<<" dużych liter"<<endl;
        cout<<"W zdaniu jest "<<c<<" cyfr "<<endl;
        cout<<"W zdaniu jest "<<zb<<" znaków białych"<<endl;
        cout<<endl;
	return 0;
}

