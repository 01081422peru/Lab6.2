#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];

    cout << endl;
}
int Min(int* a, const int size)
{
    int min; 
    min = a[0];
    for (int i = 0; i < size; i++)
        if (min < a[i] && a[i] % 2 == 0)
        {
            min = a[i]; 
      
            break; 
        }
  
    for (int i = 1; i < size; i++)
        if (min > a[i] && a[i] % 2 == 0)
            min = a[i];
    return min;
}

int main()
{
    srand((unsigned)time(NULL));

    int n;
    cout << "n= "; cin >> n;

    int* a = new int[n];
    int Low = -10;
    int High = 10;
    Create(a, n, Low, High);
    Print(a, n);
    Min(a, n);

    cout << Min(a, n) << endl;

    delete[]a;

    return 0;
}
