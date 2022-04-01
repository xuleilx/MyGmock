#include <iostream>

#include "gmock/gmock.h"
#include "gtest/gtest.h"

using namespace ::testing;

class InOut {
 public:
  virtual int methodInOut(int&) = 0;
};

class MockInOut : public InOut {
 public:
  MockInOut() {}
  ~MockInOut() {}
  MOCK_METHOD(int, methodInOut, (int&));
};

class MyTestInOut {
 public:
  MyTestInOut(InOut* inout) { mInOut = inout; }
  int method() {
    int result;
    mInOut->methodInOut(result);
    std::cout << result << std::endl;
    return 0;
  }

 private:
  InOut* mInOut;
};

TEST(InOutTest, mytest) {
  MockInOut mockInOut;
  MyTestInOut* testInOut = new MyTestInOut(&mockInOut);
  int port = 5;
  EXPECT_CALL(mockInOut, methodInOut)
      .WillRepeatedly(DoAll(SetArgReferee<0>(port), Return(0)));
  EXPECT_EQ(0, testInOut->method());
}
