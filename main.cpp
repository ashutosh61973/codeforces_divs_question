#include <iostream>
#include<vector>
using namespace std;
long long int power(long long int A,long long  N)
{
        long long int RES=1;
        while(N)
        {
                if(N%2)
                {
                        RES=RES*A;
                        N--;
                }
                else
                {
                        A=A*A;
                        N=N/2;
                }
        }
        return RES;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int x;
       int n;
       cin>>n;
       vector<int>v;
       int count=-1;
       while(n)
       {
           x=n%10;
           if(x)
           {
               count++;
               v.push_back(x*power(10,count));
           }
           if(x==0)
           count++;
           n=n/10;
       }
       cout<<v.size()<<endl;
       for(int i=0;i<v.size();i++)
       {
           cout<<v[i]<<" ";
       }
       cout<<endl;
       
   }
   
   
   
   return 0;
}