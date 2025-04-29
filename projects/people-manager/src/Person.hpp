#ifndef PERSON_HPP
#define PERSON_HPP

#include <stdexcept>
#include <string>
#include <string_view>
#include <vector>

/* TODO:
 * - Create a date class for date of birth : NOT DONE
 * - Create a phone number struct : NOT DONE
 */

namespace psn {
enum class Gender { Male, Female, Other };
enum class MaritalStatus { Married, Divorced, Single, Widowed };
struct PhoneNumber {
  int
}

class Person {
private:
  static int m_n_id;
  const int m_id;
  const std::string m_first_name;
  const std::string m_last_name;
  unsigned short m_age;
  std::string m_email;
  Gender m_gender;
  std::string m_profession;
  MaritalStatus m_marital_status;
  std::string m_notes;

public:
  // ctor
  Person(std::string_view first_name, std::string_view last_name, short age,
         std::string_view email, Gender gender, MaritalStatus marital_status,
         std::string_view profession, std::string_view notes);

  // getters
  int getID() const;
  const std::string &getFirstName() const;
  const std::string &getLastName() const;
  short getAge() const;
  const std::string &getEMail() const;
  const Gender &getGender() const;
  const std::string &getProfession() const;
  const MaritalStatus &getMaritalStatus() const;
  const std::string &getNotes() const;

  std::string toString() const;
};
} // namespace psn

std::ostream &operator<<(std::ostream &os, const psn::Person &person);
std::ostream &operator<<(std::ostream &os, const psn::Gender &gender);
std::ostream &operator<<(std::ostream &os, const psn::MaritalStatus &status);

#endif // PERSON_HPP
