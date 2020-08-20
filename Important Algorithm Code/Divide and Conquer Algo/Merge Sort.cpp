/* Algorithm
MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:
             middle m = (l+r)/2
     2. Call mergeSort for first half:
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> left, vector<int> right);

vector<int> mergeSort(vector<int> v)
{
    if (v.size() <= 1)
    {
        return v;
    }
    vector<int> left, right, result;
    int middle = (v.size() + 1) / 2;

    for (int i = 0; i < middle; i++)
    {
        left.push_back(v[i]);
    }

    for (int i = middle; i < v.size(); i++)
    {
        right.push_back(v[i]);
    }

    left = mergeSort(left);
    right = mergeSort(right);
    result = merge(left, right);

    return result;
}

vector<int> merge(vector<int> left, vector<int> right)
{
    vector<int> result;

    while (left.size() > 0 || right.size() > 0)
    {
        if (left.size() > 0 && right.size() > 0)
        {
            if (left.front() <= right.front())
            {
                result.push_back(left.front());
                left.erase(left.begin());
            }
            else
            {
                result.push_back(right.front());
                right.erase(right.begin());
            }
        }
        else if (left.size() > 0)
        {
            for (int i = 0; i < left.size(); i++)
            {
                result.push_back(left.front());
                left.erase(left.begin());
            }
        }
        else if (right.size() > 0)
        {
            for (int i = 0; i < right.size(); i++)
            {
                result.push_back(right.front());
                right.erase(right.begin());
            }
        }
    }
    return result;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}
int main()
{
    vector<int> v, r;

    v.push_back(38);
    v.push_back(27);
    v.push_back(43);
    v.push_back(3);
    v.push_back(9);
    v.push_back(82);
    v.push_back(10);
    v.push_back(9);
    v.push_back(82);
    v.push_back(10);

    print(v);
    cout << "Sorted: ";

    r = mergeSort(v);

    print(r);
    return 0;
}
