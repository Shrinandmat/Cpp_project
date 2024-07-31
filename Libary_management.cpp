#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class Library {
public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};

int main() {
    Library lib[20];
    int input = 0;
    int count = 0;

    while (input != 3) {
        cout << "Enter 1 to input details like id, name, author, student, price, pages" << endl;
        cout << "Enter 2 to display details" << endl;
        cout << "Enter 3 to exit" << endl;
        cin >> input;

        switch (input) {
            case 1:
                if (count < 5) {
                    cout << "Enter Book Id: ";
                    cin >> lib[count].id;
                    cin.ignore();  // To clear the newline character from the buffer
                    cout << "Enter Book Name: ";
                    cin.getline(lib[count].name, 100 ,'$');
                    cout << "Enter Author Name: ";
                    cin.getline(lib[count].author, 100 , '$');
                    cout << "Enter Student Name: ";
                    cin.getline(lib[count].student, 100 , '$');
                    cout << "Enter Book Price: ";
                    cin >> lib[count].price;
                    cout << "Enter Book Pages: ";
                    cin >> lib[count].pages;
                    cin.ignore();  // Clear the newline character again
                    count++;
                } else {
                    cout << "Library is full. Cannot add more books." << endl;
                }
                break;

            case 2:
                for (int i = 0; i < count; i++) {
                    cout << "Book Id: " << lib[i].id << endl;
                    cout << "Book Name: " << lib[i].name << endl;
                    cout << "Book Author: " << lib[i].author << endl;
                    cout << "Book Student: " << lib[i].student << endl;
                    cout << "Book Price: " << lib[i].price << endl;
                    cout << "Book Pages: " << lib[i].pages << endl;
                    cout << "----------------------" << endl;
                }
                break;

            case 3:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "You have entered a wrong value, please try again." << endl;
        }
    }

    return 0;
}
