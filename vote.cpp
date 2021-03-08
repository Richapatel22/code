#include<iostream>
using namespace std;
int main()
{
    int age;
    std::cout << "Enter your age" << std::endl;
    std::cin >> age;
    if(age>=18)
    {
        cout<<"you are eligible to vote.";
    }
    else
    {
        cout<<"you are not eligible to vote.";
    }
}
