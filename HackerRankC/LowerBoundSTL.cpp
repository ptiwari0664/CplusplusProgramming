#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin>>size;

    vector<int> intVector;
    int temp;
    for (int i=0; i<size;i++)
    {
        cin>>temp;
        intVector.push_back(temp);
    }

    int no_of_queries;
    cin >> no_of_queries;

    vector<int> queryvect;
    temp =0;
    for (int i=0; i<no_of_queries;i++)
    {
        cin>>temp;
        queryvect.push_back(temp);
    }

    sort(intVector.begin(), intVector.end());

    std::vector<int>::iterator low;

    for (int i=0; i<no_of_queries;i++)
    {
        low=std::lower_bound (intVector.begin(), intVector.end(), queryvect.at(i)); 

        // low - intVector.begin() is going to give the index of the integer
       if (intVector.at(low - intVector.begin()) == queryvect.at(i))
           cout << "Yes " << (low - intVector.begin() + 1) << endl;
       else
           cout << "No " << (low - intVector.begin() + 1) << endl;
    }


    return 0;
}

