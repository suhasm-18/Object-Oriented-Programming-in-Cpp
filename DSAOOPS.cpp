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

golf::golf(const char * name , int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

golf::~golf()
{
}

int golf::setgolf(){
	
	int wczytanie;
	int temp_hendi;
	char imie[40];
	cout << "Podaj imie: ";
	cin.getline(imie, 40);
	if(strlen(imie))
	{
		wczytanie = 1;
	}
	else
		wczytanie = 0;
	cout  << "Podaj handicap: ";
	cin >> temp_hendi;
	golf tymczasowy(imie, temp_hendi);
	*this = tymczasowy;
	return wczytanie;
}

void golf::showgolf() const
{
	 cout << "\nHandicup: " << this->handicap << endl;
	 cout << "\nImie: " << this->fullname << endl;
}

