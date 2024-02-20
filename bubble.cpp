#include<stdio.h>
using namespace std;
student class
{
  char name [15];
  float sgpa;
  int roll;
}
void accept(struct student list []);
void display(struct student size []);
void bubble sort(struct student []);
void binary search(struct student size[]);
int main()
{
  struct student data [30];
  int ch;
  accept(data);
do
{
  cout<<"1.perform the Bubblesort";
  cout<<"2.perform the binary search";
}
void bubblesort(struct student list[15])
cin>>;
cout""enter the num/n";
for (i=0;i<n;i++)
{
  cout<<"enter the number at position"<<i+1<<.."
  cin>>a[i];
}
for(pass-0;pass<n-1;pass++)
{
for(i=0;j<n-pass-1;j++)
if(a[i]>a[i+1])
{
  temp=a[i];
  a[i]=a[i=1];
  a[i+1]=temp;
}
}
}
cout<<"the sorted number...\n"
for (i=o;i<n;i++)
{
cout<<a[i]<<"">>
}
void binarysearch(struct student list[15])
{
  int i,lower,upper,mid;
  char search[50]
  cout<<"in enter name of student you want to search"];
  cin>>search;
  lower=o;
  upper=3-1;
  mid=(lower+upper)/2;
{
  if(strcmp(list[mid].name,search)(0)
  lower=mid+i;
else if(stramp(list[mid].name,search)==0)
{
 cout<<"\n"<<list(mid).rollno<<"/t"list[mid].name<<"/t"list[mid].sgpa;
}
else
{
 upper=mid-1;
 mid=(lower+upper)/2;
}
 if(lower>upper)
 cout<<search<<"not found";
}




