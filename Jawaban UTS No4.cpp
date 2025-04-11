#include <iostream>
using namespace std;

int main(){
    string mantra;
    int i,vokal;
    vokal = 0;
    i = 0;
    cout<<"Masukkan Mantra: ";getline(cin,mantra);
    while (i <= mantra.length()){
        if (mantra[i] == 'a' or mantra[i] == 'i' or mantra[i] == 'u' or mantra[i] == 'e' or mantra[i] == 'o' or mantra[i] == 'A' or mantra[i] == 'I' or mantra[i] == 'U' or mantra[i] == 'E' or mantra[i] == 'O'){
            vokal++;
        }i++;
    }
    
    if (vokal > 0){
        cout<<"Kekuatan Mantra: "<<vokal<<" vokal"<<endl;
    }
    else{
        cout<<"Mantra tidak valid! Tidak mengandung vokal "<<endl;
    }
}
