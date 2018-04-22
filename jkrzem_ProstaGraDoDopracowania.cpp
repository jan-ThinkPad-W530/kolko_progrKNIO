#include<iostream>
#include<windows.h> //dla windowsa, dla linixa <unistd.h>
#include<cstdlib>
#include<time.h> //lub <ctime>
#include<string>
#include<vector>

using namespace std;
struct str_kostka
{
	int x;
	vector<int> wyniki;
};

str_kostka kostka( int a, int b ){
	str_kostka kostka;
	
	for(int i=0;i<a;i++)
	{
		kostka.wyniki.push_back( 1+rand()%b  );
	}
	
	return kostka;
}
class Zgadnij{
	public:
		int a, s;
		
		
		
		void graj()
		{
		cout<<"Wybieram liczbe z przedzialu 1..100 "<<endl;
		for(int i=1;i<30;i++){
			cout<<"#";
			Sleep(250);
		}
		cout<<"#"<<endl;
		srand(time(NULL));
		
		a = rand()%100+1;
		
		
		while(s!=a){
			cout<<" Wybralem liczbe. Zgadnij jaka"<<endl;
			cin>>s;
			if(s==a){
				cout<<"Zgadles! to ta liczba."<<endl;
			}
			if(s<a){
				cout<<"Za malo. Sproboj jeszcze raz \n";
			}
			if(s>a){
				cout<<"Za duzo. Sproboj jeszcze raz \n";
			}
			
		}
	}	
};


class Zut{
	public:
		int a,b;
		
		
		void graj1()
		{
			cout<<"Ile mamy kosci do gry?"<<endl;
			cin>>a;
			cout<<"Iluscienne sa te kosci"<<endl;
			cin>>b;
			srand(time(NULL));
			str_kostka wynik=kostka(a,b);
			for(int i=1;i<30;i++){
				cout<<"#";
				Sleep(250); //dla linuxa sleep z ma³ej litery
			}
			cout<<"#"<<endl;
	
			cout<<" Wylosowano: "<<endl;
			for(int i =0; i< wynik.wyniki.size(); i++)
			cout << wynik.wyniki[i]<<endl;
			
		}
	
		
		
};
int main(){
	string imie,tak,odpowiedz;
	int a; //575765
	
	cout<<"Witaj! Prosze podaj swoje imie :)  "<<endl;
	cin>>imie;
	cout<<"Hej "<<imie<<" :). "<<"Chcesz zagrac w gre?"<<endl;
	cin>>odpowiedz;
	if(odpowiedz=="tak"||odpowiedz=="Tak"){
	
	Sleep(3000); //linux ma³a litera
	while( true )
	{
	cout<<imie<<", "<<"Wybierz gre(wpisz literke): "<<endl;
	cout<<"1 - zagdnij liczbe"<<endl;
	cout<<"2 - rzut kostka"<<endl;
	Sleep(4000);
	cout<<"Moze niechcesz grac."<<endl;
	cout<<"Jesli tak to wybierz: 3"<< endl;
	cin>>a;
	if(a==1){
		cout<<imie<<" "<<"Wybrales gre: Zgadnij liczbe "<<endl;
		Zgadnij zgadnij1;
		zgadnij1.graj();
		
		
		
		
	} else if(a==2){
		cout<<imie<<" "<<"Wybrales gre: Zut kostka "<<endl;
		Zut zut1;
		zut1.graj1();
		
	} else if(a==3) break;
			else{
				cout<<"Nie rozumiem co napisales, wybierz jeszcze raz. "<<endl;
				}
	}
}
   if(odpowiedz=="Nie"||odpowiedz=="nie" ){
   	cout<<"Szkoda :("<<endl;
   	
   }
	return 0;
}
