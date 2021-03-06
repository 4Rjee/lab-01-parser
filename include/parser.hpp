// Copyright 2020 Kochurin Nikita kochurin.nikita@gmail.com

#ifndef INCLUDE_PARSER_HPP_
#define INCLUDE_PARSER_HPP_

#include <string>
#include <vector>

#include "student.hpp"
using nlohmann::json;

class Parser {
 public:
  explicit Parser(const std::string& jsonPath);
  void Print_columns(std::ostream& out) const;
  void Print_lines(std::ostream& out) const;
  friend std::ostream& operator<<(std::ostream& out, const Parser& pars);

 private:
  std::vector<Student> students;
  std::vector<size_t> column_width{0, 9, 7, 15};
};

#endif  // INCLUDE_PARSER_HPP_