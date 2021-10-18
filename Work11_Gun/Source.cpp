#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	double x, y, R, k, result;
	cout << "Введите параметры R, x, y: " << endl;
	cin >> R >> x >> y;
	if (x < -10 || x > 10 || y < 0 || y >= R || R > 10) {
		cout << "Параметры введены неверно" << endl;
		return 0;
	}
	k = R / (R - y); //коэффициент подобия
	result = k * (x / (k + 1));
	cout << "Расстояние по прямой линии от оси OY до точки удара шарика о стену: " << result << endl;
	return 0;
}