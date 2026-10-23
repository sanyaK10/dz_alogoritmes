#include <iostream>
using namespace std;
int main()
{
    //number 1
    const int SIZE = 5;
    string names[SIZE] = {
        "Ivan",
        "Petro",
        "Oleg",
        "Anna",
        "Maria"
    };
    string mobile[SIZE] = {
        "0671111111",
        "0932222222",
        "0503333333",
        "0974444444",
        "0635555555"
    };
    string home[SIZE] = {
        "481111111",
        "482222222",
        "483333333",
        "484444444",
        "485555555"
    };
    int choice;
    do {
        cout << "\n1 - Sort by mobile numbers";
        cout << "\n2 - Sort by home numbers";
        cout << "\n3 - Show users";
        cout << "\n4 - Exit";
        cout << "\nEnter: ";
        cin >> choice;
        if (choice == 1) {
            for (int i = 0; i < SIZE - 1; i++) {
                for (int j = 0; j < SIZE - 1 - i; j++) {
                    if (mobile[j] > mobile[j + 1]) {
                        swap(mobile[j], mobile[j + 1]);
                        swap(home[j], home[j + 1]);
                        swap(names[j], names[j + 1]);
                    }
                }
            }
            cout << "Sorted by mobile numbers!\n";
        }
        else if (choice == 2) {
            for (int i = 0; i < SIZE - 1; i++) {
                for (int j = 0; j < SIZE - 1 - i; j++) {
                    if (home[j] > home[j + 1]) {
                        swap(home[j], home[j + 1]);
                        swap(mobile[j], mobile[j + 1]);
                        swap(names[j], names[j + 1]);
                    }
                }
            }
            cout << "Sorted by home numbers!\n";
        }
        else if (choice == 3) {
            cout << "\nUsers:\n";

            for (int i = 0; i < SIZE; i++) {
                cout << names[i] << " | Mobile: "
                    << mobile[i] << " | Home: "
                    << home[i] << endl;
            }
        }
    } while (choice != 4);
    return 0;

    //number 2
    //const int SIZE = 5;
    //int arr[SIZE] = { 1, 2, 3, 5, 4 };
    //for (int i = 0; i < SIZE - 1; i++) {
    //    int count = 0;
    //    for (int j = 0; j < SIZE - 1 - i; j++) {
    //        if (arr[j] > arr[j + 1]) {
    //            swap(arr[j], arr[j + 1]);
    //            count++;
    //        }
    //    }
    //    if (count == 0) {
    //        break;
    //    }
    //}
    //cout << "Sorted array: ";
    //for (int i = 0; i < SIZE; i++) {
    //    cout << arr[i] << " ";
    //}
    //return 0;




    //number 2
    //const int SIZE = 5;
    //int arr[SIZE] = { 3, 1, 5, 2, 4 };
    //for (int i = 0; i < SIZE; i++) {
    //    int max = i;
    //    for (int j = i + 1; j < SIZE; j++) {
    //        if (arr[j] > arr[max]) {
    //            max = j;
    //        }
    //    }
    //    if (max != i) {
    //        int left = i;
    //        int right = max;
    //        while (left < right) {
    //            swap(arr[left], arr[right]);
    //            left++;
    //            right--;
    //        }
    //    }
    //}
    //cout << "Sorted pancakes: ";
    //for (int i = 0; i < SIZE; i++) {
    //    cout << arr[i] << " ";
    //}
    //return 0;
}
