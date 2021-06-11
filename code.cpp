#include <iostream>

using namespace std;

#define N 8

int main() 
{
  int aktszam, parososszeg = 0, paratlanosszeg = 0;
  cout << "Adjon meg " << N << "db egesz szamot!" << endl;
  for (int i = 0; i < N; i++)
  {
    do
    {
      cin >> aktszam;
      if (aktszam < 0)
      {
        cout << "Az ertek ervenytelen. (Pozitivnak kell lennie)." << endl;
      }
      if (aktszam % 2 == 0 && aktszam > 0)
      {
        parososszeg += aktszam;
      }
      else if (aktszam > 0)
      {
        paratlanosszeg += aktszam;
      }
    }while(aktszam < 0);
  }
  cout << endl;
  cout << "Paros szamok osszege: " << parososszeg << endl;
  cout << "Paratlan szamok osszege: " << paratlanosszeg << endl;
  return 0;
}
