# A Simple Example of GTest and GMock

Just take a note for howto utilize the GTest and GMock to test C program.  All
of the information is from Internet, I just leave a little comment for them.

# Download and Install

* [CMake](https://cmake.org/download/)
* [GTest/GMock](https://github.com/google/googletest)

```
$ git clone https://github.com/google/googletest.git
$ cd googletest/
$ mkdir build
$ cd build/
$ cmake ..
$ make
$ sudo make install
```

[FindGMock.cmake](https://github.com/triglav/cmake-findgmock) is included in
this repository.

# Build & Run (Linux & OSX)

```
$ https://github.com/xuleilx/MyGmock.git
$ mkdir build
$ cd build
$ cmake ..
$ make
╭─cambricon ~/study/MyGmock/build 
╰─$ ./MyCmock 
Running main() from /home/cambricon/study/googletest/googletest/src/gtest_main.cc
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 2 tests from XDevUnitTest
[ RUN      ] XDevUnitTest.Port1
[       OK ] XDevUnitTest.Port1 (0 ms)
[ RUN      ] XDevUnitTest.Port2
[       OK ] XDevUnitTest.Port2 (0 ms)
[----------] 2 tests from XDevUnitTest (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 2 tests.
╭─cambricon ~/study/MyGmock/build 
╰─$ ./MyStaticMock 
Running main() from /home/cambricon/study/googletest/googletest/src/gtest_main.cc
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from BTest
[ RUN      ] BTest.mytest
[       OK ] BTest.mytest (0 ms)
[----------] 1 test from BTest (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
```

# Reference

* [stackoverflow: Can gmock be used for stubbing C functions? (bcm example)](https://stackoverflow.com/questions/31989040/can-gmock-be-used-for-stubbing-c-functions)
* [Using GoogleTest and GoogleMock frameworks for embedded C](https://www.codeproject.com/Articles/1040972/Using-GoogleTest-and-GoogleMock-frameworks-for-emb)
* [What Is Google C++ Mocking Framework?](https://github.com/google/googletest/blob/master/googlemock/docs/ForDummies.md)
* [FindGMock.cmake](https://github.com/triglav/cmake-findgmock)
* [Mocking Static Method in c++](https://stackoverflow.com/questions/61227916/mocking-static-method-in-c)


