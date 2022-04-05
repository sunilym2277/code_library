

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int s=0;
  if(gender=='b')
  {
      for(int i=0;i<number_of_students;i++)
      {
          s+=marks[i];
          i++;
      }
  }
  else {
  for(int i=1;i<number_of_students;i++)
      {
          s+=marks[i];
          i++;
      }
  }
  return s;
}

