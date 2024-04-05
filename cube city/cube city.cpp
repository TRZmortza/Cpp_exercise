#include<iostream>
int main(){
int n[2],m[2];
std::cin>>n[0]>>m[0];
try{
if (n[0]==1)
{
    throw new std::exception;
}
n[1]=n[0]-2;
m[1]=m[0]-2;
std::cout<<(n[0]*m[0])-(n[1]*m[1]);
}
catch(...)
{
    std::cout<<m[0];
}
};