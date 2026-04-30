int main() {
    int pilih;
    int subpilih;

    do{
        cout << "==============================="<< endl;
        cout << "   SISTEM ADMIN SEWA MOTOR   "<< endl;
        cout << "==============================="<< endl;

        cout << " 1. Kelola Data Motor" << endl;
        cout << " 2. Transaksi Sewa Motor" << endl;
        cout << " 3. Pencarian Data Motor" << endl;
        cout << " 4. Urutkan Data Motor" << endl;
        cout << " 5. Tampilkan Semua Data Motor" << endl;
        cout << " 6. Keluar" << endl;
        cout << "==============================="<< endl;
        cout << "Pilih Menu: ";
        cin >> pilih;

        switch (pilih)
        {
        case 1 :  
        subpilih = 0;
            do{
                cout << "1. Tambah Data Motor" << endl;
                cout << "2. Hapus Data Motor" << endl;
                cout << "3. Kembali ke Menu Utama" << endl;
                cout << "Pilih Sub Menu: ";
                cin >> subpilih;
                switch (subpilih)
                {
                case 1:
                    // Tambah Data Motor
                    break;
                case 2:
                    // Hapus Data Motor
                    break;
                case 3:
                    // Kembali ke Menu Utama
                    break;
                default:
                    cout << "Pilihan tidak valid!" << endl;
                    break;
                }
            }while(subpilih != 3);
        break;
        
        case 2 :  
        subpilih = 0;
            do{
                cout << "1. Sewa Motor" << endl;
                cout << "2. Kembalikan Motor" << endl;
                cout << "3. Kembali ke Menu Utama" << endl;
                cout << "Pilih Sub Menu: ";
                cin >> subpilih;

                switch (subpilih)
                {
                case 1:
                    // Sewa Motor
                    break;
                case 2:
                    // Kembalikan Motor
                    break;
                case 3:
                    // Kembali ke Menu Utama
                    break;
                default:
                    cout << "Pilihan tidak valid!" << endl;
                    break;
                }
            }while(subpilih != 3);
        break;

        case 3 :
        subpilih = 0;
        do{
            cout << "1. Cari Berdasarkan Nama Motor" << endl;
            cout << "2. Cari Berdasarkan Plat Nomor" << endl;
            cout << "3. Kembali Ke Menu Utama" << endl;    
            cout << "Pilih Sub Menu: ";
            cin >> subpilih;

                switch (subpilih)
                {
                case 1:
                    //berdasarkan nama
                    break;
                case 2:
                    //berdasarkan plat
                    break;
                case 3:
                    //kembali ke menu utama
                    break;
                default:
                    cout << "Pilihan tidak valid" << endl;
                    break;
                }
        }while (subpilih != 3);
        break;

        case 4 :
        subpilih = 0;
        do{
            cout << "1. Urutkan Berdasarkan Harga" << endl;
            cout << "2. Urutkan Berdasarkan Nomor Plat" << endl;
            cout << "3. Kembali Ke Menu Utama" << endl;    
            cout << "Pilih Sub Menu: ";
            cin >> subpilih;

            
                switch (subpilih)
                {
                case 1:
                    /* code */
                    break;
                case 2:

                    break;

                case 3:

                    break;

                default:
                    cout << "Pilihan Tidak Valid" << endl;
                    break;
                }
        }while(subpilih != 3);  
        break;

        case 5 :  
            // Tampilkan Semua Data Motor
        break;
        case 6 :  
            cout << "Terima kasih telah menggunakan sistem admin sewa motor!" << endl;
        break;
        default:
            cout << "Pilihan tidak valid!" << endl;
        break;
        }

    }while(pilih != 6);
};