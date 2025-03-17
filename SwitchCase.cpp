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
        case 2:
        cout <<  "hitung luas lingkaran << endl;
        cout <<  "masukan jari-jari = ";
        cin >> jejari;
        cout <<  "masukan lebar = ";
        cin >> lebar;
        cout <<  "luas lingkaran = " << luaslingkaran(jejari) << endl;
          break;
        case 3:
        break;
        default:
           cout << "pilihan salah, pilihan harus di antara 1-3.";
           break;
    

    
    }while(pilihan != 3);
    
    


}