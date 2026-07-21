#include<iostream>
#include<string>

using namespace std;
int main(){

    //variable declaration
    string name = "";
    string password = "";
    int phone;

    //ask for a name
    cout<<"======================\n";
    cout<<"        NAME          \n";
    cout<<"======================\n";
    cout<<"NAME: ";
    getline(cin,name);

    cout<<"                      \n";

    cout<<"======================\n";
    cout<<"       PASSWORD       \n";
    cout<<"======================\n";
    cout<<"PASSWORD: ";
    getline(cin,password);

    cout<<"                      \n";

    cout<<"NAME: "<<name<<endl;
    cout<<"                      \n";
    cout<<"PASSWORD: "<<password<<endl;

    cout << "\nPresiona ENTER o cualquier tecla para salir...";
    cin.get();

    return 0;
}
