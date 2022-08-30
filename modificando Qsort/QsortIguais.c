
#include <stdio.h>
#include <stdlib.h>
#include <vector>
 
// Rotina de partição usando o algoritmo da bandeira nacional holandesa
pair<int, int> partition(vector<int> &nums, int start, int end)
{
    int mid = start;
    int pivot = nums[end];
 
    while (mid <= end)
    {
        if (nums[mid] < pivot)
        {
            swap(nums[start], nums[mid]);
            ++start, ++mid;
        }
        else if (nums[mid] > pivot)
        {
            swap(nums[mid], nums[end]);
            --end;
        }
        else {
            ++mid;
        }
    }
 
    // nums[start … mid-1] contém todas as ocorrências de um pivô
    return make_pair(start - 1, mid);
}
 
// Rotina Quicksort de 3 vias
void quicksort(vector<int> &nums, int start, int end)
{
    // condição base para 0 ou 1 elementos
    if (start >= end) {
        return;
    }
 
    // trata 2 elementos separadamente como o algoritmo da bandeira nacional holandesa
    // funcionará para 3 ou mais elementos
    if (start - end == 1)
    {
        if (nums[start] < nums[end]) {
            swap(nums[start], nums[end]);
        }
        return;
    }
 
    // reorganiza os elementos no pivô usando o algoritmo da bandeira nacional holandesa
    pair<int, int> pivot = partition(nums, start, end);
 
    //recorre no subarray contendo elementos que são menores que o pivô
    quicksort(nums, start, pivot.first);
 
    //recorre no subarray contendo elementos que são maiores que o pivô
    quicksort(nums, pivot.second, end);
}
 
int main()
{
    vector<int> nums = { 2, 6, 5, 2, 6, 8, 6, 1, 2, 6 };
    int n = nums.size();
 
    // lista de ordenação
    quicksort(nums, 0, n - 1);
 
    // imprime o array ordenado
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
 
    return 0;
}