// suma de cinco numeros
#include <iostream>
using namespace std;

void RequestData();
int CalculateSum(int vec[], int);

int vec[100], size;

int main()
{
    RequestData();

    cout << "\nThe sum is: " << CalculateSum(vec, size) << endl;

    return 0;
}

void RequestData()
{
    cout << "Type in the number of items to be added: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << "  Enter a number: ";
        cin >> vec[i];
    }
}

int CalculateSum(int vec[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += vec[i];
    }
    return sum;
}


