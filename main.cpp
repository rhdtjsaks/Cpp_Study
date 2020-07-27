#pragma region [cmp Algorithm]
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;

//struct Students
//{
//	string name;
//	int kor, eng, math;
//};
//
//bool cmp(const Students& u, Students& v)
//{
//	if (u.kor > v.kor)
//	{
//		return true;
//	}
//	else if (u.kor == v.kor)
//	{
//		if (u.eng < v.eng)
//		{
//			return true;
//		}
//		else if (u.eng == v.eng)
//		{
//			if (u.math > v.math)
//			{
//				return true;
//			}
//			else if (u.math == v.math)
//			{
//				return u.name < v.name;
//			}
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	vector<Students> v(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
//	}
//
//	sort(v.begin(), v.end(), cmp);
//
//	for (auto student : v)
//	{
//		cout << student.name << '\n';
//	}
//
//	return 0;
//}
#pragma endregion

#pragma region [Min, Max]
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;

//int main()
//{
//	vector<int> a = { 1, 2, 3, 4, 5, 6 ,7 };
//
//	auto it_min = min_element(a.begin(), a.end());
//	auto it_max = max_element(a.begin(), a.end());
//
//	cout << "최소: " << *it_min << ", 위치: " << (it_min - a.begin()) << "(Index)" << '\n';
//	cout << "최대: " << *it_max << ", 위치: " << (it_max - a.begin()) << "(Index)" << '\n';
//}
#pragma endregion

#pragma region [binary_search Algorithm]
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;

//int main()
//{
//	int n;
//	cin >> n;
//
//	vector<int> v(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		v[i] = x;
//	}
//
//	sort(v.begin(), v.end());
//
//	int m;
//	cin >> m;
//
//	for (int j = 0; j < m; j++)
//	{
//		int y;
//		cin >> y;
//
//		cout << binary_search(v.begin(), v.end(), y) << ' ';
//	}
//
//	cout << '\n';
//	return 0;
//}
#pragma endregion

#pragma region [tuple cmp]
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <tuple>
//
//using namespace std;

//struct Students
	//{
	//	string name;
	//	int kor, eng, math;
	//};
	//
	//bool cmp(const Students& u, Students& v)
	//{
	//	return make_tuple(-u.kor, u.eng, u.math, u.name) < make_tuple(- v.kor, v.eng, v.math, v.name);
	//}
	//
	//int main()
	//{
	//	int n;
	//	cin >> n;
	//
	//	vector<Students> v(n);
	//	for (int i = 0; i < n; i++)
	//	{
	//		cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
	//	}
	//
	//	sort(v.begin(), v.end(), cmp);
	//
	//	for (auto student : v)
	//	{
	//		cout << student.name << '\n';
	//	}
	//
	//	return 0;
	//}
#pragma endregion

#pragma region  [sort]
//#include <iostream>
//#include <algorithm>
//
//using namespace std;

//long long a[100000];
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		a[i] = x;
//	}
//
//	sort(a, a + n);
//
//	int ans = a[0];
//	int ans_cnt = 1;
//	int cnt = 1;
//
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] == a[i - 1])
//		{
//			cnt += 1;
//		}
//		else
//		{
//			cnt = 1;
//		}
//
//		if (ans_cnt < cnt)
//		{
//			ans_cnt = cnt;
//			ans = a[i];
//		}
//	}
//
//	cout << ans << endl;
//
//	return 0;
//}
#pragma endregion

#pragma region [permutation, duplicatePermutation, combination, duplicateCombination]
//#include <iostream>
//#define n 4
//#define r 3
//
//using namespace std;
//
////순열
//int pArr[r] = { 0, };
//bool check[n + 1] = { false, };
//
//void printArray(int Arr[])
//{
//	for (int i = 0; i < r; i++)
//	{
//		cout << Arr[i] << ' ';
//	}
//	cout << endl;
//}
//
//void permutation(int depth)
//{
//	if (depth == r)
//	{
//		printArray(pArr);
//
//		return;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (!check[i])
//		{
//			check[i] = true;
//			pArr[depth] = i;
//			permutation(depth + 1);
//			check[i] = false;
//		}
//	}
//}
//
////중복 순열
//int dpArr[r] = { 0, };
//
//void duplicatePermutation(int depth)
//{
//	if (depth == r)
//	{
//		printArray(dpArr);
//
//		return;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		dpArr[depth] = i;
//		duplicatePermutation(depth + 1);
//	}
//}
//
////조합
//int cArr[r] = { 0, };
//
//void combination(int depth, int next)
//{
//	if (depth == r)
//	{
//		printArray(cArr);
//
//		return;
//	}
//
//	for (int i = next; i <= n; i++)
//	{
//		cArr[depth] = i;
//		combination(depth + 1, i + 1);
//	}
//}
//
////중복 조합
//int dcArr[r] = { 0, };
//
//void duplicateCombination(int depth, int next)
//{
//	if(depth == r)
//	{
//        printArray(dcArr);
//        return;
//    }
//
//    for(int i = next; i <= n; i++)
//	{
//        dcArr[depth] = i;
//        duplicateCombination(depth + 1, i);
//    }
//}
//
//int main(void)
//{
//	cout << "순열 (순서o, 중복x)" << endl;
//	permutation(0);
//
//	cout << "중복 순열 (순서o, 중복o)" << endl;
//	duplicatePermutation(0);
//
//	cout << "조합 (순서x, 중복x)" << endl;
//	combination(0, 1);
//
//	cout << "중복 조합 (순서x, 중복o)" << endl;
//	duplicateCombination(0, 1);
//
//	return 0;
//}
#pragma endregion

