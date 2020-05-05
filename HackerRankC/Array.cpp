#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    short int totalSize =0;
    int arr[1000];
    cin >> totalSize ;

    for(unsigned int i =0 ; i< totalSize ; i++)
    {
        cin >> arr[i];
    }

    int j = totalSize-1;

    while(j>=0){
        std::cout << arr[j] << " " ;
        j--;
    }
    // std::cout << arr[3] << " " << arr[2] << " ";
    return 0;
}

