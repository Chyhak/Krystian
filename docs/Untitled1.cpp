#include <iostream>
#include <conio.h>
using namespace std;

void intro()
{
	system("cls");
	cout<<"Rok 2019 Ziemia godzina 16:20"<<endl;
	cout<<"4 dni do imprezy urodzinowej"<<endl;
	_getch();
	cout<<"-”*ziew*”"<<endl;
	_getch();
	cout<<"”Ile mo¿na graæ w te lige...”"<<endl;
	_getch();
	cout<<"”Dobra ch³opaki ja nie gram ju¿ nexta ide coœ zjeœæ grajcie beze mnie”"<<endl;
	_getch();
	cout<<"-”No spoko, narazie” -”No elo”"<<endl;
	_getch();
	cout<<"*WSTAJE OD KOMPA*"<<endl;
	_getch();
	cout<<"-”Odlalbym siê jeszcze, mo¿e skocze jeszcze szybko do kibla”"<<endl;
	_getch();
	cout<<"POJSC DO KLOPA? (Y/N)"<<endl;
}

void kibel()
{
	system("cls");
	cout<<"*ziip*"<<endl;
	_getch();
	cout<<"-”ahhh co za ulg-”"<<endl;
	_getch();
}

void kuchnia()
{
	system("cls");
	cout<<"*Otwiera drzwi lodówki*"<<endl;
	_getch();
	cout<<"“Hmmm co by tu dzisiaj... AHA! Jest jeszcze pizza z wczoraj”"<<endl;
	_getch();
	cout<<"*OMNOMNOM-* *KASZLE*"<<endl;
	_getch();
}

void alien()
{
	cout<<"”AAAA CO TO KURWA JEST”"<<endl;
	_getch();
	cout<<"-”Witaj Krystianie.”"<<endl;
	_getch();
	cout<<"“Rozumiemy twa bojazn obecna koniuktura wydarzen ale nie lekaj siê, mamy szla-”"<<endl;
	_getch();
	cout<<"-”Zamknac pyski, nie widzicie, ze oglosili nowe skiny w lolu??” *patrzy w telefon*"<<endl;
	_getch();
	cout<<"-”Niew¹tpliwie, tak jak nasza maszyna przewidziala, wszystko idzie zgodnie z planem”"<<endl;
	_getch();
	cout<<"-”Ale kim wy do cholery jestescie? To jakis jebany prank?”"<<endl;
	_getch();
	cout<<"-”Jestesmy Gevanami. Nasza planeta to CoRoT-7b z gwiazdozbioru Jednoro¿ca, jestesmy oddaleni od ziemi o oko³o 490 lat swietl-”"<<endl;
	_getch();
	cout<<"-”Ryj tam ju¿, wypierdalac z mojego domu bo psem poszcz-”"<<endl;
	_getch();
	cout<<"-”Twoja impreza urodzinowa siê nie odbedzie i bêdzie kiepska”"<<endl;
	_getch();
	cout<<"-”Co kurwa?? O czym wy gadacie”"<<endl;
	_getch();
	cout<<"-”Wlasnie tak. Przyszlismy  Cie ostrzec a wlasciwie to zaoferowac oferte pomocy, w zamian za uratowanie jakze waznej dla ciebie imprezy”"<<endl;
	_getch();
	cout<<"“Wiemy, ze to mo¿e byæ dla ciebie teraz za wiele ale im mniej czasu teraz stracimy tym wieksze prawdopodobienstwo sukcesu twojej misji”"<<endl;
	_getch();
	cout<<"-”Dosyc tego gadania wypier-” *bzzz*"<<endl;
	_getch();
	cout<<"“OUGH KURWA”"<<endl;
	_getch();
	cout<<"*MDLEJE*"<<endl;
	_getch();
	cout<<"-”ahhh no to po prostu kurwa by³o nieuniknione”"<<endl;
	_getch();
	cout<<"“debil nawet nie dal sobie nic wytlumaczyc i wysluchac do konca”"<<endl;
	_getch();
	cout<<"“zabierajcie go na statek, zrobi to co musi czy tego chce czy nie”"<<endl;
	_getch();
	system("cls");
	cout<<"Rok 2019 Statek matka, Uk³ad s³oneczny 249 lat œwietlnych od ziemi godzina 4:20 czasu ziemskiego"<<endl;
	_getch();
	cout<<"3 dni do imprezy urodzinowej"<<endl;
}

int main()
{
	setlocale(LC_CTYPE, "Polish");
	char wybor;
	intro();
	start:
	cin>>wybor;
	switch(wybor)
	{
		case 'y' :
			kibel();
			break;
		case 'n' :
			kuchnia();
			break;
		default :
			goto start;
	}
	alien();
}
