//Contructors:                               
priority_queue<int> pq;      // empty priority queue for int as MAX HEAP
priority_queue<int,vector<int>,greater<int>> pq;     //MIN HEAP

//Insertion:
pq.push(5); //O(1)

//Access:
pq.top() //O(1) returns the first element

//Size:
pq.empty(); //O(1) //returns true if the size is 0 //declared with a size er khetre false return korbe
pq.size(); //O(1) //returns the size

//Deletion:
pq.pop(); //O(1) //deletes last element
