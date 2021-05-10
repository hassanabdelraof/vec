
#include <iostream>
#include <vector>
#include<list>

using namespace std;


void showlist(vector <int> g)
{
    vector <int> ::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}


int main()
{
    vector<int> v;

    cout << "print elements of vector using ordinary for loop " << endl;
    for (int i = 0; i < 100; i++) {
        v.push_back(i * 100);
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ",";
    }
    cout << endl;
    cout << endl;
    cout << "print elements of vector using ranged for loop " << endl;
    for (int i : v) {
        cout << i << ",";
    }


    cout << endl;
    cout << endl;
    cout << "print elements of vector using vector iterator " << endl;
    showlist(v);
    cout << endl;
    cout << endl;


    cout << "print size and capacity info" << endl;
    cout << "vector size= " << v.size() << ", vector capacity=" << v.capacity() << endl;
    cout << endl;
    cout << "remove one element of v" << endl;
    v.pop_back();
    cout << endl;
    cout << "print elements of vector after removal" << endl;
    for (int i : v) {
        cout << i << ",";
    }
    cout << endl;
    cout << endl;
    cout << "print size and capacity info after removal" << endl;
    cout << "vector size= " << v.size() << ", vector capacity=" << v.capacity() << endl;

    /*
    * Q1
    cout << "print last element via calling end() on a vector " << endl;
    vector<int>::iterator it = v.end();
    cout<<*it;
    */

    /*
    * Q2
    print the boundary elements of vector using v.begin(), v.rbegin(), v.end(), v.rend() to check their values
    */

    /*
    Q3
    use insert function on vector to insert the value 350 as the fourth element and then check the size and capacity info
    */

    /*
    * Q4
    use front() and back() functions to print first and last elements in vector, 
    */

    /*
    Q5
    remove the last two elements using pop() and then check the size and capacity info
    */

    /*
    Q6
    uncomment the following two lines to insert the elements of a list container  into your vector
    */
    //
    //  list<int> ll={-100,-200,-300};
    //  v.insert(v.begin(),ll.begin(),ll.end());
    // print the first three elements of your vector to examine the insertions


    /*Q7
     erase the first element and then first three elements using erase()
    for help visit: https://www.cplusplus.com/reference/vector/vector/erase/
    */

   

    /*
    Q8 [Homework]
    read Iterator invalidation rules::https://en.cppreference.com/w/cpp/container
    */


}
