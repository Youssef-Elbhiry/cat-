#include <iostream>
#include <string>
#include <vector>

using namespace std;
 void update(vector <string> v2, int &num)
 {
   int inccounts=0,decounts=0,totcounts=0;
   for (string &s : v2)
    {
        if(s == "++")
        {
          inccounts++;
        }
        else
        {
           decounts ++;
        }
    }
    totcounts = inccounts - decounts;
    num+=totcounts;

 }
int main()
{

    int n,num=0;
    cout << "enter size of vector :";
    cin >> n ;
    vector<string> v1(n);
    cout << "enter operations :";
    for (string &s : v1)
    {
        cin >> s;
    }
  cout << "enter number :";
  cin >> num ;


update(v1,num);
cout << num;

    return 0;
}

