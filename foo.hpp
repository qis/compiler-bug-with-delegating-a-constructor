#pragma once

#ifdef foo_EXPORTS
#define FOO_API __declspec(dllexport)
#else
#define FOO_API __declspec(dllimport)
#endif

class FOO_API foo_base {
public:
  virtual ~foo_base() {}
};

class FOO_API foo : public foo_base {
public:
  foo();
  ~foo();

  foo(int i) : foo() {}
};