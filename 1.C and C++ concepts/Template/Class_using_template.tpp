//Template is a feature in c++ that allows writting generic program. It enables a function or class to operate with different data type without rewritting code.
//.tpp file is used to define all the template and thier task.

template <typename T>
Arithmetic<T>::Arithmetic(T a, T b) : a(a), b(b) {}

template <typename T>
T Arithmetic<T>::add() { return a + b; }

template <typename T>
T Arithmetic<T>::sub() { return a - b; }
