# Library Management System

##  Overview

The **Library Management System** is a simple console-based application developed using the **C programming language**. It is designed to help manage common library activities such as adding books, viewing available books, searching for books, issuing books, and returning books.

The project demonstrates the use of fundamental C programming concepts including **structures, functions, arrays, file handling, loops, conditional statements, and pointers**.

##  Features

* Add new books to the library
* Display all available books
* Search for a book
* Issue a book to a student/member
* Return an issued book
* View book availability/status
* Store and retrieve library records
* Simple menu-driven interface

##  Technologies Used

* **Programming Language:** C
* **Compiler:** GCC / MinGW
* **Storage:** File handling
* **Platform:** Windows, Linux, or macOS
* **Interface:** Command Line / Terminal

##  Project Structure

```text
Library-Management-System/
│
├── main.c
├── README.md
├── books.dat
└── members.dat
```

> The `.dat` files are created by the program if file storage is implemented.

##  How to Run

### 1. Clone the repository

```bash
git clone https://github.com/your-username/library-management-system.git
```

### 2. Enter the project directory

```bash
cd library-management-system
```

### 3. Compile the program

Using GCC:

```bash
gcc main.c -o library
```

### 4. Run the program

On macOS/Linux:

```bash
./library
```

On Windows:

```bash
library.exe
```

## 🖥️ Example Menu

```text
=================================
      LIBRARY MANAGEMENT SYSTEM
=================================

1. Add Book
2. View Books
3. Search Book
4. Issue Book
5. Return Book
6. Exit

Enter your choice:
```

##  Main Operations

### Add Book

Allows the librarian to enter information about a new book, such as:

* Book ID
* Book title
* Author
* Publication year
* Availability status

### View Books

Displays the books currently stored in the library system.

### Search Book

Allows users to search for a book using its ID, title, or author.

### Issue Book

Records when a book is borrowed and changes its availability status.

### Return Book

Records the return of a borrowed book and makes it available again.

##  Objectives

The main objectives of this project are:

1. To develop a basic library management system using C.
2. To reduce manual management of library records.
3. To practice C programming concepts.
4. To demonstrate file handling and data storage.
5. To provide a simple and user-friendly library interface.

##  Limitations

* The system uses a command-line interface.
* It does not have a graphical user interface.
* User authentication may not be included.
* The system is designed mainly for learning and small-scale use.

##  Future Improvements

Future versions could include:

* User login and authentication
* Admin and student accounts
* Database integration using SQLite or MySQL
* Graphical User Interface (GUI)
* Automatic overdue-book calculation
* Fine/penalty management
* Book reservation system
* Report generation
* Improved data security

##  Author
eDDie
Developed as a C programming project.

##  License

This project is intended for educational purposes. You are free to modify and improve it for learning.
