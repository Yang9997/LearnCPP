#include <iostream>
using namespace std;
int main()
{

    int smaller;
    int larger;
    cout << "请输入第一个数字：" << endl;
    cin >> smaller;
    cout << "请输入第二个数字：" << endl;
    cin >> larger;

    if (larger < smaller)
    {
        cout << "交换" << endl;
        int tempt = larger;
        larger = smaller;
        smaller = tempt;
    }

    cout << "小数字：" << smaller << endl;
    cout << "大数字：" << larger;
    return 0;
}