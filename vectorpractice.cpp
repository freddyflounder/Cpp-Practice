#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<int> num {0, 0, 0};
  int k;
  cout<<"Input your three digits.";
  for(int i=0; i<3; i++){
    cin>>k;
    num[i]=k;
  }
  if(num[2]==9){
    num[1]=num[1]+1;
    num[2]=0;
      }
  if(num[1]==10){
    num[0]=num[0]+1;
    num[1]=0;
      }
  else
    num[2]=num[2]+1;
  cout<<"The number incremented by 1 is: ";
  for(int i=0; i<3; i++)
    cout<<num[i];
}
