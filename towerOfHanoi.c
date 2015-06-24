#include<stdio.h>
void TOH(int, char, char, char);
int main()
{
  int n;
  char a,b,c;
  printf("Enter the no of disks in TOH puzzle");
  scanf("%d",&n);
  printf("Enter the source, destination, auxiliary disks(eg. A B C)");
  scanf("%c %c %c",&a,&b,&c);
  TOH(n,a,b,c);
  return 0;
  }
  void TOH(int disk, char source_disk, char dest_disk, char aux_disk)
  {
    if(disk == 1)
    {
      printf("%c --> %c",&source_disk,&dest_disk);
      return;
    }
    //move n-1 disks to aux_tower
    TOH(disk-1,source_disk,aux_disk,dest_disk);
    printf("%c --> %c",&source_disk,&dest_disk");
    TOH(disk-1,aux_disk,dest_disk,source_disk);
  }
