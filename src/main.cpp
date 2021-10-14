#include <iup/iup.h>

int main()
{
  IupOpen(nullptr, nullptr);

  IupMessage("IUP", "Hello World from IUP");

  IupClose();

  return 0;
}