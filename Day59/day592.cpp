// Book Allocate Probelm
#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
    int students = 1, pages = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedPages)
        {
            return false; 
        }

        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
        }
    }

    return students <= m;
}

int findPages(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1; 
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, end = sum;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {12, 34, 67, 90}; 
    int m = 2;                          
    int n = arr.size();                 

    Solution ob;
    int ans = ob.findPages(arr, n, m);
    cout << "Minimum number of pages: " << ans << endl;

    return 0;
}
