void delete11(vector<int> &v) {
    for (int i:v) {
        if (i%11 == 0) v.erase(remove(v.begin(), v.end(), i), v.end());
    }
}

void insertMany(vector <int> &v, int a, int b) {
    int s = v.size();
    if (s%2 ==1) {
       for (int i=0; i<a; i++) {
           v.insert(v.begin()+s/2+1, b);
       }
    } else {
        for (int i=0; i<a; i++) {
            v.insert(v.begin()+s/2, b);
        }
    }
}

int* allocateAndSet(int a, int b) {
    if (a>b) return nullptr;
    int size = b-a+1;
    int* v = new int[size];
    for (int i=a; i<b; i++) {
        v[i-a] = i;}
    return v;
}

void deallocate(int *arr) {
    delete[] arr;
}

int *reallocate(int *arr,int N,int n) {
    int size = N-n;
    int *v = new int[N];
    for (int i=0; i<size; i++) {
        v[i] = arr[i+n];
    }
    return v;
}

int **transposed(int **arr, int n, int m) {
    int **newArr = new int*[m];
    
    
    return newArr;
}
void deallocateMatrix(int**& matrix, int rows) {
    
}

