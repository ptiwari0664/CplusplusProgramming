#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    unsigned int vector_size;
    cin>>vector_size;
    int temp;
    vector<int> user_input;

    for(int i=0; i<vector_size ; i++)
    {
        cin >> temp;
        user_input.push_back(temp);
    }

    sort(user_input.begin(),user_input.end());

    for(int i=0; i<vector_size ; i++)
    {
        cout<< user_input.at(i) << " " ;
    }
    cout<< " " << endl;
    return 0;
}

