/*fecha de nacimiento
 */
#include <iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};
int main()
{
    Date birth;

    birth.day = 12;
    birth.month = 10;  
    birth.year = 2004;

    cout << "Day of birth: " << birth.day << endl;
    cout << "Month of birth: " << birth.month << endl;
    cout << "Year of birth: " << birth.year << endl;

    return 0;
}

