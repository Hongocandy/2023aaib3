///week11-1.cpp 使用Hash Map或Hash Set
///不能直接在CodeBlocks使用，因為是C++2021
///Setting-Compiler,加入C++11就可以了
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int> table;
    table[9977341] = 9;
    table[4433997] = 4;
    cout << table[9977341] <<"\n";
    cout << table[4433997] <<"\n";
}
