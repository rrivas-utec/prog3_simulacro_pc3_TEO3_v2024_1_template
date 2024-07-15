//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "deep_traverse.h"
#include "redirect_io.h"
#include <array>
#include <algorithm>
using namespace std;

static void test_1_2() {
  std::array a = {1, 3, 10, 7, 2, 50, 30, 4, 5};
  std::make_heap(a.begin(), a.end());
  for (const auto& item: a)
    std::cout << item << " ";
  std::cout << std::endl;
  pre_order(a, [](const auto& item) {
    std::cout << item << " ";
  });
  std::cout << std::endl;
  in_order(a, [](const auto& item) {
    std::cout << item << " ";
  });
  std::cout << std::endl;
  post_order(a, [](const auto& item) {
    std::cout << item << " ";
  });
  std::cout << std::endl;
}

TEST_CASE("Question #1.2") {
    execute_test("test_1_2.in", test_1_2);
}