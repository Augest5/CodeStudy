#include <iostream>
#include <ctime>
#include <cstdlib>
#define randomInt(a,b) (rand()%(b-a+1)+a)

using namespace std;

int main()
{
    int i, j;

    // 设置种子
    srand((unsigned)time(NULL));

    /* 生成 10 个随机数 */
    for (i = 0; i < 10; i++)
    {
        // 生成实际的随机数
        j = rand();
        cout << "随机数： " << j << endl;
    }

    for (int i = 0; i < 20; i++)
    {
        cout << " 随机数2：" << randomInt(1, 100) << "\n";//求[1-100]之间的随机数
    }
    return 0;
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
