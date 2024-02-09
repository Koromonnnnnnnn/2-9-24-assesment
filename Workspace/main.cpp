#include <iostream>
#include <string>
using namespace std;
int main()
{
    string arr[] = {"yes", "no", "no", "no", "no"}, toFind = "yes", notFound = "notFound";
    for (int i = 0; i <= sizeof(arr); i++)
    {
        if (arr[i] == toFind)
        {
            cout << "Element is found at " << i << " index" << endl;
            return 0;
        }
    }
    cout << notFound << endl;
}