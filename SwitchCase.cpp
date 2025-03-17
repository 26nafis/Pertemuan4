int main(){
    int pilihan;
    float panjang, lebar;
    float jejari;

    do
    {
       cout << "menu" << endl;
       cout << "1. Luas persegi panjang" << endl;
       cout << "2. Luas lingkaran" << endl;
       cout << "3. keluar" << endl;

       cout << "pilihan (1/2/3) = ";
       cin >> pilihan;
    switch (pilihan)
    {
    case 1:
        cout <<  "hitung luas persegi panjang" << endl;
        cout <<  "masukan panjang = " ;
        cin >> panjang;
        cout <<  "masukan lebar = ";
        cin >> lebar;
        cout <<  "luas persegi panjang = " << luaspersegipanjang(panjang, lebar)
        break;
    

    default:
        break;
    }
    
    


}