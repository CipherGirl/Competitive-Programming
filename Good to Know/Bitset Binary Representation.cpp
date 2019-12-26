#include<iostream>
#include<bitset>
using namespace std;
int main()
{
  int N;//input number in base 10
  cin>>N;
  int O[32];//The output array
  bitset<32> A=N;//A will hold the binary representation of N
  for(int i=0,j=31;i<32;i++,j--)
  {
     //Assigning the bits one by one.
     O[i]=A[j];
  }
  int number = bitset<32>(A).to_ulong();
  cout<<A<<endl<<number<<endl;
  return 0;
}
