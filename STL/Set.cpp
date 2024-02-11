//Contructors:
set<int> first;  // empty set of ints
int myints[]= {10,20,30,40,50};
set<int> second (myints,myints+5); // range
set<int> third (second); // a copy of second

//Insertion:
st.insert(5); //O(logn)

//Access:
st.find(5) //O(logn) returns the iterator 
auto it = st.lower_bound (30); //O(logn)  //30 thakle 30, na thakle immediate boro
auto it = st.upper_bound (60); //O(logn)  //thakuk na thakuk immediate boro
for (auto it = st.begin(); it != st.end(); it++) cout << ' ' << *it;
for (auto it = st.rbegin(); it!= st.rend(); rit++) cout << ' ' << *it;

//Size:
st.empty(); //O(1) //returns true if the size is 0 //declared with a size er khetre false return korbe
st.size(); //O(1) //returns size

//Deletion:
st.erase (it); //O(1)
st.erase (40); //O(logn)
auto it = myset.find (60);
st.erase (it, st.end()); //O(n)
st.clear(); //O(n) //deletes the set and makes size to 0

//Already Sorted
