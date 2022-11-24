#include <iostream>
using namespace std;

int main() {
   int n;
    cout<<"inserire numero dei termini della serie di fibonacci che si vuole calcolare:"<<endl;
    cin>>n;

    int i=3;
        int primo_numero=1;
        int secondo_numero=1;
        cout <<primo_numero<<endl<<secondo_numero<<endl;
        while (i++ <= n) {
            cout << primo_numero + secondo_numero <<endl;
            if (primo_numero < secondo_numero)
                primo_numero += secondo_numero;
            else
                secondo_numero += primo_numero;
        }
   return 0;
}
