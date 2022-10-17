#include<iostream>

using namespace std;

void TOH(int n,char Beg,char Aux,char End)
{
  if(n == 0)
    return;
  TOH(n-1,Beg,End,Aux);
  cout<<"Shifting disk "<<n<<" from "<<Beg<<" to "<<End<<endl;
  TOH(n-1,Aux,Beg,End);
}
int main()
{
     TOH(3,'B','A','E');
     return 0;
}
