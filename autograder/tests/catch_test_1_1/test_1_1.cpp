//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "deep_traverse.h"
#include "redirect_io.h"
#include <vector>
#include <algorithm>
using namespace std;

static void test_1_1() {
  std::vector<int> v = {1, 3, 10, 7, 2, 50, 30, 4, 5};
  std::make_heap(v.begin(), v.end());
  for (const auto& item: v)
    std::cout << item << " ";
  std::cout << std::endl;
  pre_order(v, [](const auto& item) {
      std::cout << item << " ";
  });
  std::cout << std::endl;
  in_order(v, [](const auto& item) {
    std::cout << item << " ";
  });
  std::cout << std::endl;
  post_order(v, [](const auto& item) {
    std::cout << item << " ";
  });
  std::cout << std::endl;
}

TEST_CASE("Question #1.1") {
    execute_test("test_1_1.in", test_1_1);
}