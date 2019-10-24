/*
 * tablica2w.cpp
 * 
 * Copyright 2019  <>
 */


#include <iostream>
#include <iomanip>
using namespace std;

#define N   10
#define M   10
int main(int argc, char **argv)
{
	int tab2W[N][M];
    int i,j;
    
    srand(time(NULL));//inicjacja generatora liczb pseudolosowych
    for(i=1;i<N;i++){
        cout<<"====="<<"Tablica "<<i<<"====="<<endl;
        for(j=1;j<M;j++){
        tab2W[i][j]=i*j;
        cout<<setw(4)<< tab2W[i][j]<<endl;
        
        }}
	return 0;
}

