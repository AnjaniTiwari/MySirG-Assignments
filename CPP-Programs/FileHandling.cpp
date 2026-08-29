#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

void change() {
	fstream file;
	fstream file2;
	char ch;
	file.open("abc.text", ios::in);
	file2.open("abc2.text", ios::out);
	if(file.is_open() && file2.is_open()) {
        file.seekg(0, ios::beg);
        file.seekg(27);
		while(file.get(ch)) {
			file2.put(ch);
		}
		file.close();
		file2.close();
		file.open("abc.text", ios::out);
		file2.open("abc2.text", ios::in);
		if(file.is_open()) {
			file2.seekg(0, ios::beg);
			file.seekg(0, ios::beg);
			while(file2.get(ch)) {
				file.put(ch);
			}
			file2.close();
			remove("abc2.text");
            file.seekp(0, ios::beg);
            file.seekp(11);
            file.put('M');
            file.seekp(13);
            file.put('S');
            file.seekp(16);
            file.put('G');
            file.close();
        }
    }
}
void writing() {
    ofstream fout;
    char str[] = "My first file handling program.";
    fout.open("abc.text", ios::out);
    if(fout.is_open()) {
        fout.seekp(0, ios::beg);
        fout.seekp(11);
        // cout << fout.tellp() << " ------ " << endl;
        fout.put('M');
        fout.seekp(13);
        fout.put('S');
        fout.seekp(16);
        fout.put('G');
        // fout << str;
        //fout.write(str, sizeof(str));
        fout.close();
    }
}

void append() {
	ofstream fout;
    fout.open("abc.text", ios::app);
    if(fout.is_open()) {
        fout << "Welcome to mysirg course." << endl;
        fout.close();
    }
}
void reading() {
    ifstream fin;
    // char str[50];
    char ch;
    fin.open("abc.text", ios::in);
    if(fin.is_open()) {
        // fin.read(str, sizeof(str));
        // fin >> str;
        // fin.getline(str, 50);
        while(fin.get(ch)) 
            cout << ch;
        // cout << fin.gcount();
        fin.close();
    }
}

int main() {
    system("clear");
//	 append();
	// writing();
    change();
    reading();
    cout << endl;
    return 0;
}

