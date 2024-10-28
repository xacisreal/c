#include <stdio.h>
int main() 
{
int middle, left, right, n, s;
printf("Enter the size of the array: ");
scanf("%d", &s);
int list[s];
printf("Enter the elements of the array in sorted order:\n");
for (int i = 0; i < s; i++) {
scanf("%d", &list[i]);
}
printf("Enter the element to be searched: ");
scanf("%d", &n);
left = 0;
right = s - 1;
while (left <= right) {
middle = left + (right - left) / 2;
if (list[middle] == n) {
printf("The element is found at the position %d\n", middle);
return 0; 
} 
else if (list[middle] > n) 
{
right = middle - 1;
} 
else 
{
left = middle + 1;
}
}
printf("Element not found.\n");
return 0;
}

