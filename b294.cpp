#include <iostream>
using namespace std;
int main() 
{
    int days = 0, total = 0;
    cout << "請輸入天數:";
    cin >> days;
    int amount[days];
    cout << "請輸入每天的饅頭數:";
    for(int i = 0; i < days; i++)
    {
        cin >> amount[i];
        total += (i + 1) * amount[i];
    }
    cout << "共" << total << "元";
}
