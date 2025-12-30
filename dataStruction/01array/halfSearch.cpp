#include <iostream>
using namespace std;
int halfGetNumber(int number[], int min, int max, int target)
{
    int middle{(min + max) / 2};
    if (min<max)// ?
    {
        if (number[middle] == target)
            return middle;
        else if (number[middle] < target)
            halfGetNumber(number, middle + 1, max, target);
        else
            halfGetNumber(number, min, middle, target);
    }
    else
        return -1;
}
int main()
{
    int nums[6] = {0};
    for (int i = 0; i < 6; i++)
    {
        cin >> nums[i];
    }
    int target{};
    cin >> target;
    int length{sizeof(nums) / sizeof(nums[0])};
    int output{halfGetNumber(nums, 0, length, target)};
    cout<<output<<"\n";
    return 0;
}