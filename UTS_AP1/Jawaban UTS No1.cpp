#include <iostream>

using namespace std;

int main(){
    system("cls");
    int n;
    cout<<"Masukkan nilai: ";cin>>n;

    if (n>0 && (n & (n-1)) == 0){
        cout<<"ya";
    }
    else{
        cout<<"bukan";
    }
}
