#include <iostream>
using namespace std;
int main (){
    string user;
    string pass;

    cout << "masukkan username anda : ";
    cin >> user;
    cout << "masukkan password anda : ";
    cin >> pass;
if(user == "admin" && pass == "admin123"){
    cout << "Username sesuai, Password sesuai, Login berhasil" << endl;

}else if(user == "admin" && pass != "admin123" ){
    cout << "Username anda sesuai, Password sesuai!" << endl;

}else if(user != "admin" && pass == "admin123" ){
    cout << "Username tidak sesuai, Password sesuai!" << endl;

}else{
    cout << "Username dan Password tidak sesuai!" << endl;
}

return 0;
}
