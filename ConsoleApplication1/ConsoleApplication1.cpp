struct osoba {
    string imie;
    string nazwisko;
    int wiek;
    osoba* nastepna; // wskaźnik na następny element
    osoba(); // konstruktor
};

osoba::osoba() {
    nastepna = 0; // konstruktor
}

struct lista {
    osoba* pierwsza; // wskaźnik na początek listy
    void dodaj_osobe(string imie, string nazwisko, int wiek);
    void usun_osobe(int nr);
    void wyswietl_liste();
    lista();
};

lista::lista() {
    pierwsza = 0; // konstruktor
}