/*
 * zlozonosc.cpp
 * Copyright 2020  <>
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int i = 0;
    int n=5;
    int tab[n]={8,5,2,4,6};
    int x;
    cout<<"Podaj liczbe szukana: ";
    cin>>x;
    for(i=0;i<n;i++){
        if(tab[i]==x){
        cout<<i;
        return 0;
        }}
    cout<<"-1";
    
	return 0;
}

