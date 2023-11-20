#ifndef FOO_HPP
#define FOO_HPP

#include "FooError.hpp"
#include "SPI.h"

struct Foo {
    static const Foo& instance() {
      static Foo foo{};
      return foo;
    }
    int id = 42;
private:
    Foo();
    SPISettings _settings;
};

#endif //FOO_HPP
