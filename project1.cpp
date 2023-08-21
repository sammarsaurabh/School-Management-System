#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string name;
    string fatherName;
    string motherName;
    string className;
    string section;
    string rollNo;
    string feeAmount;
};

int main() {
    vector<Student> students;

    while (true) {
        system("cls");
        cout << "School Fees Management System" << endl;
        cout << "------------------------------" << endl;
        cout << "1. Add Student Record" << endl;
        cout << "2. View Student Record" << endl;
        cout << "3. Search Student Record" << endl;
        cout << "4. Edit Student Record" << endl;
        cout << "5. Delete Student Record" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                cout << "Add Student Record" << endl;
                cout << "------------------" << endl;

                Student newStudent;
                cout << "Enter Name: ";
                getline(cin, newStudent.name);
                cout << "Enter Father's Name: ";
                getline(cin, newStudent.fatherName);
                cout << "Enter Mother's Name: ";
                getline(cin, newStudent.motherName);
                cout << "Enter Class: ";
                getline(cin, newStudent.className);
                cout << "Enter Section: ";
                getline(cin, newStudent.section);
                cout << "Enter Roll No.: ";
                getline(cin, newStudent.rollNo);
                cout << "Enter Fee Amount: ";
                getline(cin, newStudent.feeAmount);

                students.push_back(newStudent);
                cout << "Student record added successfully." << endl;
                break;
            }
            case 2: {
                cout << "View Student Record" << endl;
                cout << "-------------------" << endl;

                if (students.empty()) {
                    cout << "No student records found." << endl;
                } else {
                    for (const auto& student : students) {
                        cout << "Name: " << student.name << endl;
                        cout << "Father's Name: " << student.fatherName << endl;
                        cout << "Mother's Name: " << student.motherName << endl;
                        cout << "Class: " << student.className << endl;
                        cout << "Section: " << student.section << endl;
                        cout << "Roll No.: " << student.rollNo << endl;
                        cout << "Fee Amount: " << student.feeAmount << endl;
                        cout << "-------------------" << endl;
                    }
                }
                break;
            }
            case 3: {
                cout << "Search Student Record" << endl;
                cout << "---------------------" << endl;

                if (students.empty()) {
                    cout << "No student records found." << endl;
                } else {
                    string searchName;
                    cout << "Enter Name to Search: ";
                    getline(cin, searchName);

                    bool found = false;
                    for (const auto& student : students) {
                        if (student.name == searchName) {
                            cout << "Name: " << student.name << endl;
                            cout << "Father's Name: " << student.fatherName << endl;
                            cout << "Mother's Name: " << student.motherName << endl;
                            cout << "Class: " << student.className << endl;
                            cout << "Section: " << student.section << endl;
                            cout << "Roll No.: " << student.rollNo << endl;
                            cout << "Fee Amount: " << student.feeAmount << endl;
                            cout << "-------------------" << endl;
                            found = true;
                        }
                    }

                    if (!found) {
                        cout << "Record not found." << endl;
                    }
                }
                break;
            }
            // case 4:
            //     cout << "Edit Student Record" << endl;
            //     // Add your logic to edit a student record
            //     break;
            // case 5:
            //     cout << "Delete Student Record" << endl;
            //     // Add your logic to delete a student record
                // break;
            case 4: {
        cout << "Edit Student Record" << endl;
        cout << "-------------------" << endl;

        if (students.empty()) {
        cout << "No student records found." << endl;
        } else {
        string searchName;
        cout << "Enter Name to Edit: ";
        getline(cin, searchName);

        bool found = false;
        for (auto& student : students) {
            if (student.name == searchName) {
                cout << "Enter New Name: ";
                getline(cin, student.name);
                cout << "Enter New Father's Name: ";
                getline(cin, student.fatherName);
                cout << "Enter New Mother's Name: ";
                getline(cin, student.motherName);
                cout << "Enter New Class: ";
                getline(cin, student.className);
                cout << "Enter New Section: ";
                getline(cin, student.section);
                cout << "Enter New Roll No.: ";
                getline(cin, student.rollNo);
                cout << "Enter New Fee Amount: ";
                getline(cin, student.feeAmount);

                cout << "Student record updated successfully." << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Record not found." << endl;
        }
            }
        break;
        }
            case 5: {
             cout << "Delete Student Record" << endl;
             cout << "---------------------" << endl;

            if (students.empty()) {
              cout << "No student records found." << endl;
                } else {
                 string searchName;
                 cout << "Enter Name to Delete: ";
                getline(cin, searchName);

                bool found = false;
                for (auto it = students.begin(); it != students.end(); ++it) {
              if (it->name == searchName) {
                students.erase(it);
                cout << "Student record deleted successfully." << endl;
                found = true;
                break;
                  }
                 }

                 if (!found) {
                 cout << "Record not found." << endl;
                }
                 }
                 break;
                }

            case 6:
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid choice (1-6)." << endl;
                break;
        }

        cout << "Press Enter to continue...";
        cin.ignore();
        cin.get();
    }

    return 0;
}
