#include <iostream>
using namespace std;
int main() 
{
    int c_pass[6] = {0};
    string password;
    cout << "請輸入密碼(7碼):";
    cin >> password;
    for(int i = 0; i < 6; i++)
    {
        c_pass[i] = (int)password[i+1] - (int)password[i];
        if(c_pass[i] < 0)
        {
            c_pass[i] = (int)password[i] - (int)password[i+1];
        }
        cout << c_pass[i];
    }
}
