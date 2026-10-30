# Library Management System (C)

A menu-driven **C command-line application** for keeping a simple list of books and tracking whether each book is available or issued.

## Features in the current source

- Add a book with an ID, title, and author
- Display all stored books and their availability
- Search for a book by ID
- Issue an available book
- Return an issued book
- Load records from `library.txt` at startup
- Save records to `library.txt`

The program keeps up to 100 books in its in-memory array.

## Requirements

- A C compiler such as GCC
- A terminal or command prompt

## Build and run

Clone the repository:

```bash
git clone https://github.com/eDDie-05/Libms.git
cd Libms
```

Compile:

```bash
gcc -std=c11 -Wall -Wextra -pedantic lms.c -o library
```

Run on macOS or Linux:

```bash
./library
```

Run on Windows:

```powershell
.\library.exe
```

## Data storage

The application reads and writes `library.txt` in the current working directory. It is created when records are saved. Back up this file if you need to preserve the records.

## Current limitations

- This is a small educational project, not a full library platform.
- Book titles and author names are currently read as single words.
- Input validation, duplicate book-ID checks, and error handling can be improved.
- The data file is plain text; there is no database, login system, or multi-user support.
- The application does not currently store borrower details or due dates.

## Ideas for future work

- Support titles and author names containing spaces.
- Add borrower records and due dates.
- Add overdue tracking and reporting.
- Validate input and prevent duplicate IDs.
- Add automated tests and database storage.

## Contributing

Open an issue to discuss a proposed improvement, then submit a focused pull request with clear test steps.

## License

No open-source license is currently specified. All rights remain with the respective content owner unless a license is added.
