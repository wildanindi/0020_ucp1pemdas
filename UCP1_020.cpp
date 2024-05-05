#include <iostream>
using namespace std;

string nama_kota;
int status;
int polutan = 75;

void input()
{
    cout << "Nama Kota : ";
    cin >> nama_kota;
    cout << "Masukkan Tingkat Polutan : ";
    cin >> status;
        if (status >= polutan){
            cout << "Tidak Sehat" << endl;
        }
        else 
        {
            cout << "Sehat" << endl;
        }
}




void display()
{
    cout << nama_kota << " = " << status << endl;
}

int main(){
    char ch;

do {
    input();
    display();
    cout << "\n\nApakah anda Mau Mengulang Program? (y/n:";
    cin >> ch;

    if (ch == 'n' || ch == 'N')
        break;

    system("pause");
    system("CLS");
    
    } while (true);
}

//1. string nama;
//   int angka;
//   float angka_desimal;
//
//2. for (int i = 0; i < n; i++) {       
//    cout << "Data ke-" << (i + 1) << ": ";  
//    cin >> arr[i];  
//}
//
//3. int main() #(bisa menggunakan for)
//{
//    int i;
//    string nama[5];
//
//    for (i = 150; i > 100; i-=10)
//    {
//        cout << i << ". " << "Selamat Berbuka" << endl;
//    }
//}
//
//4. switch_case
//
//
//5. struct Node {
//    int noMhs;
//    string name;
//    Node* next;
//}
//;