
#include <iostream>
#include <string.h>
using namespace std;

int main() {
  int SIZE;
  cout<<"State size: ";
  cin>>SIZE;
  int *pa, *pb,  temp,i;
	pa=new int[SIZE];
  for(i=0 ;i<SIZE; i++,pa++){
    *pa=i+1;
  }
  pa -= SIZE;
	cout<<"Original: ";
	for (i = 0; i < SIZE - 1; i++,pa++) //print 1 - 9
	  cout<<*pa<<" ";
	
  cout<<*pa<<endl; 
  pa -= (SIZE-1);
  pb=new int[10];
  for(i=0 ;i<SIZE; i++,pa++,pb++){
    *pb=*pa;
  }
  pa -= SIZE;
  pb--;
  cout<<"Reverse: ";
	for (i = 0; i < SIZE ; i++)  {
		temp = *pa;  
		*pa = *pb;  
		*pb = temp; 
		pa++;  pb--; 
	}

  pa -= SIZE;
	for (i = 0; i < SIZE - 1; i++,pa++)
	  cout<<*pa<<" ";
	
  cout<<*pa<<endl;

  pa -= (SIZE-1);
  delete[] pa;
	return 0;
}