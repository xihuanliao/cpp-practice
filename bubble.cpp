#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "请输入数组长度：";
    cin >> n;

    int arr[100];
    cout << "输入" << n << "个数字：" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // 冒泡核心
    // 一共 n‑1 轮
    for(int i = 0; i < n - 1; i++)
    {
        // 每一轮把大的往后“冒泡”
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                // 交换
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "排序后：";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
