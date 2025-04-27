#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Class to represent a student
class Student {
public:
    string name;
    int age;
    string studentID;

    Student(string n, int a, string id) {
        name = n;
        age = a;
        studentID = id;
    }

    void display() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Student ID: " << studentID << "\n";
    }
};

// Class to manage the student records
class StudentManagementSystem {
private:
    vector<Student> students;

public:
    // Add a student
    void addStudent(string name, int age, string studentID) {
        Student newStudent(name, age, studentID);
        students.push_back(newStudent);
        cout << "Student added successfully!\n";
    }

    // Display all student records
    void displayAllStudents() {
        if (students.empty()) {
            cout << "No students available.\n";
            return;
        }
        for (size_t i = 0; i < students.size(); ++i) {
            cout << "\nStudent " << i + 1 << ":\n";
            students[i].display();
        }
    }

    // Delete a student record
    void deleteStudent(string studentID) {
        for (size_t i = 0; i < students.size(); ++i) {
            if (students[i].studentID == studentID) {
                students.erase(students.begin() + i);
                cout << "Student with ID " << studentID << " deleted.\n";
                return;
            }
        }
        cout << "Student not found!\n";
    }
};

int main() {
    StudentManagementSystem sms;
    int choice;
    string name, studentID;
    int age;

    while (true) {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Delete Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter student name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter student age: ";
            cin >> age;
            cout << "Enter student ID: ";
            cin >> studentID;
            sms.addStudent(name, age, studentID);
            break;

        case 2:
            sms.displayAllStudents();
            break;

        case 3:
            cout << "Enter student ID to delete: ";
            cin >> studentID;
            sms.deleteStudent(studentID);
            break;

        case 4:
            cout << "Exiting program...\n";
            return 0;

        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
