#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int data[] = {1,2,3,4,5};
    int k=6;

    if(binary_search(data,data+5,k)){
        cout << "found!";
    }
    else{
        cout << "not found";
    }
}