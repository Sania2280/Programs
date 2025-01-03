#include <iostream>
#include <cstdlib>


int main(int argc ,char* argv[]){
	int arr [10][10];
	int N = atoi (argv[1]);
	std::cout<< N<<std::endl; 

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			 arr[i][j] = 0;
		}
	}

	int count = 0;
   for (int i = 0; i < 10 && count < N; ++i) {
        for (int j = 0; j < 10 && count < N; ++j) {
        	if(i == j)continue;
            arr[i][j] = 1; // Устанавливаем значение
            count++;       // Увеличиваем счётчик
        }
    }

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			std::cout << arr[i][j]<<" ";
		}
		std::cout << std::endl;
	}
}