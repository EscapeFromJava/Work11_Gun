#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	double x, y, R, result;
	cout << "Введите параметры R, x, y: " << endl;
	cin >> R >> x >> y;
	if (x < -10 || x > 10 || y < 0 || y >= R || R > 10) {
		cout << "Параметры введены неверно" << endl;
		return 0;
	}
	result = x / 3 * 2;
	cout << "Расстояние по прямой линии от оси OY до точки удара шарика о стену: " << result << endl;
	return 0;
}