#include <iostream>
using namespace std;

//fungsi menghitung fpb dengan Algoritma Euclidean
int hitungfpb(int a, int b) {
    if (b==0)
        return a;
    else
        return hitungfpb(b,a%b);
}

int main() {
    int m,n;
    cout<<"m: ";
    cin>>m;
    cout<<"n: ";
    cin>>n;
    int fpb = hitungfpb(m,n);
    cout << "FPB: " << fpb << endl;
}
