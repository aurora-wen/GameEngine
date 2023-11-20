#include <iostream>
#include <climits>

void hexoct() {
  using namespace std;
      int chest = 42;     //decimal integer literal
      int waist = 0x42;   //hexdecimal integer literal
      int inseam = 042;     //octal integer literal

      cout << "chest = " << chest << " (42 in  decimal)" << endl;
      cout << "waist = " << waist << " (0x42 in  hex)" << endl;
      cout << "inseam = " << inseam << " (042 in  octal)" << endl;

      chest = 42;
      waist = 42;
      inseam = 42;

      cout << "-------------- use cout characteristic: ------------------" << endl;

      cout << "chest = " << chest << " (decimal for 42)" << endl;
      cout << hex;
      cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
      cout << oct;
      cout << "inseam = " << inseam << " (octal for 42)" << endl;
}

/*
chest = 42 (42 in  decimal)
waist = 66 (0x42 in  hex)
inseam = 34 (042 in  octal)
-------------- use cout characteristic: ------------------
chest = 42 (decimal for 42)
waist = 2a (hexadecimal for 42)
inseam = 52 (octal for 42)
*/