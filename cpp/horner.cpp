/*
 * horner.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
using namespace std;

void drukujw(int n, float tbwsp[]){
    for (int i =0;i<n;i++){
    cout<< tbwsp[i]<<"*x^"<<n-i<<" + ";
        }
    cout<<tbwsp[n]<<endl;
    }
    
float horoner_it(int n,float tbwsp[],float x){
    int i;
    float wynik = tbwsp[0];
    for(i=1;i<n+1;i++){
        wynik = wynik * x + tbwsp[i];
        }
        return wynik;
    }

float horner_re(int n,float tbwsp[],float x){
    if (n==0){
        return tbwsp[0];}
    else{
        return horner_re(n-1, tbwsp,x) * x + tbwsp[n];}
}

int main(int argc, char **argv)
{
	int n = 0;//stopien wielomianu
    float *tbwsp;//tablica wspoczynnikow
    float x;//argument
    cout<<"Podaj stopień: ";
    cin>>n;
    tbwsp = new float [n+1];
    cout<<"Podaj argument: ";
    cin>>x;
    
    for (int i=0;i<n+1;i++) {
        cout<<"Współczynnik przy potędze "<<n-i<<": ";
        cin>>tbwsp[i];}
        
        cout<<"Watość wielomianu o postaci: ";
        drukujw(n,tbwsp);
        cout << horoner_it(n,tbwsp,x)<<endl;
        cout << horner_re(n,tbwsp,x)<<endl;
	return 0;
}

