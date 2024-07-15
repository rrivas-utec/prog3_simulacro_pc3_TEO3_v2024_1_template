//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "deep_traverse.h"
#include "redirect_io.h"
#include <string>
#include <algorithm>
using namespace std;

static void test_1_4() {
  std::string s = "universidad";
  std::make_heap(s.begin(), s.end());
  for (const auto& item: s)
    std::cout << item << " ";
  std::cout << std::endl;
  
  pre_order(s, [](const auto& item) {
    std::cout << item << " ";
  });
  std::cout << std::endl;
  in_order(s, [](const auto& item) {
    std::cout << item << " ";
  });
  std::cout << std::endl;
  post_order(s, [](const auto& item) {
    std::cout << item << " ";
  });
  std::cout << std::endl;
}

TEST_CASE("Question #1.4") {
    execute_test("test_1_4.in", test_1_4);
}