#include <iostream>
#include<cstring>

using namespace std;

class golf{
	private:
		char fullname[40];
		int handicap;
	public:
		golf(const char * name = "brak", int hc=0);
		~golf();
		int setgolf();
		void showgolf() const;		
};



int main() 
{
	char nazwisko[]= "Piotr";
	golf hey("ona",55);
	hey.setgolf() ;
	hey.showgolf();
	
	return 0;
}



