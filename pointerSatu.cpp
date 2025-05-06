#include <iostream>
using namespace std;
class mahasiswa {
    public :
    int nim;
    void showNim(){
        cout << "No Induk =  "<<nim<<endl;
    }
};

int main (){
    mahasiswa mhs{1}; //object mhs
    mhs.showNim();

    mahasiswa &refMhs = mhs; //Pointr reference pMhs
    refMhs.nim = 2; //Member Acces operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //pointeer bereference pMhs
    pMhs->showNim();
    return 0;
}
