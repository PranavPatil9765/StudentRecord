
# Student Record Management System

## Overview

The **Student Record Management System** is a simple C++ application that allows users to add, view, and delete student records. It helps manage student details like name, age, and student ID, providing basic functionalities like adding new records, displaying all records, and deleting specific records. This project demonstrates the use of object-oriented programming concepts like classes, vectors, and basic user interaction through the terminal.

---

## Features

- **Add Student**: Allows the user to add a student with their name, age, and student ID.
- **View All Students**: Displays all stored student records.
- **Delete Student**: Allows the user to delete a student record by specifying the student ID.
- **Interactive Command Line Interface**: The program provides a simple CLI to interact with the user.

---

## Commands

- **Add Student**: 
  - Prompts the user to enter the student's name, age, and student ID. 
  - Example: `John Doe, 20, S123`
  
- **View All Students**: 
  - Displays all student records currently stored in the system.
  
- **Delete Student**: 
  - Prompts the user for a student ID to delete the corresponding student record from the system.

---

## Installation

### Prerequisites
Make sure you have the following installed:
- A C++ compiler such as `g++` or `clang`.
- A terminal to run the program.

### Steps to Install
1. Clone or download the project files.
2. Navigate to the project directory in your terminal.
3. Compile the project using the following command:
   ```bash
   g++ -o StudentManagementSystem StudentManagementSystem.cpp
   ```
4. Run the program:
   ```bash
   ./StudentManagementSystem
   ```

---

## Project Structure

The project contains a single file:

- **StudentManagementSystem.cpp**: The main file that contains the logic for the Student Record Management System. It includes classes for managing students and their records, and it handles user input/output.

---

## Example Usage

Once the program is compiled and running, you will be presented with the following menu options:

```bash
--- Student Management System ---
1. Add Student
2. Display All Students
3. Delete Student
4. Exit
Enter your choice:
```

### Example Commands

1. **Add a Student:**
   - Input the following command to add a student:
   ```bash
   1
   ```
   - Enter student details:
   ```bash
   Enter student name: John Doe
   Enter student age: 20
   Enter student ID: S123
   ```

2. **View All Students:**
   - Input the following command to view all student records:
   ```bash
   2
   ```
   - Output:
   ```bash
   Student 1:
   Name: John Doe
   Age: 20
   Student ID: S123
   ```

3. **Delete a Student:**
   - Input the following command to delete a student:
   ```bash
   3
   ```
   - Enter the student ID:
   ```bash
   Enter student ID to delete: S123
   ```
   - Output:
   ```bash
   Student with ID S123 deleted.
   ```

4. **Exit the Program:**
   - Input the following command to exit the program:
   ```bash
   4
   ```
   - Output:
   ```bash
   Exiting program...
   ```

---

## Contributing

Feel free to fork this repository, make improvements, or fix bugs. Pull requests are welcome. Ensure that any new features or fixes are accompanied by unit tests and appropriate documentation.

---

## License

This project is open-source and available under the MIT License. See the [LICENSE](LICENSE) file for more information.

---

## Authors

- **Pranav Patil** - *Initial work* - [Your GitHub](https://github.com/PranavPatil9765)


