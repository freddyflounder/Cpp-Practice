#include <iostream>
using namespace std;

bool pairsum(int sum, int num[]){
  bool pairadds=false;
  for(int i=0; i<10; i++)
    {
      for(int k=i; k<10; k++)
        {
          if(num[k]+num[i]==sum)
            pairadds=true;
        }
    }
  return pairadds;
}

int main() {
  int num[10], i, sum;
  for(i=0; i<10; i++)
    {
      num[i]=i+1;
      }
  cout<<"Enter a number to find out if it is the sum of two integers 1-10.";
  cin>>sum;
  cout<<pairsum(sum, num);
}
