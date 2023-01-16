#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    if(n>90) {
        cout<<"EXCELLENT";
    
    }

    else if(n>80 && n<=90) {
        cout<<"GOOD";
    }

    else if(n>70 && n<=80) {
        cout<<"FAIR";
    }

    else if(n>60 && n<=70) {
        cout<<"MEET EXPECTATIONS";
    }

    else{
        cout<<"BELOW AVERAGE";
    }

    return 0;
}

