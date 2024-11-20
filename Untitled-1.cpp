#include <iostream>
#include <vector>
using namespace std;

//The function Selection_Sort
void Selection_Sort(vector<int>&arr)
{
    int n=arr.size(),i;
    for(i=0li<n-1;i++)
    {
        int minIndex=1;
        for(int j=1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
            if(minIndex!=1)
            {
                swap(arr[i],arr[minIndex]);
            }
        }
    }
}

//main program
int main()
{
    vector(int) arr=[64,25,12,22,11];
    selection_Sort(arr);
    cout<<"classified:";
    for(int num:arr)
    {
        cout<<num<<" ";
    }

    cout<<endl;
    return 0;
}