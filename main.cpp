#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <vector>

// int main() {
//     srand(time(NULL));
//     double start = -15 + (35 + 15) * (rand() / (double)RAND_MAX);

//     std::vector<double> temp_vec;
//     temp_vec.push_back(start);
//     const double mn = -3.0;
//     const double mx = 3.0;
//     for (int i = 0; i < 31; i++) {
//         double pogr = mn + (mx - mn) * (rand() / (double)RAND_MAX);
//         temp_vec.push_back(temp_vec.back() + pogr);
//     }
//     int i = 1;
//     for (auto &token : temp_vec) {
//         std::cout << std::fixed << std::setprecision(1);
//         std::cout <<"Температура в день "<< i++<<" " << token <<"°C" <<std::endl;
    // }
// }

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int xyi = 1234567;
int xi = 123456787654321;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(){
    int m[] = {3, 7, 4, -5, 1, 2};
    quickSort(m, 0, 2);
    for(auto &x: m){
        std::cout << x << " ";
    }
    std::cout << 54353453452;
}
