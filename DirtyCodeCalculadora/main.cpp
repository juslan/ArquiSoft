#include <iostream>

using namespace std;

int main()
{
    while(true){
            int a,b,c;
        char d;
        cin>>a>>b>>d;
        if(d=='+'){
            c=a+b;
        }
        else{
            if(d=='-'){
                c=a-b;
            }
            else{
                if(d=='*'){
                    c=a*b;
                }
                else{
                    if(d=='/'){
                        c=a/b;
                    }
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
