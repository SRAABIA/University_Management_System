# University Management System

A C-based management system for handling class schedules and bus transportation at educational institutions.

## Features

### 1. Class Schedule Management

- Create, edit, and delete class schedules
- Support for multiple disciplines/departments
- Track up to 8 periods per day
- Room number assignment
- Schedule management for all weekdays
- Search functionality by batch, discipline, section, and day

### 2. Transportation Management

- Bus schedule creation and maintenance
- Multiple route support (up to 6 routes)
- Track arrival and departure times
- Bus stop/point management
- Daily schedule viewing

### 3. User Interfaces

- **Admin Interface**
  - Password protected access
  - Full CRUD operations for schedules
  - Bus route management
- **Student Interface**
  - View class schedules
  - Check bus timings
  - Search by specific criteria

## C Programming Concepts Covered

### 1. Basic Concepts

- Variables and data types
- Control structures (if-else, switch, loops)
- Functions and function prototypes
- Arrays and strings
- Console I/O operations
- Header file inclusion

### 2. Advanced Concepts

#### Structures

- Basic structure definition and usage
- Nested structures
- Arrays of structures
- Structure pointers
- Structure as function parameters

#### Memory Management

- Static memory allocation
- Global variables
- Scope and lifetime of variables
- Memory organization

#### String Handling

- String operations (strcmp, strcpy)
- Character array manipulation
- String input/output
- Buffer management with fflush

#### File Organization

- Header files
- Source code organization
- Multiple function implementations
- Code modularity

### 3. Programming Practices

- Code organization and structure
- Function modularity
- Error handling
- User interface design
- Input validation
- Documentation and commenting

### 4. System-Specific Features

- Windows API integration
- System calls (Sleep, Beep)
- Console manipulation
- Screen clearing and formatting

### 5. Data Structures Implementation

- Arrays
- Structure Objects

### 6. User Interface Concepts

- Menu-driven interface
- Input validation
- Error messages
- User feedback
- Screen formatting
- Navigation logic

### 7. CRUD Operations

- Create (Add records)
- Read (Display records)
- Update (Edit records)
- Delete (Remove records)

### 8. Security Concepts

- Password protection
- Access levels (Admin/Student)
- Input validation
- Basic authentication

### 9. Best Practices Demonstrated

- Consistent naming conventions
- Code comments and documentation
- Modular function design
- Error handling
- User-friendly interface
- Structured programming approach

## Technical Details

### Dependencies

- Standard C libraries
- Windows-specific features (`windows.h`)
- Console-based interface

### Data Structures

- Nested structures for:
  - Discipline/batch information
  - Class schedules
  - Bus timings
  - Time management

### Installation

1. Clone the repository
2. Compile using a C compiler (e.g., GCC)
3. Run the executable
   `gcc finalized_project.c -o university_management`
   `./university_management`

### Usage

1. Launch the program
2. Choose between Administrator or Student access
3. For admin access:
   - Default password: "123"
   - Access full management features
4. For student access:
   - View schedules and bus timings
   - No authentication required

## Notes

- The system uses Windows-specific features (Beep, Sleep)
- Console-based interface with simple navigation
- Data is stored in memory (no persistent storage)
- Designed for educational institution management
