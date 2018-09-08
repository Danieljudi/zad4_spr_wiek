#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat?" << endl;
    cin >> wiek;
    if (wiek<18)
        {
        cout<< "Jestes dzieciak i nie mozesz kandydowac na prezydenta";
        }
    else if ((wiek>=18)&&(wiek<35))
        {
        cout<< "Jestes pelnoletni ale nie mozesz kandydowac na prezydenta";
        }
        cout <<endl;

    else
        {
        cout<< "Jestes pelnoletni i mozesz kandydowac na prezydenta";
        }

    cout <<endl;
    return 0;
}
