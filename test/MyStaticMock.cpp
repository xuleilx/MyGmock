#include <iostream>

#include "gmock/gmock.h"
#include "gtest/gtest.h"

using namespace ::testing;

class A {
 public:
  static int add(int a, int b);
};

class B {
 public:
  int OneAddTwo() { return A::add(1, 2); }
};

class MockA {
 public:
  MockA() { instance = this; }
  ~MockA() { instance = nullptr; }
  MOCK_METHOD(int, add, (int, int));

 private:
  static MockA* instance;
  friend class A;
};
MockA* MockA::instance = nullptr;

int A::add(int a, int b) { return MockA::instance->add(a, b); }

TEST(BTest, mytest) {
  MockA mockA;
  EXPECT_CALL(mockA, add).WillRepeatedly(Return(3));
  B b;
  EXPECT_EQ(3, b.OneAddTwo());
}
