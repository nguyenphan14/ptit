
#include <iostream> 
using namespace std; 

string to_upper(string &in) 
{ 
    for (int i = 0; i < in.length(); i++) 
          if ('a' <= in[i] <= 'z') 
              in[i] = in[i] - 'a' + 'A'; 
    return in; 
} 
  

int main() 
{ 
   string str;
   getline(cin, str);
   cout << to_upper(str); 
   return 0; 
} 
