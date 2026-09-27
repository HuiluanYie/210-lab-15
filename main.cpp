// COMSC-210 | Lab 15 | Huiluan Yie

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Movie {
    string screen_writer;
    int year_released;
    string title;

    public:
    // setter
    void set_screen_writer(string s)    { screen_writer = s; }
    void set_year_released(int y)  { year_released = y; }
    void set_title(string t)   { title = t; }

    // getter
    string get_screen_writer()   { return screen_writer; }
    int get_year_released() { return year_released; }
    string get_title()  { return title; }

    // other methods
    void print() {
        cout << "Movie: " << title << endl;
        cout << "\tYear released: " << year_released << endl;
        cout << "\tScreenwriter: " << screen_writer << endl;
    }
};


int main() {
    // declarations
    v

    ifstream fin;
    fin.open("210-lab-15-movie.txt");
    if (fin.good()) {
        while (getline(fin, screen_writer))
        {
            /* code */
        }
        
    }
    else
        cout << "File not found.\n";

    return 0;
}