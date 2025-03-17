#include <iostream>
using namespace std;



int main()
{
    int n;
    int perulanganWhile = 0;
    int perulanganDo = 0;
    //perulangan dengan for

    cout <<"perulangan for pencacah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "nilai n = " << n << "selamat datang" << endl
    }
    cout <<"Nilai n terakhir = " << n << endl;
    cout << endl;
// perulangan dengan for 
    cout << "perulangan for pencacah turun" << endl;
    for (n = 5; n < 0; n--)
    {
        cout << "Nilai n = " << n << "Selamat datang" << endl;
    }
    cout << "nilai n terkahir = " << n << endl;
    cout << endl;

    cout << "perulangan for pencacah turun" << endl;

    srand(time(0));

    n = rand() % 10;

cout << "nilai awal n = " << n << endl;

while (n < 7)
{
    cout << "jumlah perulangan = " << perulanganWhile << endl;
    cout << "nilai n terkahir = " << n << endl;

    cout << "perulangan do while" << endl;
}




}
