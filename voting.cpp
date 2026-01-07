#include <iostream>
using namespace std;

int main() {
    string menu[3] = {"Matematika", "IPS", "IPA"};
    int suara[3] = {0, 0, 0};
    int pilihan, total = 0;

    cout <<"=============================\n";
    cout <<"VOTING MATA PELAJARAN FAVORIT\n";
    cout <<"=============================\n";

    do {
        cout <<"\nPilih mata pelajaran favorit:\n";
        for(int i = 0; i<3; i++) {
            cout << i+1 << "." << menu[i] << endl;
        }

        cout <<"4.Lihat Hasil Voting\n";
        cout <<"5.Keluar\n";
        cout <<"Pilihan:";
        cin >> pilihan;

        if(pilihan >= 1 && pilihan <= 3) {
            suara[pilihan-1]++;
            total++;
            cout <<"Terima kasih sudah voting!\n";


        }

        else if(pilihan == 4) {
            if(total == 0) {
                cout <<"Belum ada voting!\n";
                continue;
            }

            cout << "\n=== HASIL VOTING === \n";
            for(int i = 0; i < 3; i++) {
                cout << menu[i] << ":" << suara[i] << "suara";
                if(total > 0) {
                    cout << " (" <<(suara[i]*100/total) << "%)";
                }
                cout << endl;
            }
            cout <<"Total suara :" << total << endl;
        }
        else if(pilihan==5) {
            break;
        }
        else {
            cout <<"Pilihan tidak valid!\n";
        }

    }while(true);

    cout <<"\nProgram selesai!\n";
    return 0;
}