/*

        Created by: KaeexS#9426
        For learning.
        You can add some crypt methods.
        You can add some Anti Debug, MemoryBreakPointsCheck, Anti Dumper, etc...


*/
#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <windows.h>
using namespace std; //I  use it for simple code. When you not using that program can be hardest for reverse


string RandomString(int len) //Random String for some generators etc..
{
    string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string newstr;
    int pos;
    while (newstr.size() != len) {
        pos = ((rand() % (str.size() - 1)));
        newstr += str.substr(pos, 1);
    }
    return newstr;
}

int QuitMe()
{
    return 0;
}

int main()
{
    string from_crypt{ "KKT" };
    string crypted{ from_crypt };//Input crypted string (Input some crypt code like AES, SHA256, BCRYPT, etc..)
    string encrypted{};//Input crypted string (Input some crypt code like AES, SHA256, BCRYPT, etc..)

    int frst_value = { 1 };//Using for if/else check
    int sec_value = { 2 };//Using for if/else check


    //that can be crypted URL
    char encryptor[9]; //number of bytes
    int enc{ 0 }, preset{}; // starting byte

    encryptor[enc++] = 's';
    encryptor[enc++] = 'e';
    encryptor[enc++] = 'c';
    encryptor[enc++] = 'u';
    encryptor[enc++] = 'r';
    encryptor[enc++] = 'i';
    encryptor[enc++] = 't';
    encryptor[enc++] = 'y';
    encryptor[enc++] = '\n';

    string crypt = encryptor;//crypted string in BYTES (CAN'T BE VISIBLE IN CONSOLE AND REVERSE TOOLS)
    srand((unsigned)time(0));
    int RandNum;
    RandNum = (rand() % 6) + 1;


    SetConsoleTitle((LPCWSTR)"Security");
    if (frst_value < sec_value)
    {

        int selection;
        cout << "   Securtiy LEARN \n   Created by: KaeexS#9426" << endl;
        cout << "\n";
        cout << "\n";
        cout << "   1. Random Number" << endl;
        cout << "   2. Random String" << endl;
        cout << "   3. Crypted String in bytes(Anti Bsembler by: kvetinka#9031)" << endl;
        cout << "\n";
        cout << "   Select: "; cin >> selection; cout << "\n";
        if (selection == 1)
        {
            cout << "[*] " << RandNum << endl << endl;
            system("pause");
            return 1;
        }
        else if (selection == 2)
        {
            cout << "[*] " << RandomString(20) << endl << endl;
            system("pause");
            return 1;
        }
        else if (selection == 3)
        {
            cout << "[*] " << crypt << endl << endl;
            system("pause");
            return 1;
        }
    }
    else
    {
        QuitMe(); //Quit the program
    }
}

