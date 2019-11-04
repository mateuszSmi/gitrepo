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
    int n = 1;
    cout<<"Podaj zdanie: "<<endl;
    cin.getline(tekst, ROZMIAR);
    for (i=0;i<ROZMIAR;i++){
        if(tekst[i]==' '){
            n+=1;
            }
        }
        cout<<"Zdanie składa się z "<<n<<" wyrazów.";
        
        while (tekst[i] != '\0'){
            cout<<tekst[i];
            i++;
            if(tekst[i]==' '){
            n+=1;
            }
            }
            cout<<endl;
            cout<<"Zdanie składa się z "<<n<<" wyrazów.";
	return 0;
}

