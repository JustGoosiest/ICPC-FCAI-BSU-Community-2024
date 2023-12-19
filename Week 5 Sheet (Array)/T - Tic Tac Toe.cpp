#include <iostream>
using namespace std;
int main(){
char array[3][3];
for(int i=0;i<3;i++)
{
    for (int j=0;j<3;j++)
    {
    cin >>array[i][j];
    }
}
if(array[0][0]==array[0][1]&&array[0][1]==array[0][2]&&array[0][0]!='.')
{
    cout<<array[0][0]<<" wins";
}
else if(array[1][0]==array[1][1]&&array[1][1]==array[1][2]&&array[1][0]!='.')
{
    cout<<array[1][0]<<" wins";
}
else if(array[2][0]==array[2][1]&&array[2][1]==array[2][2]&&array[2][0]!='.')
{
    cout<<array[2][0]<<" wins";
}
else if(array[0][0]==array[1][0]&&array[1][0]==array[2][0]&&array[0][0]!='.')
{
    cout<<array[0][0]<<" wins";
}
else if(array[0][1]==array[1][1]&&array[1][1]==array[2][1]&&array[0][1]!='.')
{
    cout<<array[0][1]<<" wins";
}
else if(array[0][2]==array[1][2]&&array[1][2]==array[2][2]&&array[0][2]!='.')
{
    cout<<array[0][2]<<" wins";
}
else if(array[0][0]==array[1][1]&&array[1][1]==array[2][2]&&array[0][0]!='.')
{
    cout<<array[0][0]<<" wins";
}
else if(array[0][2]==array[1][1]&&array[1][1]==array[2][0]&&array[0][2]!='.')
{
    cout<<array[0][2]<<" wins";
}
else cout<<"draw";
return 0 ;
}