#include <iostream>
#include <iterator>
#include <list>
using namespace std;
void showlist(list<int> g)
{	list<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout <<" "<<*it;
	cout << '\n';
}
int main()
{

	list<int> gqlist1, gqlist2;

	for (int i = 0; i < 10; ++i) {
		gqlist1.push_back(i);
		gqlist2.push_front(i);
	}
	cout << "List 1 (gqlist1) is : ";
	showlist(gqlist1);
	cout << "List 2 (gqlist2) is : ";
	showlist(gqlist2);

	cout << "gqlist1.front() : " << gqlist1.front();
	cout << "\ngqlist1.back() : " << gqlist1.back();

	cout << "\ngqlist1.pop_front() : ";
	gqlist1.pop_front();
	showlist(gqlist1);

	cout << "gqlist2.pop_back() : ";
	gqlist2.pop_back();
	showlist(gqlist2);

	cout << "gqlist1.reverse() : ";
	gqlist1.reverse();
	showlist(gqlist1);

	cout << "gqlist2.sort(): ";
	gqlist2.sort();
	showlist(gqlist2);

	return 0;
}