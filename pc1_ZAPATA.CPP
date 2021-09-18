#include <iostream>
using namespace std;

void sort(int&highest,int&middle,int&lowest);

int main()
{

    int num1 = 20, num2 = 10, num3 = 30;
    int highest, middle, lowest;


    cout << num1 << " " << num2 << " " << num3 << endl;
    sort(highest,middle,lowest);
    cout << highest << " " << middle << " " << lowest << endl;

}
void sort(int&highest,int&middle,int&lowest)
{
    int num1 = 20, num2 = 10, num3 = 30;
    if(num1>num2 && num1>num3)
    {
        num1 = highest;
        if (num2>num3)
        {
            num2 = middle;
            num3 = lowest;
        }
        else
        {
            num3 = middle;
            num2 = lowest;
        }
    }
    if(num2>num1 && num2>num3)
    {
        num2 = highest;
        if (num1>num3)
        {
            num1 = middle;
            num3 = lowest;
        }
        else
        {
            num3 = middle;
            num1 = lowest;
        }
    }
    if(num3<num1 && num3>num2)
    {
        num3 = highest;
        if(num1>num2)
        {
            num1 = middle;
            num2 = lowest;
        }
        else
        {
            num2 = middle;
            num1 = lowest;
        }
    }
}
