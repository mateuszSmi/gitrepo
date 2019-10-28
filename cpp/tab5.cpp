/*
 * tab5.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int tab[20];
    int n=20;
    srand(time(NULL));
    for(int i=0;i<21;i++){
        tab[i]=rand()%n+1;
        cout<<tab[i]<<" ";
        }
        cout<<endl;
    int m=0;
    int h=0;
    cout<<"Podaj liczbe z zakresu od 0 do 20: ";
    cin>>m;
    for(int j=0;j<21;j++){
        if(m==tab[j]){
            h+=1;
        }
        }
        cout<<"Liczba występuje "<<h<<" razy";

	
	return 0;
}

