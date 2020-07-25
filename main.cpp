#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>
#include <set>

using namespace std;

#pragma region [cmp Algorithm]
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

#pragma region [binary_search Algorithm]
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

#pragma region [Max, Min Elements Algorithm]
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

#pragma region [tuple cmp]
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

long long a[100000];

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a[i] = x;
	}

	sort(a, a + n);

	int ans = a[0];
	int ans_cnt = 1;
	int cnt = 1;

	for (int i = 1; i < n; i++)
	{
		if (a[i] == a[i - 1])
		{
			cnt += 1;
		}
		else
		{
			cnt = 1;
		}

		if (ans_cnt < cnt)
		{
			ans_cnt = cnt;
			ans = a[i];
		}
	}

	cout << ans << endl;

	return 0;
}