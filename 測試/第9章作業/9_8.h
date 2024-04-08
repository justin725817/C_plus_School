// Student class

#include <string> // for string

class Student
{
public:
    // Constructor
    Student(std::string fN, std::string mN, std::string sN, char sex, int yob,
            std::string regNumber, std::string email)
        : firstName(fN), middleName(mN), surName(sN), sex(sex), yearOfBirth(yob),
          regNumber(regNumber), email(email) {}

    // Setter functions
    void setFirstName(std::string firstName)
    {
        this->firstName = firstName;
    }

    void setMiddleName(std::string middleName)
    {
        this->middleName = middleName;
    }

    void setSurName(std::string surName)
    {
        this->surName = surName;
    }

    void setSex(char sex)
    {
        this->sex = sex;
    }

    void setYearOfBirth(int yearOfBirth)
    {
        this->yearOfBirth = yearOfBirth;
    }

    void setRegNumber(std::string regNumber)
    {
        this->regNumber = regNumber;
    }

    void setEmail(std::string email)
    {
        this->email = email;
    }

    // Getter functions
    std::string getFirstName() const
    {
        return firstName;
    }

    std::string getMiddleName() const
    {
        return middleName;
    }

    std::string getSurName() const
    {
        return surName;
    }

    char getSex() const
    {
        return sex;
    }

    int getYearOfBirth() const
    {
        return yearOfBirth;
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
    std::string firstName;
    std::string middleName;
    std::string surName;
    char sex;
    int yearOfBirth;
    std::string regNumber;
    std::string email;
};
