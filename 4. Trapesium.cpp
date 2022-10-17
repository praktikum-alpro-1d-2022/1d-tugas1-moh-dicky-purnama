#include <iostream>
using namespace std;
int main(){
    //Deklarasi variabel
    int a,b,t;
    float l;

    //proses input nikai sisi atas, bawah dan tinggi
    cout<<"Masukkan sisi a : ";
    cin>>a;

    cout<<"Masukkan sisi b : ";
    cin>>b;

    cout<<"Masukkan tinggi : ";
    cin>>t;

    //hitung rumus luas trapesium
    l=(0.5*(a+b)*t);

    //Tampilkan luas
    cout<<"Luas trapesium : "<<l<<endl;

return 0;
}
