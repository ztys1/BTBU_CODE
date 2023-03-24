#include <iostream> 
using namespace std;
int main ()
{
char a[100];
int i;
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=',')
cout<<a[i];
else 
cout<<endl;
}
cout<<endl;
return 0;
}