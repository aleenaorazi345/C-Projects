#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registerUser() {
    string username, password;

    cout << "Enter username: ";
    cin >> username;

    // Check if the file with the username already exists
    ifstream checkFile(username + ".txt");
    if (checkFile.is_open()) {
        cout << "Username already exists. Please choose a different username." << endl;
        checkFile.close();
        return;
    }

    cout << "Enter password: ";
    cin >> password;

    // Create a file with the username and store the password
    ofstream userFile(username + ".txt");
    if (userFile.is_open()) {
        userFile << password;
        userFile.close();
        cout << "Registration successful!" << endl;
    }
    else {
        cout << "Unable to open file for writing!" << endl;
    }
}

bool loginUser() {
    string username, password, storedPassword;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Open the file with the username and check the password
    ifstream userFile(username + ".txt");
    if (userFile.is_open()) {
        getline(userFile, storedPassword);
        userFile.close();
        if (password == storedPassword) {
            cout << "Login successful!" << endl;
            return true;
        }
        else {
            cout << "Incorrect password!" << endl;
        }
    }
    else {
        cout << "Username not found!" << endl;
    }
    return false;
}

int main() {
    int choice;
    while (true) {
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            registerUser();
            break;
        case 2:
            loginUser();
            break;
        case 3:
            return 0;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
