#include<iostream>
using namespace std;

long long int x=0;
int recursion(){
    cout<<x++<<endl;
    return recursion();
}

int main(){
    recursion();
}