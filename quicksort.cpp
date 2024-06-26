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

void swap (int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;
}

void quicksort(int low,int high)
{
    int temp;
    int pivot, i, j;

    if( low > high) {
        return;
    }

    pivot = arr[low];
    i = low + 1;
    j = high;

    while (i <= j)
    {
        while ((arr[i] <= pivot)&& (i <= high))
        {
            i++;
            cmp_count++;
        }
        cmp_count++;

        while ((arr[j] > pivot)&& (j >= low))
        {
            j--;
            cmp_count++;
        }
        cmp_count++;
        if (i < j)
        {
            swap(i, j);
        }
    }

    if (low < j)
    {
        swap(low, j);
    }

    quicksort(low, j - 1);

    quicksort(j + 1, high);

}

void display ()
{
    cout<< "\n--------------\n";
    cout << "Sorted Array\n";
    cout<< "-------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\nNumber of Comparisons : "<< cmp_count << endl;
    cout << "Number of Data Movements : " << mov_count << endl;
}

int main ()
{
    char ch;

    do {
        input();
        quicksort(0, n - 1);
        display ();
        cout << "\n\nDo You Want to continue ? (y/n) : ";
        cin >> ch;
        if (ch == 'n' || ch == 'N' )
            break;

        system ("Pause");
        system ("cls");
    }while (true);

    return 0;
}