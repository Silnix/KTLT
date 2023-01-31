#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i;
  int max, min, sum = 0;
  char path[100];
  int *array;
  
  printf("Nhap so phan tu mang: ");
  scanf("%d", &n);

  array = (int*)malloc(n * sizeof(int));

  printf("Nhap cac phan tu cua mang: \n");
  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
    sum += array[i];
  }

  max = array[0];
  min = array[0];
  for (i = 1; i < n; i++) {
    if (array[i] > max) {
      max = array[i];
    }
    if (array[i] < min) {
      min = array[i];
    }
  }

  printf("Nhap duong dan tep: ");
  scanf("%s", path);
  
  FILE *file = fopen(path, "w");
  if (file == NULL) {
    printf("Loi khi mo tep!\n");
    exit(1);
  }

  fprintf(file, "Phan tu mang: \n");
  for (i = 0; i < n; i++) {
    fprintf(file, "%d\n", array[i]);
  }
  fprintf(file, "Sum: %d\n", sum);
  fprintf(file, "Max: %d\n", max);
  fprintf(file, "Min: %d\n", min);

  fclose(file);

  file = fopen(path, "r");
  if (file == NULL) {
    printf("Loi khi mo tep!\n");
    exit(1);
  }

  printf("Doc tu tap tin: \n");
  char ch = fgetc(file);
  while (ch != EOF) {
    printf("%c", ch);
    ch = fgetc(file);
  }

  fclose(file);
  free(array);
  
  return 0;
}

