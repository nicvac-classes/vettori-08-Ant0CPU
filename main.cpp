#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, i, iMin, iMax, somma, media;
    do {
    cout<<"Inserire il numero di alteti "<<endl;
    cin>>n;
    }
    while (n<=0);
 
    vector<string>nomi(n), nazionali(n);
    vector<float>t(n);
    float tMin, tMax, tempo;
 
    i=0;
    while (i<n) {
       cout<<"Inserire il nome"<<endl;
       cin>>nomi[i];
 
       cout<<"Inserire il nome della nazionale"<<endl;
       cin>>nazionali[i];
 
       cout<<"Inserire il tempo effettuato dall'atleta"<<endl;
       cin>>t[i];
 
       i=i+1;
    }
   
    i=0;
    iMin=0;
    tMin=t[iMin];
    while (i<n) {
       if (t[i]<tMin) {
          tMin=t[i];
          iMin=i;
          }
          i=i+1;
       }
 
       somma=0;
       for(i=0; i<n; i++) {
          somma=somma+1;
       }
       media=somma/n;
 
       cout<<"Tempo più basso: "<<t[iMin]<<endl;
       cout<<"Tempo più alto: "<<t[iMax]<<endl;
       cout<<"Media: "<<media<<endl;
 
       i=0;
       while (i<n) {
          if (t[i]<=media) {
             cout<<"Nome: "<<nomi[i]<<"; Nazionale: "<<nazionali[i]<<"; Tempo: " <<t[i]<<endl;
          }
          i=i+1;
       }
       
       cout<<"Dammi un numero"<<endl;
       cin>>tempo;
       i=0;
       while (i<n) {
          if (t[i]<=tempo) {
             cout<<"Nome: "<<nomi[i]<<"; Nazionale: "<<nazionali[i]<<"; Tempo: " <<t[i]<<endl;
          }
          i=i+1;
       }
    }