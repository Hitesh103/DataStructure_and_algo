

// Refer This for better notes...........
// Notes : https://takeuforward.org/c/c-stl-tutorial-most-frequent-used-stl-containers/



#include <bits/stdc++.h>
using namespace std;

// Pairs
void explainPair()
{

  pair<int, int> p = {1, 2};

  // How to access pair given below
  cout << p.first << " " << p.second << endl;

  // pair to store 3 number
  pair<int, pair<int, int>> P = {1, {3, 4}};

  //  How to access 3 number pair given below
  cout << P.first << " " << P.second.first << " " << P.second.second << endl;

  pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}}; // Array of pair
}

void explainVector()
{

  vector<int> v;

  v.push_back(1);
  v.emplace_back(4); // same as pushbck but faster

  vector<pair<int, int>> vec;

  vec.push_back({1, 3});
  v.emplace_back(1, 2);

  vector<int> v(5, 100);

  vector<int> v(5);

  vector<int> v1(5, 20); // {100,100,100,100,100}
  vector<int> v2(v1);    // this will be copy of v1

  vector<int>::iterator it = v.begin();
  it++;
  cout << *(it) << " ";

  it = it + 2;
  cout << *(it) << " ";

  vector<int>::iterator it = v.end();    // v.end will not be the last element it will 1 step ahead to access last element we have v.end()-1;
  vector<int>::iterator it = v.rend();   // reverse end , here everything will be reversed ++ and -- too
  vector<int>::iterator it = v.rbegin(); // reverse begin , here everything will be reversed ++ and -- too

  // accessing each element
  for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
  {
    cout << *it << " ";
  }

  for (auto it = v.begin(); it != v.end(); ++it)
  { // replaced vector<int>::iterator with auto
    cout << *it << " ";
  }

  for (auto it : v)
  {
    cout << it << " "; // Because of auto we don't need to write *it
  }

  v.erase(v.begin() + 1);               // it will delete 2nd element
  v.erase(v.begin() + 2, v.begin() + 4) // end will remain

      // Insert Function
    vector<int> v(2, 100);
    v.insert(v.begin(), 300);

}

void explianList()
{

  list<int> ls;
  ls.push_back(2);

  // similar to vector
  //  all vector method
}

void explianDeque()
{
  // similar to vector
  deque<int> dq;
  dq.push_back(2);
  // all vector method
}

void explainStack()
{

  // LIFO - Last in first Out

  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);

  cout << st.top() << endl; // 4

  st.pop(); //  {1,2,3}

  cout << st.top() << endl; // 3

  cout << st.size() << endl; // 3

  stack<int> st1, st2;
  st1.swap(st2);
}

void explainQueue()
{

  // FIFO - First in first out

  queue<int> q;
  q.push(1);
  // Same as stack
}

void explainPQ()
{

  priority_queue<int> pq;
  pq.push(5); // In priority_queue the maximum num will be at top and for string longest string will be at top
  pq.push(2);
  pq.push(8);
  pq.emplace(10);

  cout << pq.top() << endl;

  pq.pop();


 // For minimum at top do this
  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(5);
  pq.push(2);
  pq.emplace(10);

  cout << pq.top() << endl;
}

void explainSet() {

  set<int>st;

  st.insert(1); //{1}
  st.emplace(2); //{1,2}
  st.insert(2); //{1,2}
  st.insert(4); //{1,2,4}
  st.insert(3); // {1,2,3,4}

  // so , set stores only unique values and in sorted manner


}

void explainmultiset(){

   multiset<int> ms;
   ms.insert(1); //{1}
   ms.insert(1); //{1,1}
   ms.insert(1); //{1,1,1}

   ms.erase(1); // erase all 1's

   ms.erase(ms.find(1)); //only single one erased

   //.find() returns the address

   // int cnt = ms.find(1);

}

void unorderedSet(){

 // unordered set<int> st;
}


void explainMap(){

 map<int, int> app;

}

void explainmultimap(){

//Duplicate key

}

void explainExtra(){

  // to sort array we have internal sort , sort(firstelement, last element);

  // to sort in reverse order

 // sort(a,a+4,greater<int>);

 int num = 7;
  // int cnt = __builtin_popcount(); gives set bits for long number its __builtin_popcountll();


  string s = "123";


// print all permutation
  do {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));

   // max_element

       int maxi = *max_element(a,a+n);

}

int main()
{
  explainPair();
  explainVector();
}

