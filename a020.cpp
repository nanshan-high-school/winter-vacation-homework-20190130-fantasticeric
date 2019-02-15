#include <iostream>
using namespace std;
int main() 
{
    char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int number[26] = {10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
    int check_num[10] = {0};
    int total;
    string ID_num;
    cout << "請輸入身分證字號:";
    cin >> ID_num;
    for(int i = 0; i < 26; i++)
    {
        if((int)ID_num[0] == (int)alphabet[i])
        {
            check_num[0] = number[i];
        }
    }
    for(int j = 1; j < 10; j++)
    {
        check_num[j] = (int)ID_num[j] - '0';
        total += check_num[j] * (9 - j);
    }
    total += check_num[0] / 10 + check_num[0] % 10 * 9 + check_num[9];
    if(total % 10 == 0)
    {
        cout << "real";
    }
    else
    {
        cout << "fake";
    }
}
