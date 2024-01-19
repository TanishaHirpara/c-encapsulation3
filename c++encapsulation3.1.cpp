#include<iostream>
#include<string.h>
using namespace std;


class companies{
	public :
	int id;
    char name[100];
    char staffquantity[100];
    char revenue[100];
    char importno[100];
    char exportno[100];
    char ceo[100];
	
	
	companies(int id, char name[], char staffquantity[], char revenue[], char importno[], char exportno[], char ceo[])
          {
          	this->id = id;
          	strcpy(this->name ,name);
          	strcpy(this->staffquantity , staffquantity);
          	strcpy(this->revenue ,revenue);
          	strcpy(this->importno ,importno);
          	strcpy(this->exportno ,exportno);
          	strcpy(this->ceo ,ceo);
          	
          	
		  }
	};
	
	main()
	{
		companies c(1, "xyz " ,"4 " ,"Rs.400 " ,"4 " ,"4 " ,"xyz ");
	    companies c1(2, "efg " ,"5 " ,"Rs.500 " ,"5 " ,"5 " ,"efg ");
	   	companies c2(3, "efgh " ,"7 " ,"Rs.700 " ,"7 " ,"7 " ,"efgh ");
	   	companies c3(4, "abce " ,"8 " ,"Rs.800 " ,"8 " ,"8 " ,"abce ");
		
	}
