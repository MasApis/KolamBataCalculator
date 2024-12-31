#include <iostream>
using namespace std;

int main() {

    // Spek kolam
    int panjangKolam = 400; // 4 meter
    int lebarKolam = 300; // 3 meter
    int tinggiKolam = 50; // 1/2 meter

    // spek bata
    int tinggiBata = 15; // 15 cm
    int panjangBata = 30; // 30 cm

    int jumlahLapisanBata = tinggiKolam / tinggiBata;
    int bataSisiPanjang = panjangKolam / panjangBata;
    int bataSisiLebar = lebarKolam / panjangBata;

    int totalBataPerlapisan = 2 * (bataSisiPanjang + bataSisiLebar);
    int totalBata = totalBataPerlapisan * jumlahLapisanBata;

    cout << "total bata adalah = " << totalBata << endl;  

}