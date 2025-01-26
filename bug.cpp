std::vector<int> vec = {1, 2, 3};
int* ptr = vec.data();
// ... some operations ...
vec.push_back(4); // Invalidates ptr
*ptr = 10; // undefined behavior