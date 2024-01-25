#include <iostream>
#include <conio.h>
using namespace std;

int encontrarMax(int x, int y, int z);

int main()
{
    int n1, n2, n3;

    cout << "Digite 3  numeros: ";
    cin >> n1 >> n2 >> n3;

    cout << "El mayor de los 3 numeros es: " << encontrarMax(n1, n2, n3) << endl;
    getch();
    return 0;
}
int encontrarMax(int x, int y, int z)
{
    int numMax;

    if (x > y)
    {
        if (x > z)
        {
            numMax = x;
        }
        else
        {
            numMax = z;
        }
    }
    else
    {
        if (y > z)
        {
            numMax = y;
        }
        else
        {
            numMax = z;
        }
    }
    return numMax;
}

//otro ejemplo
/*

#include <iostream>
using namespace std;

int main(void) {
  
  int number1, number2, number3;

  int max;

  cin >> number1;
  cin >> number2;
  cin >> number3;

  max = number1;

  if (number2 > max)
    max = number2;

  
  if (number3 > max)
    max = number3;


  cout << "The largest number is " << max << endl;

  return 0;
*/