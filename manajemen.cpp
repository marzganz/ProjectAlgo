#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    string nama[30];
    float mtk[30], ipa[30], ips[30], rata[30];
    int jumlah;

    cout <<"=====================\n";
    cout <<"MANAJEMEN NILAI SISWA\n";
    cout <<"=====================\n";
    cout <<"Masukan jumlah siswa:\n";
    cin >> jumlah;

    //Input data
    for(int i = 0; i < jumlah; i++) {
        cout << "\nSiswa Ke-" << i+1 << endl;
        cout << "Nama      :";
        cin >> nama[i];
        cout <<"Nilai Matematika  :";
        cin >> mtk[i];
        cout <<"Nilai IPA  :";
        cin >> ipa[i];
        cout <<"Nilai IPS  :";
        cin >> ips[i];

        rata[i] = (mtk[i] + ipa[i] + ipa[i]) / 3;
    }

    //Output data 
    cout <<"\n==================================================\n";
    cout << left << setw(12) << "Nama"
        << setw(5) << "MTK"
        << setw(5) << "IPA"
        << setw(10) << "IPS"
        << setw(13) << "Rata-rata"
        << "Grade\n";
    cout <<"===============================================\n";

    for(int i = 0; i<jumlah; i++) {
        char grade;
        if(rata[i] >= 85) grade = 'A';
        else if(rata[i] >= 70) grade = 'B';
        else if(rata[i] >= 65) grade = 'C';
        else grade = 'D';

        cout << left << setw(12) << nama[i]
            << setw(5) << mtk[i]
            << setw(5) << ipa[i]
            << setw(10) << ips[i]
            << setw(13) << fixed << setprecision(1) << rata[i]
            << grade << endl;
    }

    return 0;


}