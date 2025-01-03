#include <iostream>
#include <cstdlib> // Для atof и atoi
#include "POINT.cxx" // Подключение локального файла


int main(int argc, char* argv[]) {
    if (argc < 4) {
        std::cerr << "Usage: " << argv[0] << " <N> <d>" << std::endl;
        return 1;
    }

    int N = atoi(argv[1]); // Преобразование первого аргумента в целое число
    float d = atof(argv[2]); // Преобразование второго аргумента в float
    char text = atol(argv[3]);

    if (N <= 0 || d <= 0) {
        std::cerr << "N and d must be positive values." << std::endl;
        return 1;
    }

    POINT* a = new POINT[N]; // Создание массива объектов POINT
    int cnt = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (a[i].distance(a[j]) < d) {
                cnt++;
            }
        }
    }

    std::cout << cnt << " pairs within " << d << std::endl;

    std::cout<< argv[3] << std::endl;

	std::cout<< get_X(a[0]);

    delete[] a; // Освобождение памяти
    return 0;
}
