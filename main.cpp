// COMSC-210 | Lab 15 | Huiluan Yie

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Movie {
private:
    string screen_writer;
    string year_released;
    string title;

public:
    // setter
    void set_screen_writer(string s) {
        screen_writer = s;
    }
    void set_year_released(string y) {
        year_released = y;
    }
    void set_title(string t) {
        title = t;
    }

    // getter
    string get_screen_writer() {
        return screen_writer;
    }
    string get_year_released() {
        return year_released;
    }
    string get_title() {
        return title;
    }

    // other methods
    void print() {
        cout << "\nMovie: " << title << endl;
        cout << "\tYear released: " << year_released << endl;
        cout << "\tScreenwriter: " << screen_writer << endl;
    }
};

int main() {
    // declarations
    vector < Movie > movies;
    string sw;
    string yr;
    string t;
    Movie temp_m;

    // file input
    ifstream fin;
    fin.open("210-lab-15-movie.txt");
    if (fin.good()) {
        while (getline(fin, t)) {
            temp_m.set_title(t);
            getline(fin, yr);
            temp_m.set_year_released(yr);
            getline(fin, sw);
            temp_m.set_screen_writer(sw);
            movies.push_back(temp_m);
        }

        // output
        for (Movie m: movies) {
            m.print();
        }
    } else
        cout << "File not found.\n";

    return 0;
}