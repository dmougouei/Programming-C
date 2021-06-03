#include <iostream>
using namespace std;

void tower(int a, char from, char buf, char to){
  if (a>0){
    if(a==1) {
       cout << "Move disc 1 from " << from<< " to "<< to << "\n";
       return;
    }
    else {
       tower(a-1, from, to, buf);
       cout << "Move disc " << a << " from "<< from << " to "<< to << "\n";
       tower(a-1, buf, from, to);
    }
  }
  else{
    cout<<"Error" << endl;
  }
}

int main()
{
     tower(3, 'A', 'B', 'C');
     tower(5, 'A', 'B', 'C');
     tower(-3, 'A', 'B', 'C');
     tower(0, 'A', 'B', 'C');
     return 0;
}
