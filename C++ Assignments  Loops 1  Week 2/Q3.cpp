#include <iostream>

using namespace std;

int main()
{
    int n,product;
    cout<<"Enter the number\n";
    cin>>n;
    for(int i=1; i<=12;i++){
        product=n*i;
        cout<<n<<" * "<<i<<" = "<<product<<endl;
    }
}

