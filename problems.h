using namespace std;

// Problem 1

void delete11(vector<int> &v) {
    for (int i:v) {
        if (i%11 == 0) v.erase(remove(v.begin(), v.end(), i), v.end());
    }
}

// Problem 2

void insertMany ( vector < int > &v , int a , int b )
{
    int size = v.size();
    if (size % 2 == 0) {
        size = size / 2;
    }
    else {
        size = (size + 1) / 2;
    }
    for (int i = 0; i < a; i++)
    {
        v.insert( v.begin() + size, b );
    }
}

// Problem 3

int* allocateAndSet(int a, int b)
{
    int size = b - a + 1;
    if ( a > b ) return NULL;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        *(arr + i) = a;
        ++a;
    }
    return arr;
}
void deallocate(int* arr)
{
    delete[] arr;
    arr = nullptr;
}

// Problem 4

int*reallocate(int *arr, int N, int n)
{
    int newSize = N - n;
    int *newArr = new int[newSize];
    for (int i = 0; i < newSize; i++)
    {
        *(newArr + i) = *(arr + i + n);
    }
    delete[] arr;
    return newArr;
}

// Problem 5

int **transposed(int **arr, int n, int m) {
    int **newArr = new int*[m];
    for (int i = 0; i < m; i++) {
        newArr[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            newArr[j][i] = arr[i][j];
        }
    }

    return newArr;
}
void deallocateMatrix(int**& matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}
