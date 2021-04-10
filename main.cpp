/**
 * CIS 22B
 * LAB 1 - This program scrapes book title, author, and genre information from
 *         external files and prints the title of each book in alphabetical
 *         order.
 * Lab Group # 21
 * Partner Names: Adel Burieva, Lawrence Jones
 * @date: 2021-04-09
 */

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void getTitlesFromFile(vector<string> &bookTitles);
void printEachFromVector(const vector<string>& vec);

int main() {
    return 0;
}

/**
 * @brief Finds book titles from a file, in the program's directory or user
 * specification via prompt, and stores them each in a vector.
 * @param bookTitles  Vector of strings to store each title found in a file.
 * Results are passed back.
 */
void getTitlesFromFile(vector<string> &bookTitles) {
    ifstream infile;
    string instring, title;
    string filename = "Books.txt";

    infile.open(filename);
    while (!infile.is_open()) {
        cout << "File not found. Please specify file/path: ";
        cin >> filename;
        infile.open(filename);
    }
    while (getline(infile, instring)) {
        stringstream line(instring);
        getline(line, title, ',');
        bookTitles.push_back(title);
    }
    infile.close();
}

void printEachFromVector(const vector<string>& vec) {
}