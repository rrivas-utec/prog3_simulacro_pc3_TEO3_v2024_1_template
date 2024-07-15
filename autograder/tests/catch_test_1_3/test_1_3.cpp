//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "deep_traverse.h"
#include "redirect_io.h"
#include <deque>
#include <algorithm>
using namespace std;

static void test_1_3() {
  std::deque d = {1, 3, 10, 7, 2, 50, 30, 4, 5};
  std::make_heap(d.begin(), d.end());
  for (const auto& item: d)
    std::cout << item << " ";
  std::cout << std::endl;
  
  pre_order(d, [](const auto& item) {
    std::cout << item << " ";
  });
  std::cout << std::endl;
  in_order(d, [](const auto& item) {
    std::cout << item << " ";
  });
  std::cout << std::endl;
  post_order(d, [](const auto& item) {
    std::cout << item << " ";
  });
  std::cout << std::endl;
}

TEST_CASE("Question #1.3") {
    execute_test("test_1_3.in", test_1_3);
}