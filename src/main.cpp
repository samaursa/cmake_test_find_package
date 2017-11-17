#include <LibA/FileA.h>
#include <LibA/FileB.h>
#include <LibA/FileC.h>

#include <iostream>

int main()
{
  LibA::Foo f;
  f.Bar();

  LibA::Bar b;
  b.Foo();

  std::cout << LibA::GetProjName();
}
