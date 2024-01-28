#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// Function to calculate waiting time
int calculateWaitingTime(int n, const vector<int> &t)
{
    int waiting_time = 0;
    vector<int> treated(n, 0);

    for (int i = 0; i < n; ++i)
    {
        int t_min = numeric_limits<int>::max();
        int min_index = 0;

        for (int j = 0; j < n; ++j)
        {
            if (treated[j] == 0 && t[j] < t_min)
            {
                t_min = t[j];
                min_index = j;
            }
        }

        waiting_time += (n - 1) * t_min;
        treated[min_index] = 1;
    }

    return waiting_time;
}

int main()
{
    int numPatients;
    cout << "Enter the number of patients in the line: ";
    cin >> numPatients;

    // Input array of 't' values
    vector<int> t(numPatients);
    cout << "Enter the 't' values for each patient:" << endl;
    for (int i = 0; i < numPatients; ++i)
    {
        cout << "Patient " << i + 1 << ": ";
        cin >> t[i];
    }

    int result = calculateWaitingTime(numPatients, t);

    cout << "Waiting Time: " << result << endl;

    return 0;
}
