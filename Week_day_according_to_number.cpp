//------------------------------1.A PROGRAM TO  take a number from user and print  weeks days to them-------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter e number to want weeks days :";
	cin>>a;
	switch(a)
	{
	
	    case 1:
	    	cout<<"Monday";
	    	break;
	    case  2:
		    cout<<"tuesday";
		    break;
		case 3:
		    cout<<"Wednesday";
			break;
		case 4:
		    cout<<"thursday";
			break;
		case 5:
		    cout<<"Friday";
			break;
		case 6:
			cout<<"Saturday";
			break;
		case 7:
		     cout<<"Sunday";
			 break;	
		default:
		   cout<<"your enter numbewr is wrong.";	 
    }
    return 0;
		    
}
