#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i, iMin;
    float tMin;
    do {
        cout<<"Inserire il numero elementi del vettore"<<endl;
        cin>>n;
    }
    while(n<=0);

    vector<string>nomi(n), nazionali(n);
    vector<float>t(n);

    while (i<n) {
        cout<<"Inserire il nome"<<endl;
        cin>>nomi[i];

        cout<<"Inserire il nome della nazionale partecipante"<<endl;
        cin>>nazionali[i];

        cout<<"Inserire il tempo effettuato dell'atleta"<<endl;
        cin>>t[i];

        i=i+1;

    }

    i=0;
    while (i<n) {
        cout<<"Nomi: "<<nomi[i]<<endl;
        cout<<"Nazionali: "<<nazionali[i]<<endl;
        cout<<"Tempi: "<<t[i]<<endl;

        i=i+1;
    }
    
    i=0;
    iMin=0;
    tMin=t[iMin];
    while (i<n) {
        if (t[i]<iMin) {
            tMin=t[i];
            iMin=i;
        }

        i=i+1;
    }

    cout<<"Il "<<iMin+1<<"° alteta, di nome "<<nomi[iMin]<<", appartenete alla nazionale "<<nazionali[iMin]<<", ha conquistato il 1° posto  con tempo "<<tMin<<endl;
}
