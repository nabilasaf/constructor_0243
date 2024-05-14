#include <iostream>
using namespace std;

class mahasiswa
{
    public :
       static int nim;
       int id;
       string nama;

       void setId();

       void printAll();
       mahasiswa(string pnama)
       {
        nama = pnama;
        setId();
       }
};

int mahasiswa::nim = 243;

void mahasiswa::setId()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("Lia Kurnia");
    mahasiswa mhs2("Asroni");
    mahasiswa mhs3("Andi kurniawan");
    mahasiswa mhs4("Joko Purbo");

    mhs1.printAll();
    mhs2.printAll();
}