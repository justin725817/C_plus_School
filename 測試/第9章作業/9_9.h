#include <string>
#include "Date.h" // for Date
#include "Name.h" // for Name

class Student
{
public:
    // Constructor using composition
    Student(Name name, char sex, Date dateOfBirth,
            std::string regNumber, std::string email)
        : name(name), dateOfBirth(dateOfBirth), sex(sex), regNumber(regNumber), email(email)
    {
    }

    // Setters
    void setSex(char sex)
    {
        this->sex = sex;
    }

    void setRegNumber(std::string regNumber)
    {
        this->regNumber = regNumber;
    }

    void setEmail(std::string email)
    {
        this->email = email;
    }

    // Getters
    char getSex() const
    {
        return sex;
    }

    std::string getRegNumber() const
    {
        return regNumber;
    }

    std::string getEmail() const
    {
        return email;
    }

private:
    Name name;             // Name object representing student's name
    Date dateOfBirth;      // Date object representing student's date of birth
    char sex;              // sex of the student
    std::string regNumber; // registration number of the student
    std::string email;     // email of the student
};
