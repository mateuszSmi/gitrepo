/*
 * tekst.cpp
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

#define ROZMIAR   100
int main(int argc, char **argv)
{
	char tekst[ROZMIAR];
    int i = 0;
    cout<<"Podaj zdanie: "<<endl;
   // cin>>tekst;
    cin.getline(tekst, ROZMIAR);
    //cout<<tekst;
    for (i=0;i<ROZMIAR;i++){
        cout<<tekst[i];
        }
        cout<<endl;
        i=0;
        while (tekst[i] != '\0'){
            cout<<tekst[i];
            i++;
            }
            cout<<endl;
	return 0;
}

