//This code finds all simple numbers between two integers, a and b
//a simple number is one that is equal to the sum of its digits to the power of their place; i.e. 89=8^1+9^2.
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void simpfunc(int a, int b)
{
  int arr[b-a], number, digit, simpsum;    
  for(int i=0; i<=(b-a); i++){      //loop to fill array
    arr[i]=a+i;       
  }
  for(int i=0; i<=b-a; i++){  //loop for determining and outputting each simple number
    vector<int> digits={}, rdigits={}; //vectors for digits
    simpsum=0;
    number=arr[i];          //initialize number
    while(number!=0){      //loop to break into digits
      digit=number%10;
      rdigits.push_back(digit); //backwards inserts :/
      number=number/10;
    }
  for(int m=rdigits.size()-1; m>=0; m--)  //forwards insert :)
    {
      digits.push_back(rdigits[m]);
    }
    
    double ddigits[digits.size()];    //creates array of doubles for digits to use in pow fn
    for(int k=0; k<digits.size(); k++)  //fill ddigits
      {
        ddigits[k]=digits[k];
      }
    for(int k=0; k<digits.size(); k++)  //loop for computing simpsum
      {
        double power=k+1;
        simpsum=simpsum+pow(ddigits[k],power);
      }
    if(simpsum==arr[i])      //check if 
      cout<<arr[i]<<" ";
    else
      arr[i]=arr[i];
}
  };

int main() {
  int a, b, simpsum, number, digit;
  vector<int> digits={}, rdigits={};
  cout<<"Enter two range numbers: ";
  cin>>a>>b;
  if(a>b)
  {
    int c=b;
    b=a;
    a=c;
  }
  simpfunc(a,b);
}
