#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    // Complete the code.
    int a=0,b=0;
    // string temp;
    // getline(cin>>ws,temp);
    // a = stoi(temp);
    // temp.clear();
    // getline(cin>>ws,temp);
    // b = stoi(temp);
    // temp.clear();

    cin >> a >> b;
    for(unsigned int n=a; n<=b;n++)
    {// Write Your Code Here
        switch(n)
        {
            case 1:
                std::cout<<"one" << std::endl;
                break;
            case 2:
                std::cout<<"two" << std::endl;
                break;
            case 3:
                std::cout<<"three" << std::endl;
                break;
            case 4:
                std::cout<<"four" << std::endl;
                break;
            case 5:
                std::cout<<"five" << std::endl;
                break;
            case 6:
                std::cout<<"six" << std::endl;
                break;
            case 7:
                std::cout<<"seven" << std::endl;
                break;
            case 8:
                std::cout<<"eight" << std::endl;
                break;
            case 9:
                std::cout<<"nine" << std::endl;
                break;
            default:
                if(n%2 == 0)
                    std::cout<<"even" << std::endl;
                else
                    std::cout<<"odd" << std::endl;
                break;
        }
    }

    return 0;
}


