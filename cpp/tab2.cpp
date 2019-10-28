/*
 * tab2.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

#define w   5
#define k   10
int main(int argc, char **argv)
{
    int n=0;
    int tab[w][k];
    cout<<"Podaj rozmiar: ";
    cin>>n;
    srand(time(NULL));
    for(int i=0;i<w;i++){
        for(int j=0;j<k;j++){
            tab[i][j]=rand()%n+1;
            cout<<tab[i][j];
            }
            cout<<endl;
        }
	return 0;
}

