#include "Person.hpp"
#include <iostream>

namespace psn {

// CLASS: Person //

int Person::m_n_id = 0;

Person::Person(std::string_view first_name, std::string_view last_name,
               short age, std::string_view email, Gender gender,
               MaritalStatus marital_status, std::string_view profession,
               std::string_view notes)
    : m_id(m_n_id++), m_first_name(first_name), m_last_name(last_name),
      m_age(age), m_email(email), m_gender(gender),
      m_marital_status(marital_status), m_profession(profession),
      m_notes(notes) {
  // empty
}

int Person::getID() const { return m_id; }
const std::string &Person::getFirstName() const { return m_first_name; }
const std::string &Person::getLastName() const { return m_last_name; }
short Person::getAge() const { return m_age; }
const std::string &Person::getEMail() const { return m_email; }
const Gender &Person::getGender() const { return m_gender; }
const std::string &Person::getProfession() const { return m_profession; }
const MaritalStatus &Person::getMaritalStatus() const {
  return m_marital_status;
}
const std::string &Person::getNotes() const { return m_notes; }

std::string Person::toString() const {
  return "ID: " + std::to_string(m_id) + ", Name: " + m_first_name + " " +
         m_last_name + ", Age: " + std::to_string(m_age) +
         ", Profession: " + m_profession + ", Notes: " + m_notes;
}

} // namespace psn

std::ostream &operator<<(std::ostream &os, const psn::Person &person) {
  return os << person.toString();
}

std::ostream &operator<<(std::ostream &os, const psn::Gender &gender) {
  using namespace psn;
  switch (gender) {
  case Gender::Male:
    os << "Male";
    break;
  case Gender::Female:
    os << "Female";
    break;
  case Gender::Other:
    os << "Other";
    break;
  default:
    os << "Unimplemented `Gender`";
    break; // should never occur
  }
  return os;
}

std::ostream &operator<<(std::ostream &os, const psn::MaritalStatus &status) {
  using namespace psn;
  switch (status) {
  case MaritalStatus::Married:
    os << "Married";
    break;
  case MaritalStatus::Divorced:
    os << "Divorced";
    break;
  case MaritalStatus::Single:
    os << "Single";
    break;
  case MaritalStatus::Widowed:
    os << "Widowed";
    break;
  default:
    os << "Unimplemented `MaritalStatus`";
    break; // should never occur
  }
  return os;
}
