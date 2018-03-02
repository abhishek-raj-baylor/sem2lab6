//
//  main.cpp
//  Q1
//
//  Created by Abhishek Raj on 08/02/18.
//  Copyright © 2018 Abhishek Raj. All rights reserved.
//

#include<iostream>
using namespace std;
void binsearch(int a[],int l,int u,int data)
{
    int flag=1,mid=-1;
    while(mid!=l&&flag)
    {
        mid=(l+u)/2;
        if(a[mid]>data) u=mid;
        else if(a[mid]<data) l=mid;
        else flag=0;
    }
    if(!flag) cout<<mid+1<<" is  the position of data ";
    else cout<<"Not present.";
}
int main()
{
    int a[5]={1,2,3,4,5};
    binsearch(a,0,4,4);
    return 0;
}
