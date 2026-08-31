#include <iostream>
#include <fstream>

using namespace std;

class Book {
        int id;
        char name[30];
        float price;
    public :
        void input() {
            cout << "Enter your id:";
            cin >> id;
            getchar();
            cout << "Enter your name:";
			cin.getline(name, sizeof(name));
			cout << "Enter book price:";
			cin >> price;
			fstream file;
			file.open("book list.dat", ios::out | ios::app | ios::binary);
			if(file.is_open()) {
				file.write((char*)this, sizeof(*this));
				file.close();
			}
			else
				cout << "book list.dat file not created." << endl;
		}
		void displayBookList() {
			fstream file;
			file.open("book list.dat", ios::in | ios::binary);
			if(file.is_open()) {
				while(file.read((char*)this, sizeof(*this))) {
					cout << this->id << " " << this->name << " " << this->price << endl;
				}
				file.close();
            }
            else
                cout << "book list.dat file not exist." << endl;
        }
};

void manu() {
    int choice;
    Book b1;
    cout << "Enter your chioce.";

    while(true) {
        cout << endl << "1.input book details.";
        cout << endl << "2.display book details list.";
        
        cout << endl << "3.exit." << endl;
		cin >> choice;
		cin.clear();
        switch(choice) {
            case 1:
                b1.input();
                break;
            case 2:
                b1.displayBookList();
                break;
            case 3:
                exit(0);
            default :
                cout << endl << "Invaild choice.";
        }
    }
}

int main() {
    system("clear");
    manu();
    return 0;
}