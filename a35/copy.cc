#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int intArr[] =
    {
        3, 6, 7, 12
    };
    vector<int> intDestVector (4);

    intDestVector.push_back(15);

    cout << "Numbers in intArr: \n";
    for(size_t it = 0; it < 4; ++it)
        cout << ' ' << intArr[it] << '\n';

    cout << "Numbers in intDestVector before copy:\n";
    for(vector<int>::iterator it = intDestVector.begin(); it !=intDestVector.end(); ++it)
        cout << ' ' << *it << '\n';

    copy(intArr, intArr + 4, intDestVector.begin());    

    cout << "Numbers in intDestVector after copy:\n";
    for(vector<int>::iterator it = intDestVector.begin(); it !=intDestVector.end(); ++it)
        cout << ' ' << *it << '\n';

}
