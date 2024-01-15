#include<iostream>
#include<limits>

using namespace std;

int main() {
    int lama_sewa;
    string nama_penyewa;
    char kategori_mobil, yt;

    do {
        cout << "                  SEWA MOBIL           " << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "KODE        Kategori Mobil          Harga Sewa/Hari\n" << endl;
        cout << " 1.         Sedan                   Rp. 3.000.000" << endl;
        cout << " 2.         Mini Bus                Rp. 850.000" << endl;
        cout << " 3.         Bus                     Rp. 2.000.000" << endl;
        cout << "----------------------------------------------------" << endl;

        printf("enter\n");
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Nama Penyewa                          : ";
        getline(cin, nama_penyewa);
        cout << "Kode Mobil yang Ingin Di Sewa (1/2/3) : ";
        cin >> kategori_mobil;
        cout << "Lama Sewa (hari)                      : ";
        cin >> lama_sewa;
        system("cls");

        int harga_sewa, sub_tot, diskon, tot, bay, balik;

        switch (kategori_mobil) {
            case '1':
                harga_sewa = 3000000;
                cout << "Jenis Mobil          : Sedan" << endl;
                break;
            case '2':
                harga_sewa = 850000;
                cout << "Jenis Mobil          : Mini Bus" << endl;
                break;
            case '3':
                harga_sewa = 20000000;
                cout << "Jenis Mobil          : Bus" << endl;
                break;
            default:
                cout << "Kode Mobil tidak valid." << endl;
                continue; // Melanjutkan iterasi loop
        }

        sub_tot = lama_sewa * harga_sewa;
        diskon = (lama_sewa >= 14) ? sub_tot * 0.3 : 0;
        tot = sub_tot - diskon;

        cout << "Nama Penyewa         : " << nama_penyewa << endl;
        cout << "Kode Mobil (1/2/3)   : " << kategori_mobil << endl;
        cout << "Harga Sewa/Hari      : " << harga_sewa << endl;
        cout << "Lama peminjaman      : " << lama_sewa << " hari" << endl;
        cout << "Sub Total            : Rp " << sub_tot << ",-" << endl;
        cout << "Diskon               : Rp " << diskon << ",-" << endl;
        cout << "Total Bayar          : Rp " << tot << ",-" << endl;
        cout << "----------------------------------------------------------------" << endl;

        do {
            cout << "Uang Bayar   = Rp. ";
            cin >> bay;

            if (bay < tot) {
                cout << "Uang bayar kurang dari total. Silakan masukkan kembali." << endl;
            }

        } while (bay < tot);

        balik = bay - tot;
        cout << "Uang Kembali = Rp. " << balik << ",-" << endl;

        cout << endl;
        cout << "Apakah Ingin Menyewa Lagi ? [Y/T] : ";
        cin >> yt;
        cout << endl;

    } while (yt == 'Y' || yt == 'y');

    cout << "Terimakasih!" << endl;

    return 0;
}
