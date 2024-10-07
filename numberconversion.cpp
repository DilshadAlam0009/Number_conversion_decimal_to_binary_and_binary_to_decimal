//decimal_to_bianry number coversion

#include<iostream>
using namespace std;
class solution {

    public:
    int fun(int n){
        int rem, ans, i=1;
        while(n!=0){
            rem =  n%2;
            n/=2;
            ans =ans+(rem*i);
            i*=10;;
        }
        return ans;
    }
};

int main(){
    int n;
    solution obj;
    cout<<"enter the number to change: ";
    cin>>n;
   cout<<obj.fun(n);

return 0;
}

// binary_to_decimal  number conversion

#include <iostream>
using namespace std;
class solution
{

public:
    int fun(int n)
    {
        int rem, ans = 0, i = 1;
        while (n != 0)
        {
            rem =n% 10;
            n /= 10;
            ans = ans + (rem *i);
            i*=2;
        }
        return ans;
    }
};

int main()
{
    int x;

    solution obj;
    cout<<"enter the number to change from binary to decimal: ";
    cin>>x;
    cout << obj.fun(x);

    return 0;
}