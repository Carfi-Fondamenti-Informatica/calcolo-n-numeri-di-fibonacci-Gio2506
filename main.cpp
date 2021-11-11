#include <iostream>
using namespace std;

int main(){
    int n=0,i=0,N1=1,N2=1,N3=0;
    cin >> n;
        if(n<2) {
            cout << "errore" << endl;
        }else{
            cout << N1 << endl;
            cout << N2<<endl;

            for(int i=2;i<n;i++) {
                N3 = N2 + N1;
                N1 = N2;
                N2 = N3;
                cout << N3 << endl;
            }
        }
    return 0;
}

