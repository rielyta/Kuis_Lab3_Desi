#include <iostream>
using namespace std;


//fungsi menghitung dengan Algoritma Euclidean
int hitungfpb (int a, int b) {
    int r;
    while(a%b!=0) {
        r=a%b;
        a=b;
        b=r;
    }
    return b;
}

int main() {
    int m ,n;
    cout<<"m: ";
    cin>>m;
    cout<<"n: ";
    cin>>n;
    int fpb = hitungfpb(m, n);
    cout << "FPB: " << fpb << endl;
}