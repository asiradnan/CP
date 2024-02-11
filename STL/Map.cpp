//Contructors:
map<char,int> second (first.begin(),first.end());
map<char,int> third (second);

//Insertion:
first['a']=10;

//Access:
auto it = m.find('b'); //O(logn) returns the iterator 
if (m.count(c)>0) cout << c<< " is an element of m.\n"; //O(logn) //returns 1 if the element is present
auto it = m.lower_bound (30); //O(logn)  //30 thakle 30, na thakle immediate boro
auto it = m.upper_bound (60); //O(logn)  //thakuk na thakuk immediate boro
for (auto it=m.begin(); it!=m.end(); ++it) cout << it->first << " " << it->second << '\n';
for (auto it=m.rbegin(); it!=m.rend(); ++it) cout << it->first << " " << it->second << '\n';

//Size:
m.empty(); //O(1) //returns true if the size is 0 //declared with a size er khetre false return korbe
m.size(); //O(1) //returns size

//Deletion:
auto it=m.find('b');  //O(logn)
m.erase (it);  // O(1) //erasing by iterator
m.erase ('c');  //O(logn) //erasing by key
m.erase ( it, m.end() );   //O(n) // erasing by range
m.clear(); //O(n) //deletes the set and makes size to 0

//Already Sorted
