#include <iostream>
using namespace std;
double getTowerHeight()
{
    cout << "Enter the height of the tower in mrters: ";
    double x{};
    cin >> x;
    return x;
}
bool isNotOnTheGround(double y, int count)
{
    double gravity_constance{9.8};
    double height{y - gravity_constance * count * count / 2.0};
    if (height > 0)
        return true;
    else
        return false;
}
double calculateBallHeight(double y, int count)
{
    double gravity_constance{9.8};
    double height{y - gravity_constance * count * count / 2.0};
    return height;
}
void theBallOnTheGround(double y, int count)
{
    cout << "At " << count << " seconds, the ball is on the ground.\n";
}
void calculateAndPrintBallHeight(double y, int count)
{

    if (isNotOnTheGround(y, count))
        cout << "At " << count << " seconds, the ball is at height: " << calculateBallHeight(y, count) << " meters.\n";
    else if (isNotOnTheGround(y, count - 1))
        theBallOnTheGround(y, count);
}
int main()
{
    double towerHeight{getTowerHeight()};

    calculateAndPrintBallHeight(towerHeight, 0);
    calculateAndPrintBallHeight(towerHeight, 1);
    calculateAndPrintBallHeight(towerHeight, 2);
    calculateAndPrintBallHeight(towerHeight, 3);
    calculateAndPrintBallHeight(towerHeight, 4);
    calculateAndPrintBallHeight(towerHeight, 5);

    return 0;
}