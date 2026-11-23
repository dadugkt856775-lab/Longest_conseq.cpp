#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int current = 1, longest = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1] + 1)
            current++;
        else
            current = 1;

        if (current > longest)
            longest = current;
    }

    cout << "Longest consecutive sequence length = "
         << longest << endl;

    return 0;
}
