#include <iostream>

using namespace std;

int main(){
    system("cls");
    int nilai1,nilai2,nilai3;
    string nama,nim,L,T;
    float rata;
    cout<<"Nama Mahasiswa: "; getline(cin,nama);
    cout<<"NIM: ";cin>>nim;
    cout<<"\nNilai Mata Kuliah: "<<endl;
    cout<<" Algoritma dan Pemrograman: ";cin>>nilai1;
    cout<<" Probabilitas dan Statistika: ";cin>>nilai2;
    cout<<" Sistem Operasi: ";cin>>nilai3;
    cout<<endl;

    L = "Lulus.";
    T = "Tidak Lulus. Silakan Ulangi di Tahun Depan!";

    if (nilai1 >= 60){
        cout<<"Algoritma dan Pemrograman: "<<L<<endl;
    }
    else{
        cout<<"Algoritma dan Pemrograman: "<<T<<endl;
    }

    if (nilai2 >= 60){
        cout<<"Probabilitas dan Statistika: "<<L<<endl;
    }
    else{
        cout<<"Probabilitas dan Statistika: "<<T<<endl;
    }

    if (nilai3 >= 60){
        cout<<"Sistem Operasi: "<<L<<endl;
    }
    else{
        cout<<"Sistem Operasi: "<<T<<endl;
    }
    rata = float(nilai1+nilai2+nilai3)/3;

    cout<<"Nilai Rata-rata Semester ini: "<<rata;


    

}