#pragma region [Recursive]
//factorial
//#include <iostream>
//
//using namespace std;
//
//int recursive(int num)
//{
//	if (num <= 1)
//	{
//		return 1;
//	}
//
//	return num * recursive(num - 1);
//}
//
//int main()
//{
//	int num = 5;
//	int result = 0;
//
//	result = recursive(num);
//
//	cout << result << endl;
//
//	return 0;
//}


#pragma endregion

#pragma region [DFS, BFS]
//#include <iostream>
//#include <queue>
//#define MAX 1001
//
//using namespace std;
//
//int connect[MAX][MAX] = { 0, };
//bool visited[MAX] = { false, };
//int n, m, v;
//
//void init()
//{
//   for (int i = 0; i <= 1000; i++)
//   {
//      visited[i] = false;
//   }
//}
//
//void dfs(int node)
//{
//   cout << node << ' ';
//   visited[node] = true;
//
//   for (int i = 1; i <= n; i++)
//   {
//      if (connect[node][i] && !visited[i])
//      {
//         dfs(i);
//      }
//
//      if (i == n)
//      {
//         return;
//      }
//   }
//}
//
//void bfs(int node)
//{
//   queue<int> q;
//
//   q.push(node);
//   visited[node] = true;
//
//   while (!q.empty())
//   {
//      int news = q.front();
//      visited[news] = true;
//      cout << news << ' ';
//      q.pop();
//
//      for (int i = 1; i <= n; i++)
//      {
//         if (connect[news][i] && !visited[i])
//         {
//            visited[i] = true;
//            q.push(i);
//         }
//      }
//   }
//}
//
//int main()
//{
//   cin >> n >> m >> v;
//
//   for (int i = 1; i <= m; i++)
//   {
//      int node1, node2;
//      cin >> node1 >> node2;
//      connect[node1][node2] = 1;
//      connect[node2][node1] = 1;
//   }
//
//   dfs(v);
//   cout << endl;
//
//   init();
//
//   bfs(v);
//   cout << endl;
//
//   return 0;
//}

#pragma endregion

#pragma region [Tree / Baek-1991]
//#include <iostream>
//
//using namespace std;
//
//int cArr[50][2];
//
//void preorder(int node)
//{
//	if (node == -1) return;
//	cout << (char)(node + 'A');
//	preorder(cArr[node][0]);
//	preorder(cArr[node][1]);
//}
//
//void inorder(int node)
//{
//	if (node == -1) return;
//	preorder(cArr[node][0]);
//	cout << (char)(node + 'A');
//	preorder(cArr[node][1]);
//}
//
//void postorder(int node)
//{
//	if (node == -1) return;
//	preorder(cArr[node][0]);
//	preorder(cArr[node][1]);
//	cout << (char)(node + 'A');
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		char c1, c2, c3;
//		cin >> c1 >> c2 >> c3;
//
//		c1 = c1 - 'A';
//
//		if (c2 == '.')
//		{
//			cArr[c1][0] = -1;
//		}
//		else
//		{
//			cArr[c1][0] = c2 - 'A';
//		}
//
//		if (c3 == '.')
//		{
//			cArr[c1][1] = -1;
//		}
//		else
//		{
//			cArr[c1][1] = c3 - 'A';
//		}
//	}
//
//	preorder(0);
//	cout << endl;
//
//	inorder(0);
//	cout << endl;
//
//	postorder(0);
//	cout << endl;
//
//	return 0;
//}

#pragma endregion