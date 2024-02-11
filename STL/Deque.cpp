//Contructors:
deque<int> first;                                // empty deque of ints
deque<int> second (4,100);                       // four ints with value 100
deque<int> third (second.begin(),second.end());  // iterating through second
deque<int> fourth (third);                       // a copy of third

//Insertion:
dq.push_back(5); //O(1)
dq.push_front(5); //O(1)
dq.assign (7,100);       // 7 ints with a value of 100
dq.assign (arr,arr+3);   // assigning from array.

//Access:
dq.front() //O(1) returns the first element //changeable 
dq.back() //O(1) returns the last element //changeable 
for (auto it = dq.begin(); it != dq.end(); it++) cout << ' ' << *it;
for (int i=0;i<dq.size();i++) cout<<dq[i]
for (auto it = dq.rbegin(); it!= dq.rend(); it++) cout << ' ' << *it;

//Size:
dq.resize(5); //current elements thik rekhe size 5 kore dibe
dq.resize(8,100); //jodi size bare, new elements gula 100 hobe
dq.empty(); //O(1) //returns true if the size is 0 //declared with a size er khetre false return korbe
dq.size(); //O(1) //returns the size

//Deletion:
dq.pop_back(); //O(1) //deletes last element
dq.pop_front(); //O(1) //deletes the first element
dq.erase(dq.begin()+5); //O(n) //deletes 6th element
dq.clear(); //O(n) //deletes the vector even makes size to 0

//Sorting
sort(dq.begin(),dq.end()); //ascending order
sort(dq.rbegin(),dq.rend()); //descending order
