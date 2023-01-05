#include <conio.h>
 
using namespace std;
 
struct Time
{
  int hours;
  int minutes;
 
  Time(): hours(0), minutes(0) {}
 
  void Init(int h, int m)
  {
    hours = h;
    minutes = m;
    cout << hours << ":"<< minutes << endl;
  }
 
  int Minutes() const
  {
    return hours * 60 + minutes;
  }
};
 
int main()
{
 Time t;
 t.Init(2, 3);
 cout << "minutes = " << t.Minutes() << endl;
 
 getch();
 return 0;
}