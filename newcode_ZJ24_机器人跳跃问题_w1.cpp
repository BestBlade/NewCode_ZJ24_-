/* ------------------------------------------------------------------|
ʱ�����ƣ�C/C++ 1�룬��������2��

�ռ����ƣ�C/C++ 32M����������64M

������������һ�����ϵĻ���DOS����Ϸ����Ϸ����N+1������������0��N��ţ����������С����Ϊ0�Ľ����߶�Ϊ0����λ�����Ϊi�Ľ����ĸ߶�ΪH(i)����λ��

����� �������ڱ��Ϊ0�Ľ�������ÿһ������������һ�����ұߣ�����������������ڵ�k���������������ڵ�����ֵ��E, ��һ�����������ڸ�k+1������������õ�����ʧȥ��������H(k+1)��E֮������������ H(k+1) > E ��ô�����˾�ʧȥ H(k+1) - E ������ֵ�����������õ� E - H(k+1) ������ֵ��

��ϷĿ���ǵ���ڸ�N����������������У�����ֵ����Ϊ��������λ�����ڵ������ǻ������Զ�������ֵ��ʼ��Ϸ���ſ��Ա�֤�ɹ������Ϸ��

��������:
��һ�����룬��ʾһ���� N ������.

�ڶ����� N ���ո�ָ���������H1, H2, H3, ..., Hn ��������ĸ߶�

�������:
���һ������������ʾ�����Ϸ��������ٵ�λ�ĳ�ʼ����

��������1:
5
3 4 3 2 4

�������1:
4

��������2:
3
4 4 4

�������2:
4

��������3:
3
1 6 4

�������3:
3|
-------------------------------------------------------------------*/

//  ����ʱ�䣺 15 ms
//  ռ���ڴ棺508K

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <stack>
#include <queue>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}

};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

int N;
vector<int> h;

int minEnergy() {
    int Ei = 1;
    for (int i = N - 1; i >= 0; --i) {
        Ei = (Ei + h[i] + 1) / 2;
    }
    return Ei;
}

int main() {
    cin >> N;
    h.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> h[i];
    }
    cout << minEnergy() << endl;
    return 0;
}