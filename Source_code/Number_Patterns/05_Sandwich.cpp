#include <iostream>
using namespace std;

int main() {

    for(int i=5;i>=1;i-=2) {
        for(int j=1;j<=i;j++)
            cout<<(8-i)<<" ";
        cout<<endl;
    }

    for(int i=3;i<=5;i+=2) {
        for(int j=1;j<=i;j++)
            cout<<(8-i)<<" ";
        cout<<endl;
    }

    return 0;
}