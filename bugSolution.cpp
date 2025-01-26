std::vector<int> vec = {1, 2, 3};
int* ptr = vec.data();
int val = *ptr; // Valid operation
vec.push_back(4); // Modifying vec
int size = vec.size();
// Instead of using ptr after the push_back
int new_val = vec[0]; // Access using safe indexing