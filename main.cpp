#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string encription(string &);
void menu();

//decription
class kelas {
 public:
    string decription (string &kata1){
        string kata2;
        char s;
    for (char c: kata1 )
    {
        if (isalpha(c)){
            c-=3; //ini bakal ngurutin huruf yang ditambah 3
        }
        if (!isalpha(c)){
            c+=26; //ini kalo huruf nya kurang dari 26, maka bakal balik ke 'a'
        }
        kata2 += c; // ini bakal huruf yang ada didalam kata2 jd tambah 3 semua
    }
    cout << "\nKalimat yang telah dienkripsi adalah " << kata2 << endl;
    cout << "Silahkan kembali ke menu utama dengan mengetik apa saja: ";
    cin >> s;
    return kata2;
    }
};

int main(){ 
    int i;
    kelas def;
    string kata;
    cout <<"Kelompok: kelompok 3" << endl;
    cout << "Shift: shift 1" << endl;
    cout << "Nama anggota 1: Ananda Muhammad Zahir (21120120140115)" << endl;
    cout << "Nama anggota 2: Didan Hasan Murtaqi (21120120140103)" << endl;
    cout << "Nama anggota 3: Juliant Raffa (21120120130127)" << endl;
    cout << "Nama anggota 4: Sachiko Fitria Ramandanti (21120120140103)" << endl << endl;
    cout << "Press Enter To continue" << endl;
    cin.get();

    menu:
    system("cls");
    menu();
    cin >> i;
    if (i == 1)
    {
        cout << "Masukan Kata: ";
        cin >> kata;
        encription (kata);
        goto menu;
    }else if (i == 2)
    {
        cout << "Masukan Kata: ";
        cin >> kata;
        def.decription(kata);
        goto menu;
    }else
    {
        exit(0);
    }
    return 0;
}

void menu(){
    cout<<" ___________________________________________________________________ "<<endl;
    cout<<"|                   Program enkripsi dan dekripsi                   |"<<endl;
    cout<<"|___________________________________________________________________|"<<endl;
    cout<<"|_____________________________Opsi Pilihan__________________________|"<<endl;
    cout<<"|    1. Enkripsi                                                    |"<<endl;
    cout<<"|    2. Dekripsi                                                    |"<<endl;
    cout<<"|    3. Keluar                                                      |"<<endl;
    cout<<"|___________________________________________________________________|"<<endl;
    cout<<" Pilihan Anda : ";
}

//encription
string encription (string &kata1){
    char s;
    string kata2;
    for (char c: kata1 )
    {
        if (isalpha(c)){
            c+=3; //ini bakal ngurutin huruf yang ditambah 3
        }
        if (!isalpha(c)){
            c-=26; //ini kalo huruf nya lebih dari 26, maka bakal balik ke 'a'
        }
        kata2 += c; // ini bakal huruf yang ada didalam kata2 jd tambah 3 semua
    }
    cout << "\nKalimat yang telah dienkripsi adalah " << kata2 << endl;
    cout << "Silahkan kembali ke menu utama dengan mengetik apa saja: ";
    cin >> s;
    return kata2;
}