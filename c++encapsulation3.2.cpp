#include<iostream>
#include<string.h>
using namespace std;


class hotel{
	public :
		int id;
		char name[100];
		char type[100];
		char rating[100];
		char location[100];
		char establishyear[100];
		char staffquantity[100];
    
	
	hotel(int id, char name[], char type[], char rating[], char location[], char establishyear[], 
	char staffquantity[])
          {
            this->id = id;
          	strcpy(this->name ,name);
          	strcpy(this->type , type);
          	strcpy(this->rating ,rating);
          	strcpy(this->location ,location);
          	strcpy(this->establishyear ,establishyear);
          	strcpy(this->staffquantity ,staffquantity);
          	
          	
		  }
	};
	
	main()
	{
		hotel h(1, "xyz " ,"a " ,"a " ,"4 " ,"surat " ,"2023 " ,"4 " );
	    hotel h1(2, "efg " ,"b " ,"b " ,"5 " ,"surat " ,"2023 " ,"5 " );
	   	hotel h2(3, "efgh " ,"c " ,"c " ,"7 " ,"surat " ,"2023 " ,"7 " );
	   	hotel h3(4, "abce " ,"d " ,"d " ,"8 " ,"surat " ,"2024 " ,"8 " );
	   	
	   	
	}
