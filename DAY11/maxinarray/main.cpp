#include <iostream>

using namespace std;

int main()
{
    int arr[20] = {5,8,2,3,12};
    int max = arr[0];
    for(int i = 0; i<5 ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<max;
    return 0;
}
