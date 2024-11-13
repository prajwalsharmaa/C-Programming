#include <stdio.h>
#include <string.h>
// Create a structure called myStructure
struct student {
  int ID;
  char name[50];
  float marks[5];
};

int main() {
  // Create a structure variable of myStructure called s1
  // struct student s1 = {
  //   1,
  //   "Prajwal Sharma",
  //   {45.5,44.5,55,45.5,34.5}
  // };
  // printf("Student ID:%d\n",s1.ID);
  // printf("Student name:%s\n",s1.name);
  // printf("Average marks:%.2f\n",average);


  struct student s2;
  printf("Enter ID of student:");
  scanf("%d",&s2.ID);
  printf("Enter student name:");
  // getchar();
  // fgets(s2.name,sizeof(s2.name),stdin);
  scanf(" %[^\n]%*c",&s2.name);
  for(int j = 0;j <5;j++)
  {
  printf("Enter marks of student 2 for subject %d: ",j+1);
  scanf("%f",&s2.marks[j]);
  }
  float total = 0;
  for(int i = 0;i < 5; i++){
    total += s2.marks[i];
  }
  float average  = total/5;
  printf("Student ID:%d\n",s2.ID);
  printf("Student name:%s\n",s2.name);
  printf("Average marks:%.2f\n",average);
return 0;
}