//array with pointer
#include<iostream>
using namespace std;
int main()
{
    int array []={78,45,12,89,56,23,79,46,13,82};  
    int *ptr;                                                    

    ptr = array;                                                   
    cout << "\n Values : ";
    for(int a=1;a<=10;a++)
    {
    	cout << *ptr;                                     
        ptr++;                                                          
    }
}

