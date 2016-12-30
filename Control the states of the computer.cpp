#include <cstdlib>
#include <iostream>

using namespace std;

void main() {
    
    system("COLOR 9");
    cout << endl << "1 : Shutdown the computer." << endl
         << endl << "2 : Shutdown the computer without warning the user." << endl
         << endl << "3 : Cancel the shutdown of the computer." << endl
         << endl << "4 : Restart the computer." << endl
         << endl << "5 : Hibernate." << endl
         << endl << "6 : Log out." << endl
         << endl << "7 : Exit." << endl;

    cout << endl << "Put your choice : " << endl;
    char c;
    cin >> c;
    system("cls");

    switch (c) {

        case '1':system("SHUTDOWN /S /T 00");
            break;

        case '2':system("SHUTDOWN /f /S /T 00");
            break;

        case '3':system("SHUTDOWN /a");
            break;

        case '4':system("SHUTDOWN /R /T 00");
            break;

        case '5':system("SHUTDOWN /h");
            break;

        case '6':system("SHUTDOWN /L");
            break;

        case '7':system("EXIT");
            break;

        default:cout << "Error, choose again" << endl;
    }

}