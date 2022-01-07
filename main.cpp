#include <iostream>
#include<algorithm>

using namespace std;

int main()
{


   int tablica[] = {7, 5, 100, 23};

   sort(tablica, tablica + 4);

   for(int i=0; i<4; i++)
    cout << tablica[i] << endl;

   return 0;

}
