// Wakacyjny_Projekt_1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//


/* std::cout << char(3);//kier
	cout << endl;
	std::cout << char(4);//karo
	cout << endl;
	std::cout << char(5);//trefle
	cout << endl;
	std::cout << char(6);//piki*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>



using namespace std;


void ZapelnijTalie(int Talia[52]) {





	for (int j = 0; j <= 52; j++) {

		if (j < 13) {
			Talia[j] = 100 + j + 1;
		}
		else if (j >= 13 && j < 26)
		{
			Talia[j] = 200 + j - 13 + 1;
		}
		else if (j >= 26 && j < 39)
		{
			Talia[j] = 300 + j - 26 + 1;
		}
		else if (j >= 39 && j < 52)
		{
			Talia[j] = 400 + j - 39 + 1;
		}




	}



}

void WyswietlStosik(vector <int> Stosik) {

	for (int i = 0; i < Stosik.size(); i++) {

		char znak_koloru = '1';
		char symbol = '1';
		int liczba = 2;
		if (Stosik[i] < 120) {
			znak_koloru = char(6);
			liczba = 100;
		}
		else if (Stosik[i] < 220)
		{
			znak_koloru = char(3);
			liczba = 200;
		}
		else if (Stosik[i] < 320)
		{
			znak_koloru = char(5);
			liczba = 300;
		}
		else
		{
			znak_koloru = char(4);
			liczba = 400;
		}
		liczba = Stosik[i] - liczba;

		if (liczba + 1 == 11) {
			symbol = 'W';
			cout << znak_koloru << symbol << " ";
		}
		else if (liczba + 1 == 12) {
			symbol = 'D';
			cout << znak_koloru << symbol << " ";
		}
		else if (liczba + 1 == 13) {
			symbol = 'K';
			cout << znak_koloru << symbol << " ";
		}
		else if (liczba + 1 == 14) {
			symbol = 'A';
			cout << znak_koloru << symbol << " ";
		}
		else
		{
			cout << znak_koloru << liczba + 1 << " ";
		}


	}




}
void WyswietlKarte(int liczba_wejsciowa) {

	char znak_koloru = '1';
	char symbol = '1';
	int liczba = 2;
	if (liczba_wejsciowa < 120) {
		znak_koloru = char(6);
		liczba = 100;
	}
	else if (liczba_wejsciowa < 220)
	{
		znak_koloru = char(3);
		liczba = 200;
	}
	else if (liczba_wejsciowa < 320)
	{
		znak_koloru = char(5);
		liczba = 300;
	}
	else
	{
		znak_koloru = char(4);
		liczba = 400;
	}
	liczba = liczba_wejsciowa - liczba;

	if (liczba + 1 == 11) {
		symbol = 'W';
		cout << znak_koloru << symbol << " ";
	}
	else if (liczba + 1 == 12) {
		symbol = 'D';
		cout << znak_koloru << symbol << " ";
	}
	else if (liczba + 1 == 13) {
		symbol = 'K';
		cout << znak_koloru << symbol << " ";
	}
	else if (liczba + 1 == 14) {
		symbol = 'A';
		cout << znak_koloru << symbol << " ";
	}
	else
	{
		cout << znak_koloru << liczba + 1 << " ";
	}

}
void WyswietlKartyGraczy(vector<vector<int>> KartyGraczy, int gracz_na_posunieciu) {

	if (KartyGraczy[gracz_na_posunieciu].empty() == false)
	{

		for (int i = 0; i < KartyGraczy[gracz_na_posunieciu].size(); i++) {

			char znak_koloru = '1';
			char symbol = '1';
			int liczba = 2;
			if (KartyGraczy[gracz_na_posunieciu][i] < 120) {
				znak_koloru = char(6);
				liczba = 100;
			}
			else if (KartyGraczy[gracz_na_posunieciu][i] < 220)
			{
				znak_koloru = char(3);
				liczba = 200;
			}
			else if (KartyGraczy[gracz_na_posunieciu][i] < 320)
			{
				znak_koloru = char(5);
				liczba = 300;
			}
			else
			{
				znak_koloru = char(4);
				liczba = 400;
			}
			liczba = KartyGraczy[gracz_na_posunieciu][i] - liczba;

			if (liczba + 1 == 11) {
				symbol = 'W';
				cout << znak_koloru << symbol << " ";
			}
			else if (liczba + 1 == 12) {
				symbol = 'D';
				cout << znak_koloru << symbol << " ";
			}
			else if (liczba + 1 == 13) {
				symbol = 'K';
				cout << znak_koloru << symbol << " ";
			}
			else if (liczba + 1 == 14) {
				symbol = 'A';
				cout << znak_koloru << symbol << " ";
			}
			else
			{
				cout << znak_koloru << liczba + 1 << " ";
			}


		}


	}




}
void WyswietlInterface(int pierwsza_karta, int gracz_na_posunieciu, vector <vector<int>> KartyGraczy) {

	system("cls");
	cout << "Tura Gracza nr:  " << gracz_na_posunieciu + 1 << endl;

	cout << "Karta na gorze:  ";
	WyswietlKarte(pierwsza_karta);
	cout << endl;
	cout << "Pozostali Gracze: \n";
	for (int i = 0; i < KartyGraczy.size(); i++) {

		cout << " Gracz: " << i + 1 << " liczba kart : " << KartyGraczy[i].size() << endl;

	}


	cout << "Twoje Karty: \n";
	WyswietlKartyGraczy(KartyGraczy, gracz_na_posunieciu);
	cout << endl;
	cout << "legenda: quit- wyjscie z programu, play- zagranie ruchu, cheat- oszustwo :(, makao- jesli zostala Ci 1 karta, skip- pomin ture";
	cout << endl;


}



void ReakcjaKompaNaAtak(int& pierwsza_karta, int& gracz_na_posunieciu, int o_karty, int& dodaj_karty, int& czy_byla_funkcyjna, vector<vector<int>>& LiczbaKart, vector<int>& Stosik, int& czworka, int& licznik_czworek, int& zadana) {

	//kiedy jest trójką
	if (o_karty % 100 == 2)
	{


		bool czy_obrona = false;
		for (int z = 0; z < LiczbaKart[gracz_na_posunieciu].size(); z++) {

			if (LiczbaKart[gracz_na_posunieciu][z] % 100 == 2)
				czy_obrona = true;
			if ((LiczbaKart[gracz_na_posunieciu][z] % 100 == 1) && (LiczbaKart[gracz_na_posunieciu][z] / 100 == pierwsza_karta / 100))
				czy_obrona = true;
		}

		if (czy_obrona == false) {



			for (int z = 0; z < dodaj_karty; z++) {

				int x = Stosik.front();
				LiczbaKart[gracz_na_posunieciu].push_back(x);
				Stosik.erase(Stosik.begin());


			}
			dodaj_karty = 0;
			czy_byla_funkcyjna--;
			system("pause");
		}
		else {


			int obrona = 0;
			while (obrona < LiczbaKart[gracz_na_posunieciu].size()) {


				if (LiczbaKart[gracz_na_posunieciu][obrona] % 100 == 2)
				{
					dodaj_karty = dodaj_karty + 3;
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona);
					break;
				}
				else if ((LiczbaKart[gracz_na_posunieciu][obrona] % 100 == 1) && (LiczbaKart[gracz_na_posunieciu][obrona] / 100 == pierwsza_karta / 100)) {

					dodaj_karty = dodaj_karty + 2;
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona);
					break;
				}
				obrona++;

			}



		}



	}

	// kiedy jest dwójką

	else if (o_karty % 100 == 1)
	{


		bool czy_obrona = false;
		for (int z = 0; z < LiczbaKart[gracz_na_posunieciu].size(); z++) {

			if (LiczbaKart[gracz_na_posunieciu][z] % 100 == 1)
				czy_obrona = true;
			if ((LiczbaKart[gracz_na_posunieciu][z] % 100 == 2) && (LiczbaKart[gracz_na_posunieciu][z] / 100 == pierwsza_karta / 100))
				czy_obrona = true;
		}

		if (czy_obrona == false) {



			for (int z = 0; z < dodaj_karty; z++) {

				int x = Stosik.front();
				LiczbaKart[gracz_na_posunieciu].push_back(x);
				Stosik.erase(Stosik.begin());


			}
			dodaj_karty = 0;
			czy_byla_funkcyjna--;
			system("pause");
		}
		else {


			int obrona = 0;
			while (obrona < LiczbaKart[gracz_na_posunieciu].size()) {


				if (LiczbaKart[gracz_na_posunieciu][obrona] % 100 == 1)
				{
					dodaj_karty = dodaj_karty + 3;
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona);
					break;
				}
				else if ((LiczbaKart[gracz_na_posunieciu][obrona] % 100 == 2) && (LiczbaKart[gracz_na_posunieciu][obrona] / 100 == pierwsza_karta / 100)) {

					dodaj_karty = dodaj_karty + 2;
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona);
					break;
				}
				obrona++;

			}



		}



	}

	//kiedy jest czwórką

	else if (o_karty % 100 == 3) {



		bool czy_obrona = false;
		for (int z = 0; z < LiczbaKart[gracz_na_posunieciu].size(); z++) {

			if (LiczbaKart[gracz_na_posunieciu][z] % 100 == 3)
				czy_obrona = true;

		}

		if (czy_obrona == false) {



			czworka = gracz_na_posunieciu;
			czy_byla_funkcyjna = 0;

		}
		else {


			int obrona = 0;
			while (obrona < LiczbaKart[gracz_na_posunieciu].size()) {


				if (LiczbaKart[gracz_na_posunieciu][obrona] % 100 == 3)
				{
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona);
					licznik_czworek++;
					break;
				}

				obrona++;

			}



		}


	}



	//kiedy dama- w kodzie

	// kiedy krol funkcyjny

	else if ((o_karty % 100 == 12) && ((o_karty / 100 == 1) || (o_karty / 100 == 2))) {



		bool czy_obrona = false;
		for (int z = 0; z < LiczbaKart[gracz_na_posunieciu].size(); z++) {

			if (LiczbaKart[gracz_na_posunieciu][z] % 100 == 12)
				czy_obrona = true;

		}

		if (czy_obrona == false) {



			for (int z = 0; z < dodaj_karty; z++) {

				int x = Stosik.front();
				LiczbaKart[gracz_na_posunieciu].push_back(x);
				Stosik.erase(Stosik.begin());


			}
			dodaj_karty = 0;
			czy_byla_funkcyjna--;

		}
		else {


			int obrona = 0;
			while (true) {


				if (LiczbaKart[gracz_na_posunieciu][obrona] % 100 == 212)
				{
					dodaj_karty = dodaj_karty + 5;
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona);
					break;
				}
				else if (LiczbaKart[gracz_na_posunieciu][obrona] % 100 == 12)
				{
					dodaj_karty = 0;
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona);
					czy_byla_funkcyjna--;
					break;
				}

				obrona++;

			}



		}

	}

	//kiedy jest waletem

	else //if (o_karty % 100 == 10)
	{



		bool czy_posiada = false;




		for (int i = 0; i < LiczbaKart[gracz_na_posunieciu].size(); i++) {

			if ((LiczbaKart[gracz_na_posunieciu][i] % 100 == zadana % 100))// || (LiczbaKart[gracz_na_posunieciu][i] % 100 == 10))
				czy_posiada = true;

		}

		if (czy_posiada == true)
		{

			int obrona = 0;
			while (obrona < LiczbaKart[gracz_na_posunieciu].size()) {


				if (LiczbaKart[gracz_na_posunieciu][obrona] % 100 == zadana % 100)
				{
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona);
					czy_byla_funkcyjna--;
					break;
				}


				obrona++;

			}
		}
		else
		{

			int x = Stosik.front();
			LiczbaKart[gracz_na_posunieciu].push_back(x);
			Stosik.erase(Stosik.begin());
			czy_byla_funkcyjna--;

		}


	}


}
void ZagranieFunkcyjneKompa(int o_karty, int& dodaj_karty, int& czy_byla_funkcyjna, int& licznik_czworek) {
	// dwojka
	if (o_karty % 100 == 1) {

		dodaj_karty = dodaj_karty + 2;
		czy_byla_funkcyjna = 1;
	}
	// trójka
	if (o_karty % 100 == 2) {

		dodaj_karty = dodaj_karty + 3;
		czy_byla_funkcyjna = 1;
	}

	//czwórka
	if (o_karty % 100 == 3) {

		czy_byla_funkcyjna = 1;
		licznik_czworek++;
	}
	// król funkcyjny
	if ((o_karty % 100 == 12) && ((o_karty / 100 == 1) || (o_karty / 100 == 2)))
	{

		czy_byla_funkcyjna = 1;
		dodaj_karty = dodaj_karty + 5;


	}

}
void RuchyKomputerowe(int& gracz_na_posunieciu, vector<vector<int>>& KartyGraczy, vector<int>& Stosik, int& pierwsza_karta, int liczba_graczy, int& licznik_czworek, bool& czy_dama, int& zadana, int& kolor, int& dodaj_karty, int& czy_byla_funkcyjna) {

	bool czy_bot_zagral = false;
	int i = 0;
	while (i < KartyGraczy[gracz_na_posunieciu].size()) {

		if ((KartyGraczy[gracz_na_posunieciu][i] % 100 == pierwsza_karta % 100) || (KartyGraczy[gracz_na_posunieciu][i] / 100 == pierwsza_karta / 100))
		{

			Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
			//Stosik.push_back(pierwsza_karta);
			pierwsza_karta = KartyGraczy[gracz_na_posunieciu][i];
			KartyGraczy[gracz_na_posunieciu].erase(KartyGraczy[gracz_na_posunieciu].begin() + i);
			cout << "\n BOT zagral ";
			WyswietlKarte(pierwsza_karta);
			ZagranieFunkcyjneKompa(pierwsza_karta, dodaj_karty, czy_byla_funkcyjna, licznik_czworek);
			czy_bot_zagral = true;

			break;
		}
		i++;

	}
	if (czy_bot_zagral == false) {


		cout << "\n BOT dobral karte ";
		int x = Stosik.front();
		KartyGraczy[gracz_na_posunieciu].push_back(x);
		Stosik.erase(Stosik.begin());

	}


}


void ReakcjaNaKarteFunkcyjna(int& pierwsza_karta, int& gracz_na_posunieciu, int o_karty, int& dodaj_karty, int& czy_byla_funkcyjna, vector<vector<int>>& LiczbaKart, vector<int>& Stosik, int& czworka, int& licznik_czworek, int& zadana) {

	WyswietlInterface(pierwsza_karta, gracz_na_posunieciu, LiczbaKart);

	//kiedy jest trójką
	if (o_karty % 100 == 2)
	{

		cout << "zostales zaatakowany 3 :( :\n";
		bool czy_obrona = false;
		for (int z = 0; z < LiczbaKart[gracz_na_posunieciu].size(); z++) {

			if (LiczbaKart[gracz_na_posunieciu][z] % 100 == 2)
				czy_obrona = true;
			if ((LiczbaKart[gracz_na_posunieciu][z] % 100 == 1) && (LiczbaKart[gracz_na_posunieciu][z] / 100 == pierwsza_karta / 100))
				czy_obrona = true;
		}

		if (czy_obrona == false) {

			cout << "nie mozesz sie bronic!!!, kliknij dowolny przycisk by kontynuowac";

			for (int z = 0; z < dodaj_karty; z++) {

				int x = Stosik.front();
				LiczbaKart[gracz_na_posunieciu].push_back(x);
				Stosik.erase(Stosik.begin());


			}
			dodaj_karty = 0;
			czy_byla_funkcyjna--;
			system("pause");
		}
		else {

			cout << "\n mozesz sie bronic!!! Wybierz karte do obrony";
			int obrona;
			while (true) {

				cin >> obrona;
				if (LiczbaKart[gracz_na_posunieciu][obrona - 1] % 100 == 2)
				{
					dodaj_karty = dodaj_karty + 3;
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona - 1];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona - 1);
					break;
				}
				else if ((LiczbaKart[gracz_na_posunieciu][obrona - 1] % 100 == 1) && (LiczbaKart[gracz_na_posunieciu][obrona - 1] / 100 == pierwsza_karta / 100)) {

					dodaj_karty = dodaj_karty + 2;
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona - 1];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona - 1);
					break;
				}
				cout << "\nzla karta, proboj ponownie!";

			}



		}



	}

	// kiedy jest dwójką

	else if (o_karty % 100 == 1)
	{

		cout << "zostales zaatakowany 2 :( :\n";
		bool czy_obrona = false;
		for (int z = 0; z < LiczbaKart[gracz_na_posunieciu].size(); z++) {

			if (LiczbaKart[gracz_na_posunieciu][z] % 100 == 1)
				czy_obrona = true;
			if ((LiczbaKart[gracz_na_posunieciu][z] % 100 == 2) && (LiczbaKart[gracz_na_posunieciu][z] / 100 == pierwsza_karta / 100))
				czy_obrona = true;
		}

		if (czy_obrona == false) {

			cout << "nie mozesz sie bronic!!!, kliknij dowolny przycisk by kontynuowac";

			for (int z = 0; z < dodaj_karty; z++) {

				int x = Stosik.front();
				LiczbaKart[gracz_na_posunieciu].push_back(x);
				Stosik.erase(Stosik.begin());


			}
			dodaj_karty = 0;
			czy_byla_funkcyjna--;
			system("pause");
		}
		else {

			cout << "\n mozesz sie bronic!!! Wybierz karte do obrony";
			int obrona;
			while (true) {

				cin >> obrona;
				if (LiczbaKart[gracz_na_posunieciu][obrona - 1] % 100 == 1)
				{
					dodaj_karty = dodaj_karty + 2;
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona - 1];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona - 1);
					break;
				}
				else if ((LiczbaKart[gracz_na_posunieciu][obrona - 1] % 100 == 2) && (LiczbaKart[gracz_na_posunieciu][obrona - 1] / 100 == pierwsza_karta / 100)) {

					dodaj_karty = dodaj_karty + 3;
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona - 1];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona - 1);
					break;
				}
				cout << "\nzla karta, proboj ponownie!";

			}



		}



	}

	//kiedy jest czwórką

	else if (o_karty % 100 == 3) {


		cout << "\nzostales zablokowany na " << licznik_czworek << " kolejek\n";
		bool czy_obrona = false;
		for (int z = 0; z < LiczbaKart[gracz_na_posunieciu].size(); z++) {

			if (LiczbaKart[gracz_na_posunieciu][z] % 100 == 3)
				czy_obrona = true;

		}

		if (czy_obrona == false) {

			cout << "\nnie mozesz sie bronic!!!, pauzujesz";

			czworka = gracz_na_posunieciu;
			czy_byla_funkcyjna = 0;
			system("pause");
		}
		else {

			cout << "\n mozesz sie bronic!!! Wybierz karte do obrony";
			int obrona;
			while (true) {

				cin >> obrona;
				if (LiczbaKart[gracz_na_posunieciu][obrona - 1] % 100 == 3)
				{
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona - 1];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona - 1);
					licznik_czworek++;
					break;
				}

				cout << "\nzla karta, proboj ponownie!";

			}



		}


	}



	//kiedy dama- w kodzie

	// kiedy krol funkcyjny

	else if ((o_karty % 100 == 12) && ((o_karty / 100 == 1) || (o_karty / 100 == 2))) {


		cout << "zostales zaatakowany krolem :( :\n";
		bool czy_obrona = false;
		for (int z = 0; z < LiczbaKart[gracz_na_posunieciu].size(); z++) {

			if (LiczbaKart[gracz_na_posunieciu][z] % 100 == 12)
				czy_obrona = true;

		}

		if (czy_obrona == false) {

			cout << "nie mozesz sie bronic!!!, kliknij dowolny przycisk by kontynuowac";

			for (int z = 0; z < dodaj_karty; z++) {

				int x = Stosik.front();
				LiczbaKart[gracz_na_posunieciu].push_back(x);
				Stosik.erase(Stosik.begin());


			}
			dodaj_karty = 0;
			czy_byla_funkcyjna--;
			system("pause");
		}
		else {

			cout << "\n mozesz sie bronic!!! Wybierz karte do obrony";
			int obrona;
			while (true) {

				cin >> obrona;
				if (LiczbaKart[gracz_na_posunieciu][obrona - 1] % 100 == 212)
				{
					dodaj_karty = dodaj_karty + 5;
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona - 1];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona - 1);
					break;
				}
				else if (LiczbaKart[gracz_na_posunieciu][obrona - 1] % 100 == 12)
				{
					dodaj_karty = 0;
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona - 1];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona - 1);
					czy_byla_funkcyjna--;
					break;
				}

				cout << "\nzla karta, proboj ponownie!";

			}



		}

	}

	else if (o_karty % 100 == 12)
	{


	}
	//kiedy as

	//kiedy jest waletem

	else // (o_karty % 100 == 10)
	{

		cout << "zadana karta to: " << zadana % 100 + 1;

		bool czy_posiada = false;




		for (int i = 0; i < LiczbaKart[gracz_na_posunieciu].size(); i++) {

			if ((LiczbaKart[gracz_na_posunieciu][i] % 100 == zadana % 100) || (LiczbaKart[gracz_na_posunieciu][i] % 100 == 10))
				czy_posiada = true;

		}

		if (czy_posiada == true)
		{
			cout << "\n mozesz sie obronic, wyrzuc karte!!!";
			int obrona;
			while (true) {

				cin >> obrona;
				if (LiczbaKart[gracz_na_posunieciu][obrona - 1] % 100 == zadana % 100)
				{
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona - 1];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona - 1);
					czy_byla_funkcyjna--;
					break;
				}
				else if (LiczbaKart[gracz_na_posunieciu][obrona - 1] % 100 == 10) {
					zadana = 0;
					Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
					pierwsza_karta = LiczbaKart[gracz_na_posunieciu][obrona - 1];
					LiczbaKart[gracz_na_posunieciu].erase(LiczbaKart[gracz_na_posunieciu].begin() + obrona - 1);
					cout << "\n podaj swoje zadanie: (0-nic) ";
					cin >> zadana;
					while (true) {
						if (zadana == 0)
						{

							czy_byla_funkcyjna = 0;

							break;
						}
						else if ((zadana < LiczbaKart[gracz_na_posunieciu].size()) && LiczbaKart[gracz_na_posunieciu][zadana - 1] % 100 != 1 && LiczbaKart[gracz_na_posunieciu][zadana - 1] % 100 != 2 && LiczbaKart[gracz_na_posunieciu][zadana - 1] % 100 != 3 && LiczbaKart[gracz_na_posunieciu][zadana - 1] % 100 != 10 && LiczbaKart[gracz_na_posunieciu][zadana - 1] % 100 != 11 && LiczbaKart[gracz_na_posunieciu][zadana - 1] % 100 != 12 && LiczbaKart[gracz_na_posunieciu][zadana - 1] % 100 != 13)
						{
							zadana == LiczbaKart[gracz_na_posunieciu][zadana - 1];
							czy_byla_funkcyjna = 4;
							break;
						}


						cout << "\n zla karta, podaj ponownie :( ";
						cin >> zadana;
					}

					break;
				}

				cout << "\nzla karta, proboj ponownie!";

			}
		}
		else
		{
			cout << "\n NIE mozesz sie obronic, dobierasz karte!!!";
			int x = Stosik.front();
			LiczbaKart[gracz_na_posunieciu].push_back(x);
			Stosik.erase(Stosik.begin());
			czy_byla_funkcyjna--;
			system("pause");
		}


	}

}
void ZagranieKartyFunkcyjnej(int o_karty, int& dodaj_karty, int& czy_byla_funkcyjna, int liczba_graczy, int& licznik_czworek, bool& czy_dama, vector<vector<int>> KartyGraczy, int& gracz_na_posunieciu, int& zadana, int& kolor) {

	// dwojka
	if (o_karty % 100 == 1) {

		dodaj_karty = dodaj_karty + 2;
		czy_byla_funkcyjna = 1;
	}
	// trójka
	if (o_karty % 100 == 2) {

		dodaj_karty = dodaj_karty + 3;
		czy_byla_funkcyjna = 1;
	}

	//czwórka
	if (o_karty % 100 == 3) {

		czy_byla_funkcyjna = 1;
		licznik_czworek++;
	}

	//walet

	if (o_karty % 100 == 10) {

		czy_byla_funkcyjna = 4;
		cout << "\n podaj jakiej karty zadasz: (0=niczego)";
		cin >> zadana;
		if (zadana == 0) {
			czy_byla_funkcyjna = 0;
		}
		else
		{
			while (true) {

				if ((zadana <= KartyGraczy[gracz_na_posunieciu].size()) && KartyGraczy[gracz_na_posunieciu][zadana - 1] % 100 != 1 && KartyGraczy[gracz_na_posunieciu][zadana - 1] % 100 != 2 && KartyGraczy[gracz_na_posunieciu][zadana - 1] % 100 != 3 && KartyGraczy[gracz_na_posunieciu][zadana - 1] % 100 != 10 && KartyGraczy[gracz_na_posunieciu][zadana - 1] % 100 != 11 && KartyGraczy[gracz_na_posunieciu][zadana - 1] % 100 != 12 && KartyGraczy[gracz_na_posunieciu][zadana - 1] % 100 != 13)
					break;
				cout << "\n zla karta, podaj ponownie :( ";
				cin >> zadana;
			}
			zadana = KartyGraczy[gracz_na_posunieciu][zadana - 1];

		}

	}

	//dama- w kodzie nizej

	// król funkcyjny
	if ((o_karty % 100 == 12) && ((o_karty / 100 == 1) || (o_karty / 100 == 2)))
	{

		czy_byla_funkcyjna = 1;
		dodaj_karty = dodaj_karty + 5;


	}

	//as
	if (o_karty % 100 == 13) {

		cout << "\n wybierz kolor, na jaki chcesz zmienic: 1- pik, 2-kiery, 3- trefle, 4- karo";


		while (true) {

			cin >> kolor;
			if (kolor > 0 && kolor < 5)
				break;
			cout << "\n bledny kolor, wybierz ponownie ";

		}

	}


}





void ZagranieKarty(int& gracz_na_posunieciu, vector<vector<int>>& KartyGraczy, vector<int>& Stosik, int& pierwsza_karta, bool& czy_byl_ruch, bool& ostatnia_karta, int& dobierane, int& karta_funkcyjna, int liczba_graczy, int& licznik_czworek, bool& czy_dama, int& zadana, int& kolor) {

	//bool czy_ostatnia = false;
	bool dorzuc_karte = false;

	int pierwsza_karta_tymczasowa = pierwsza_karta;
	if (kolor != 0)
	{
		cout << "\n kolor zostal zmieniony na: ";
		if (kolor == 1)
		{
			cout << char(6);
		}
		else if (kolor == 2)
		{
			cout << char(3);
		}
		else if (kolor == 3)
		{
			cout << char(5);
		}
		else if (kolor == 4)
		{
			cout << char(4);
		}

		pierwsza_karta_tymczasowa = pierwsza_karta % 100 + kolor * 100;
		kolor = 0;
	}



	if (czy_dama == true) {

		cout << "\n zagraj dowolna karte: ";
		int ruch;
		cin >> ruch;
		while (true) {

			if ((ruch - 1) <= KartyGraczy[gracz_na_posunieciu].size())
				break;
			cout << "\nzly numer, podaj inny: (0- koniec tury)";
			cin >> ruch;
		}
		Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
		//Stosik.push_back(pierwsza_karta);
		pierwsza_karta = KartyGraczy[gracz_na_posunieciu][ruch - 1];
		KartyGraczy[gracz_na_posunieciu].erase(KartyGraczy[gracz_na_posunieciu].begin() + ruch - 1);
		WyswietlInterface(pierwsza_karta, gracz_na_posunieciu, KartyGraczy);
		czy_byl_ruch = true;
		dorzuc_karte = true;
		czy_dama = false;
		ZagranieKartyFunkcyjnej(pierwsza_karta, dobierane, karta_funkcyjna, liczba_graczy, licznik_czworek, czy_dama, KartyGraczy, gracz_na_posunieciu, zadana, kolor);
		//break;

	}
	else
	{
		while (true)

		{

			pierwsza_karta_tymczasowa = pierwsza_karta;
			int ruch;
			cout << "\nPodaj Karte, ktora chcesz zagrac: (0- koniec tury)";
			cin >> ruch;
			if (ruch == 0) {

				break;
			}
			while (true) {

				if ((ruch - 1) <= KartyGraczy[gracz_na_posunieciu].size())
					break;
				cout << "\nzly numer, podaj inny: (0- koniec tury)";
				cin >> ruch;
			}





			int tymczasowy = KartyGraczy[gracz_na_posunieciu][ruch - 1];
			if (tymczasowy % 100 == 11 && czy_byl_ruch == false) { //warunek damy

				czy_dama = true;
				Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
				//Stosik.push_back(pierwsza_karta);
				pierwsza_karta = KartyGraczy[gracz_na_posunieciu][ruch - 1];
				KartyGraczy[gracz_na_posunieciu].erase(KartyGraczy[gracz_na_posunieciu].begin() + ruch - 1);
				WyswietlInterface(pierwsza_karta, gracz_na_posunieciu, KartyGraczy);
				czy_byl_ruch = true;
				dorzuc_karte = true;
				ZagranieKartyFunkcyjnej(pierwsza_karta, dobierane, karta_funkcyjna, liczba_graczy, licznik_czworek, czy_dama, KartyGraczy, gracz_na_posunieciu, zadana, kolor);


			}
			else if (((tymczasowy / 100) == (pierwsza_karta_tymczasowa / 100)) && dorzuc_karte == false)
			{

				Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
				//Stosik.push_back(pierwsza_karta);
				pierwsza_karta = KartyGraczy[gracz_na_posunieciu][ruch - 1];
				KartyGraczy[gracz_na_posunieciu].erase(KartyGraczy[gracz_na_posunieciu].begin() + ruch - 1);
				WyswietlInterface(pierwsza_karta, gracz_na_posunieciu, KartyGraczy);
				czy_byl_ruch = true;
				dorzuc_karte = true;
				ZagranieKartyFunkcyjnej(pierwsza_karta, dobierane, karta_funkcyjna, liczba_graczy, licznik_czworek, czy_dama, KartyGraczy, gracz_na_posunieciu, zadana, kolor);
				//break;
			}
			else if ((tymczasowy % 100) == (pierwsza_karta_tymczasowa % 100))
			{
				Stosik.insert(Stosik.begin() + (rand() % Stosik.size()), pierwsza_karta);
				//Stosik.push_back(pierwsza_karta);
				pierwsza_karta = KartyGraczy[gracz_na_posunieciu][ruch - 1];
				KartyGraczy[gracz_na_posunieciu].erase(KartyGraczy[gracz_na_posunieciu].begin() + ruch - 1);
				WyswietlInterface(pierwsza_karta, gracz_na_posunieciu, KartyGraczy);
				czy_byl_ruch = true;
				dorzuc_karte = true;
				ZagranieKartyFunkcyjnej(pierwsza_karta, dobierane, karta_funkcyjna, liczba_graczy, licznik_czworek, czy_dama, KartyGraczy, gracz_na_posunieciu, zadana, kolor);
				//break;
			}


			else
			{
				cout << "ruch niemozliwy, sprobuj ponownie\n";

			}

		}

	}


	if (KartyGraczy[gracz_na_posunieciu].size() == 1)
	{
		ostatnia_karta = true;
	}












}
void RuchGracza(int& gracz_na_posunieciu, vector<vector<int>>& KartyGraczy, vector<int>& Stosik, int& pierwsza_karta, int& dobierane, int& karta_funkcyjna, int liczba_graczy, int& licznik_czworek, bool& czy_dama, int& zadana, int& kolor) {

	bool czy_byl_ruch = false;
	bool czy_ostatnia_karta = false;
	bool czy_zagrano = false;


	WyswietlInterface(pierwsza_karta, gracz_na_posunieciu, KartyGraczy);



	while (true) {

		string decyzja;
		cin >> decyzja;
		if (decyzja == "quit") {
			exit(1);
			break;
		}
		else if ((decyzja == "play") && (czy_zagrano == false)) {


			ZagranieKarty(gracz_na_posunieciu, KartyGraczy, Stosik, pierwsza_karta, czy_byl_ruch, czy_ostatnia_karta, dobierane, karta_funkcyjna, liczba_graczy, licznik_czworek, czy_dama, zadana, kolor);
			czy_zagrano = true;

		}
		else if (decyzja == "cheat") {

			int liczor = 0;
			for (int i = 0; i < KartyGraczy.size(); i++) {

				cout << "gracz: " << i + 1 << " :";
				WyswietlKartyGraczy(KartyGraczy, i);
				cout << endl;
			}

			for (int z = 0; z < KartyGraczy.size(); z++) {
				for (int j = 0; j < KartyGraczy[z].size(); j++) {
					liczor++;
				}
			}

			cout << "\nkarty na stosie: ";
			WyswietlStosik(Stosik);
			cout << "\nliczba kart w stosie: " << Stosik.size();
			cout << "\nliczba kart lacznie: " << liczor + Stosik.size() + 1;
			liczor = 0;
		}
		else if (decyzja == "makao") {
			czy_ostatnia_karta = false;

		}
		else if (decyzja == "skip") {

			if (czy_byl_ruch == false)
			{
				int x = Stosik.front();
				KartyGraczy[gracz_na_posunieciu].push_back(x);
				Stosik.erase(Stosik.begin());

			}

			break;

		}
		else
		{
			cout << "blad!!! Sproboj ponownie\n";
		}

	}

	if (czy_ostatnia_karta == true)
	{
		for (int z = 0; z < 5; z++) {

			int x = Stosik.front();
			KartyGraczy[gracz_na_posunieciu].push_back(x);
			Stosik.erase(Stosik.begin());

		}

	}




}


void RozpocznijGre(int TaliaKart[], vector<int>& Stosik, int& liczba_graczy, vector<vector<int>>& KartyGraczy, int liczba_kart_gracza, int& liczba_graczy_ludzkich) {

	system("cls");

	for (int z = 0; z < liczba_graczy; z++) {

		KartyGraczy.push_back(vector<int>());
	}



	ZapelnijTalie(TaliaKart);


	srand(time(NULL));
	for (int i = 0; i < 52; i++) {

		int n;
		while (true)
		{
			n = rand() % 52;
			if (TaliaKart[n] != 0)
				break;
		}

		Stosik.push_back(TaliaKart[n]);
		TaliaKart[n] = 0;

	}



	for (int z = 0; z < KartyGraczy.size(); z++) {

		for (int i = 0; i < liczba_kart_gracza; i++) {

			KartyGraczy[z].push_back(Stosik.front());
			Stosik.erase(Stosik.begin());

		}


	}
	cout << endl;

	// WyswietlKartyGraczy(KartyGraczy,);



	int gracz_na_posunieciu = 0;
	int dobierane_karty = 0;
	int czy_byla_funkcyjna = 0;
	int czworka = -1;
	int licznik_czworek = 0;
	int zadana = 0;
	int kolor = 0;

	bool czy_dama = false;
	bool czy_cofnieto = false;

	int l_g_l = liczba_graczy_ludzkich;
	int l_g_k = liczba_graczy - liczba_graczy_ludzkich; // liczba graczy komputerowych

	int pierwsza_karta = Stosik.front();
	Stosik.erase(Stosik.begin());

	while (true) {


		if (l_g_l > 0) {

			if (gracz_na_posunieciu > KartyGraczy.size() - 1)
			{
				gracz_na_posunieciu = 0;
			}
			if (pierwsza_karta == 112 && czy_byla_funkcyjna != 0) {

				gracz_na_posunieciu = gracz_na_posunieciu - 2;
				if (gracz_na_posunieciu < 0)
					gracz_na_posunieciu = 3;
				czy_cofnieto = true;
			}

			//dzialanie czwórki
			if (czworka == gracz_na_posunieciu) {

				licznik_czworek--;
				if (licznik_czworek == 0)
				{
					czworka = -1;
				}
			}
			else
			{
				if (czy_byla_funkcyjna != 0) {

					ReakcjaNaKarteFunkcyjna(pierwsza_karta, gracz_na_posunieciu, pierwsza_karta, dobierane_karty, czy_byla_funkcyjna, KartyGraczy, Stosik, czworka, licznik_czworek, zadana);
				}
				else
				{
					RuchGracza(gracz_na_posunieciu, KartyGraczy, Stosik, pierwsza_karta, dobierane_karty, czy_byla_funkcyjna, liczba_graczy, licznik_czworek, czy_dama, zadana, kolor);
				}

			}



			// usuniecie wygranego
			if (KartyGraczy[gracz_na_posunieciu].empty() == true)
			{
				KartyGraczy.erase(KartyGraczy.begin() + gracz_na_posunieciu);
				liczba_graczy--;

			}





			if (KartyGraczy.size() == 1)
			{
				cout << "Koniec gry!!! dziekuje za uwage !!!";
				system("pause");
				break;
			}
			gracz_na_posunieciu++;
			l_g_l--;
		}
		else if (l_g_k > 0)
		{
			if (gracz_na_posunieciu > KartyGraczy.size() - 1)
			{
				gracz_na_posunieciu = 0;
			}
			if (pierwsza_karta == 112 && czy_byla_funkcyjna != 0) {

				gracz_na_posunieciu = gracz_na_posunieciu - 2;
				if (gracz_na_posunieciu < 0)
					gracz_na_posunieciu = 3;
				czy_cofnieto = true;
			}
			if (czworka == gracz_na_posunieciu) {

				licznik_czworek--;
				if (licznik_czworek == 0)
				{
					czworka = -1;
				}
			}
			else
			{
				if (czy_byla_funkcyjna != 0) {

					ReakcjaKompaNaAtak(pierwsza_karta, gracz_na_posunieciu, pierwsza_karta, dobierane_karty, czy_byla_funkcyjna, KartyGraczy, Stosik, czworka, licznik_czworek, zadana);
				}
				else
				{
					RuchyKomputerowe(gracz_na_posunieciu, KartyGraczy, Stosik, pierwsza_karta, liczba_graczy, licznik_czworek, czy_dama, zadana, kolor, dobierane_karty, czy_byla_funkcyjna);
				}
				system("pause");
			}

			// usuniecie wygranego
			if (KartyGraczy[gracz_na_posunieciu].empty() == true)
			{
				KartyGraczy.erase(KartyGraczy.begin() + gracz_na_posunieciu);
				liczba_graczy--;

			}





			if (KartyGraczy.size() == 1)
			{
				cout << "Koniec gry!!! dziekuje za uwage !!!";
				system("pause");
				break;
			}

			gracz_na_posunieciu++;
			l_g_k--;
		}
		else
		{
			l_g_l = liczba_graczy_ludzkich;
			l_g_k = liczba_graczy - liczba_graczy_ludzkich;
		}

	}




}




void WyswietlMenu() {

	system("cls");
	cout << char(218);
	for (int z = 0; z < 80; z++) {

		cout << char(196);
	}
	cout << char(191);
	cout << endl;
	cout << char(179);
	for (int z = 0; z < 25; z++) {

		cout << " ";
	}
	cout << "1- Rozpocznij Gre";
	for (int z = 0; z < 38; z++) {

		cout << " ";
	}
	cout << char(179);
	cout << endl;
	cout << char(179);

	for (int z = 0; z < 80; z++) {

		cout << " ";
	}
	cout << char(179);

	cout << endl;
	cout << char(179);
	for (int z = 0; z < 25; z++) {

		cout << " ";
	}
	cout << "2- Wyswietl Opcje";
	for (int z = 0; z < 38; z++) {

		cout << " ";
	}
	cout << char(179);
	cout << endl;
	cout << char(192);
	for (int z = 0; z < 80; z++) {

		cout << char(196);
	}
	cout << char(217);
	cout << endl;
}
void WybierzOpcje(int& liczba_graczy, int& liczba_kart_gracza, int& liczba_graczy_ludzkich) {

	system("cls");
	cout << "\n podaj liczbe graczy (min 2, max 4), domyslnie 4: ";
	while (true)
	{
		cin >> liczba_graczy;
		if (liczba_graczy > 1 && liczba_graczy < 5)
			break;
		cout << " sprobuj jeszcze raz!!!";
	}

	cout << "\n podaj liczbe graczy zywych (min 1, max 4), domyslnie wszyscy: ";
	while (true)
	{
		cin >> liczba_graczy_ludzkich;
		if (liczba_graczy_ludzkich > 0 && liczba_graczy_ludzkich < 5)
			break;
		cout << " sprobuj jeszcze raz!!!";
	}

	cout << "\n podaj liczbe kart graczy: (2-10), domyslnie 5 ";
	while (true)
	{
		cin >> liczba_kart_gracza;
		if (liczba_kart_gracza > 1 && liczba_kart_gracza < 11)
			break;
		cout << " sprobuj jeszcze raz!!!";
	}





}
void WybierzMenu(int TaliaKart[], vector<int>& Stosik, int& liczba_graczy, vector<vector<int>>& KartyGraczy, int& liczba_kart_gracza, int& liczba_graczy_ludzkich) {


	while (true)
	{
		WyswietlMenu();
		int n;
		cin >> n;
		while (n != 1 && n != 2)
		{
			cout << " prosze o zmiane swojego typu, ten jest nieprawidlowy!!!!\n";
			cin >> n;

		}

		switch (n)
		{
		case 1:
			RozpocznijGre(TaliaKart, Stosik, liczba_graczy, KartyGraczy, liczba_kart_gracza, liczba_graczy_ludzkich);
			break;
		case 2:
			WybierzOpcje(liczba_graczy, liczba_kart_gracza, liczba_graczy_ludzkich);
			break;
		default:
			break;
		}

	}




}



int main()
{

	int TaliaKart[52]; //kolejność: kolory: Pik, Kiery, Trefle, Karo, typ karty: 2,3,4,5,6,7,8,9,10, W, D, K, A np. 201- 2 kier, 202- 3 kier
	vector<int> Stosik;
	vector<vector<int>> KartyGraczy;
	int liczba_graczy = 4;
	int liczba_kart_gracza = 5;
	int liczba_graczy_ludzkich = 4;






	WybierzMenu(TaliaKart, Stosik, liczba_graczy, KartyGraczy, liczba_kart_gracza, liczba_graczy_ludzkich);



	//RozpocznijGre(TaliaKart, Stosik, liczba_graczy, KartyGraczy, liczba_kart_gracza);








}

