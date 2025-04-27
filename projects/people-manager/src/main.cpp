#include "Person.hpp"
#include <iostream>

int main()
{
    auto psn1 = psn::Person("John", "Doe", 20, "john.doe@example.com",
                            psn::Gender::Male, psn::MaritalStatus::Single,
                            "Businessman", "Exmample person.");
    auto psn2 = psn::Person("Jane", "Doe", 20, "john.doe@example.com",
                            psn::Gender::Female, psn::MaritalStatus::Married,
                            "Lambda", "The lambda person.");
    std::cout << psn1 << "\n";
    std::cout << psn2 << "\n";
}
