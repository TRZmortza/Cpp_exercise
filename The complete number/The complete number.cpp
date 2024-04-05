#include<iostream>
using namespace std;
int main(){
    int userNum;
    bool is_complete=true;
     cin>>userNum;
    for (int i = 2; i < userNum; i++)
    {
        for (int j = 2; j <i ; j++)
        {
        if (i%j==0)
        {
            cout<<"NO";
            is_complete=false;
            break;
        }
        }
        
    }
    if (is_complete)
    {
        cout<<"YES";
    }
    system("pause");
    return 0;
}