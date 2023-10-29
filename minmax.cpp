#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++) {
    int random = rand()%100 + 1;
    arr.push_back(random);
    }

    int min = arr.at(0);
    int max = min;

    for (size_t i = 0; i < 10; i++) {
        cout << arr[i] << " ";
        if (arr[i] < min) {
            min = arr[i];
        }
        else if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << endl;

    cout <<"Min is " << min << endl;
    cout <<"Max is " << max << endl;

    


    return 0;
}
