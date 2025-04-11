#include <iostream>
using namespace std;

int main(){
    system("cls");
    string biner;
    int desimal,kelipatan;
    desimal = 0;
    kelipatan = 1;
    cout<<"Masukkan biner(0/1): ";cin>>biner;
    for (int i=0; i < biner.length();i++){
        if (biner[biner.length() - i - 1] == '1'){
            desimal += kelipatan;
        }
        else if (biner[biner.length() - i - 1] != '0'){
            cout<<"Pesan Rusak!"<<endl;
            break;
        }
        kelipatan *= 2;
    }
    if (desimal != 0){
        cout<<"Angka desimal dari biner "<<biner<<" adalah = "<<desimal;
    }
}
