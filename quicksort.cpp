#include <iostream>
using namespace std;


int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input(){
    while (true)
    {
        cout << "Masukkan Panjang Elemen Array : ";
        cin >> n;

        if (n <= 20)
            break;
        else 
        cout << "\nMaksimum Array Hanya 20 Elemen\n";
    }

    cout << "\n------------\n";
    cout << "Enter Array Element\n";
    cout << "-------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }

}