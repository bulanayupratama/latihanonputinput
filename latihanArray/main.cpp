#include <iostream>


using namespace std;

int main()
{
    int i;
    string xiirpl1[5] = {"Roro", "Jonggrang", "kidul"};
    cout << "yang paling jelek di Xll RPL 1 adalah" << xiirpl1[2]<< endl;
    cout << "Diantaranya";
    for(i=0; i<3; i++) {
        cout << xiirpl1[i] << ", ";
    }
    return 0;
}
