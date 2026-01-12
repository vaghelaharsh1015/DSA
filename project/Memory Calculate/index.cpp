// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// // Template class to handle student data flexibly
// template <typename T>
// class Student {
// public:
//     T id;
//     string name;

//     // Constructor to initialize student details
//     Student(T i, string n) {
//         id = i;
//         name = n;
//     }

//     // Function to print student info
//     void display() {
//         cout << "ID: " << id << " | Name: " << name << endl;
//     }
// };

// int main() {
//     // Vector container to store student objects
//     vector<Student<int>> students;
//     int choice, id;
//     string name;

//     while (true) {
//         cout << "\n--- Student Management System ---" << endl;
//         cout << "1. Add Student" << endl;
//         cout << "2. Display All" << endl;
//         cout << "3. Remove Student" << endl;
//         cout << "4. Search Student" << endl;
//         cout << "0. Exit" << endl;
//         cout << "Enter Choice: ";
//         cin >> choice;

//         // Exit condition
//         if (choice == 0) break;

//         if (choice == 1) {
//             // Adding a new student
//             cout << "Enter ID: ";
//             cin >> id;
//             cout << "Enter Name: ";
//             cin >> name;
//             students.push_back(Student<int>(id, name));
//             cout << "Student Added!" << endl;
//         } 
//         else if (choice == 2) {
//             // Showing all students in the list
//             cout << "\nDisplaying All Students:" << endl;
//             for (auto &s : students) {
//                 s.display();
//             }
//         } 
//         else if (choice == 3) {
//             // Deleting a student by searching their ID
//             cout << "Enter ID to remove: ";
//             cin >> id;
//             for (auto it = students.begin(); it != students.end(); ++it) {
//                 if (it->id == id) {
//                     students.erase(it);
//                     cout << "Student Removed Successfully." << endl;
//                     break;
//                 }
//             }
//         } 
//         else if (choice == 4) {
//             // Searching for a specific student
//             cout << "Enter ID to search: ";
//             cin >> id;
//             for (auto &s : students) {
//                 if (s.id == id) {
//                     cout << "Found: ";
//                     s.display();
//                 }
//             }
//         } 
//         else {
//             cout << "Invalid Option! Try again." << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
class Student {
public:
    T id;
    string name;

    Student(T i, string n) : id(i), name(n) {}

    void display() {
        cout << "ID: " << id << " | Name: " << name << endl;
    }
};

int main() {
    vector<Student<int>> students;
    int choice, id;
    string name;

    while (true) {
        cout << "\n--- Student Management System ---" << endl;
        cout << "1. Add 2. Display 3. Remove 4. Search 0. Exit: ";
        cin >> choice;

        if (choice == 0) break;

        if (choice == 1) {
            cout << "Enter ID & Name: ";
            cin >> id >> name;
            students.push_back(Student<int>(id, name));
            cout << "Student Added!" << endl;
        } 
        else if (choice == 2) {
            if (students.empty()) cout << "List is empty!" << endl;
            for (auto &s : students) s.display();
        } 
        else if (choice == 3) {
            cout << "Enter ID to remove: ";
            cin >> id;
            bool deleted = false; // Flag to check if deleted
            for (auto it = students.begin(); it != students.end(); ++it) {
                if (it->id == id) {
                    students.erase(it);
                    cout << "Student Removed." << endl;
                    deleted = true;
                    break;
                }
            }
            if (!deleted) cout << "Error: ID " << id << " not found!" << endl;
        } 
        else if (choice == 4) {
            cout << "Enter ID to search: ";
            cin >> id;
            bool found = false; // Flag to check if found
            for (auto &s : students) {
                if (s.id == id) {
                    cout << "Result: ";
                    s.display();
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Error: ID " << id << " not found!" << endl;
        }
    }
    return 0;
}