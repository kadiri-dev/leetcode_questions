using namespace std;

template <int N>
class Array{
    int *arr;
    public:
        Array(){
            arr = new int[N];
        }

        int* getArray(){
            return arr;
        }

        ~Array(){
            cout<<"Destructor called"<<endl;
            delete []arr;
        }
};
