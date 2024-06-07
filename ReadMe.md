# Personne, Etudiant, and Salarier Class System

This project is a C++ implementation of a simple class hierarchy for managing `Personne`, `Etudiant`, and `Salarier`. The classes are designed to demonstrate basic object-oriented programming concepts, including inheritance, polymorphism, and virtual functions.

## Table of Contents

- [Features](#features)
- [Class Descriptions](#class-descriptions)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Usage](#usage)
- [License](#license)

## Features

- **Personne**: Base class representing a person with a name, surname, and age.
- **Etudiant**: Derived class representing a student with a unique CNE.
- **Salarier**: Derived class representing a salaried person with a salary.
- Inheritance and polymorphism to manage different types of people.
- Virtual functions to ensure derived class implementations.

## Class Descriptions

### Personne Class
- **Attributes**: `name`, `pre`, `age`
- **Methods**:
  - `Personne(const char*, const char*, int)`: Constructor to initialize a person.
  - `Personne(const Personne&)`: Copy constructor.
  - `char* getname()`: Get the name.
  - `virtual char* getprenom()=0`: Pure virtual function to get the surname.
  - `void setname(const char*)`: Set the name.
  - `void setprenom(const char*)`: Set the surname.
  - `void setage(int)`: Set the age.
  - `virtual void afficher()=0`: Pure virtual function to display information.

### Etudiant Class
- **Attributes**: `CNE`
- **Methods**:
  - `Etudiant(const char*, const char*, const char*, int)`: Constructor to initialize a student.
  - `Etudiant(const Etudiant&)`: Copy constructor.
  - `char* getprenom() override`: Get the surname.
  - `char* getCNE()`: Get the CNE.
  - `void setCNE(const char*)`: Set the CNE.
  - `void afficher() override`: Display student information.

### Salarier Class
- **Attributes**: `salary`
- **Methods**:
  - `Salarier(float, const char*, const char*, const char*, int)`: Constructor to initialize a salaried person.
  - `Salarier(const Salarier&)`: Copy constructor.
  - `char* getprenom() override`: Get the surname.
  - `float getsalaire()`: Get the salary.
  - `void setsalaire(float)`: Set the salary.
  - `void afficher() override`: Display salaried person information.

## Technologies Used

- C++ (Core language)

## Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/personne-etudiant-salarier.git
    cd personne-etudiant-salarier
    ```

2. Compile the code:
    - Using g++:
      ```bash
      g++ -o personne_etudiant_salarier main.cpp
      ```

## Usage

1. **Running the Program:**
    - Run the compiled executable:
      ```bash
      ./personne_etudiant_salarier
      ```

2. **Program Flow:**
    - The program demonstrates the creation and manipulation of `Personne`, `Etudiant`, and `Salarier` objects, showcasing inheritance and polymorphism in action.


## File Descriptions

- **personne.hpp**: Header file containing the declarations for the `Personne`, `Etudiant`, and `Salarier` classes.
- **personne.cpp**: Implementation of the functions declared in `personne.hpp`.
- **main.cpp**: Entry point of the program, demonstrating the usage of the classes.
- **LICENSE**: License file for the project.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
