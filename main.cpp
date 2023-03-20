#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

using vi = vector<int>;
using mivi = map<int, vi>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t; cin >> t;
	while (0 < (t--)) {
		int ne1; cin >> ne1;
		auto e1 = mivi{};
		for (auto i = 0; i < ne1; ++i) {
			int x, y; cin >> x >> y;

			if (e1.end() == e1.find(x)) {
				e1[x] = vi{ y };
			}
			else {
				e1[x].push_back(y);
			}

			if (e1.end() == e1.find(y)) {
				e1[y] = vi{ x };
			}
			else {
				e1[y].push_back(x);
			}
		}

		auto v1s = vi{};
		for (const auto& kv : e1) {
			v1s.push_back(kv.first);
		}
		const auto& nv1 = v1s.size();

		/*for (const auto& kv : e1) {
			cout << kv.first << " : ";
			for (const auto& y : kv.second) {
				cout << y << ' ';
			}
			cout << '\n';
		}*/

		int ne2; cin >> ne2;
		auto e2 = mivi{};
		for (auto i = 0; i < ne2; ++i) {
			int x, y; cin >> x >> y;

			if (e2.end() == e2.find(x)) {
				e2[x] = vi{ y };
			}
			else {
				e2[x].push_back(y);
			}

			if (e2.end() == e2.find(y)) {
				e2[y] = vi{ x };
			}
			else {
				e2[y].push_back(x);
			}
		}

		auto v2s = vi{};
		for (const auto& kv : e2) {
			v2s.push_back(kv.first);
		}
		const auto& nv2 = v2s.size();

		/*for (const auto& kv : e2) {
			cout << kv.first << " : ";
			for (const auto& y : kv.second) {
				cout << y << ' ';
			}
			cout << '\n';
		}*/

		if (nv1 != nv2 ||
			ne1 != ne2) {
			cout << "no\n";
			continue;
		}

		cout << "yes\n";

		//auto isIsoFound = bool{ false };
		//while (next_permutation(v2s.begin(), v2s.end())) {
		//	auto isIso = bool{ true };
		//	for (auto i = 0; i < nv1 && isIso; ++i) {
		//		const auto& x1 = v1s[i];
		//		const auto& x2 = v2s[i];

		//		if (e1[x1].size() != e2[x2].size()) {
		//			isIso = false;
		//			break;
		//		}

		//		for (auto j = 0; j < nv1; ++j) {
		//			if (i == j) {
		//				continue;
		//			}

		//			const auto& y1 = v1s[j];
		//			const auto& y2 = v2s[j];

		//			const auto& x1y1 = e1[x1].end() != find(e1[x1].begin(), e1[x1].end(), y1);
		//			const auto& x2y2 = e2[x2].end() != find(e2[x2].begin(), e2[x2].end(), y2);

		//			if (x1y1 != x2y2) {
		//				isIso = false;
		//				break;
		//			}
		//		}
		//	}

		//	if (isIso) {
		//		/*cout << "v1: ";
		//		for (const auto& x : v1s) {
		//			cout << x << ' ';
		//		}
		//		cout << '\n';
		//		cout << "v2: ";
		//		for (const auto& x : v2s) {
		//			cout << x << ' ';
		//		}
		//		cout << '\n';*/

		//		isIsoFound = true;
		//		cout << "yes\n";
		//		break;
		//	}
		//}

		//if (!isIsoFound) {
		//	cout << "no\n";
		//}
	}

	return 0;
}