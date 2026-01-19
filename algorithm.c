//source code
/*todo :
 *rename the variable names.[done]
 *create a struture for 1 class
 *then design the algorithm of the class. */
#include <stdio.h>

struct section{
    int studentIndex[6][3]; //array of 2d arrays
}s[30];

int main(){
    int row,col,class_SectionIndex,classWithStudents;
    printf("enter a value for how many classes: ");
    scanf("%d",&classWithStudents);
    if(classWithStudents>10){
        printf("Currently upto 10 classes are supported. clipping to 10.\n");
        classWithStudents=10;
    }
    else if (classWithStudents<=0){
        printf("minimum value is 1.\n");
        classWithStudents=1;
    }
    else{
        classWithStudents = classWithStudents *3;
    }
    for(class_SectionIndex=0;class_SectionIndex<classWithStudents;class_SectionIndex++){
        for(row=0;row<6;row++){
            for(col=0;col<3;col++){
                s[class_SectionIndex].studentIndex[row][col]=0;
            }
        }
    }
    int p,studentIndex=0, stuCount[300]; //even if we enter 200 kids it would make it into 30 kids each automatially sit on each classWithStudents.
    printf("enter student count: ");
    scanf("%d", &p);
    if(p>300){
        printf("Upto 30 students in 1 classWithStudents. clipping to 30 students.\n");
        p=30;
    }
    else if (p<1){
        printf("minimum value is 1.\n");
        p=1;
    }
    for(row=0;row<p;row++){
        stuCount[row]=0;
        printf("enter roll numbers: ");
        scanf("%d", &stuCount[row]);
    }
    //studentIndex = studentindex
    //now for the algo of matrix
    //first we need to check if a matrix is even or odd. if even then 1 0 1 seating arrangement, else 0 1 0 seating arrangement.
    // we fill the even number first then odd numbers. the number of ones/values is equivalent to the numbers stored in array
    //30 if hardcoded, n if not ahrdcoded
    //to check the studen count bound with the for loops so that it wont go out of bounds
    for (class_SectionIndex = 0; class_SectionIndex < classWithStudents && studentIndex < p; class_SectionIndex++) {

        int seatingPattern = class_SectionIndex % 3;   // reset every 3 columns

        for (row = 5; row >= 0 && studentIndex < p; row--) {
            for (col = 2; col >= 0 && studentIndex < p; col--) {

                //for class_SectionIndex%3 == 0 / 2
                if ((seatingPattern == 0 || seatingPattern == 2) && col % 2 == 0) {
                    s[class_SectionIndex].studentIndex[row][col] = stuCount[studentIndex++];
                }

                //for class_SectionIndex%3 == 1
                else if (seatingPattern == 1 && col % 2 == 1) {
                    s[class_SectionIndex].studentIndex[row][col] = stuCount[studentIndex++];
                }
            }
        }
    }
    printf("====seating arrangement====\n");
    for(class_SectionIndex=0;class_SectionIndex<classWithStudents;class_SectionIndex++){
        if(class_SectionIndex%3==0){
            printf("\n---------------------------------\n");
        }
        printf("col %d : \n", class_SectionIndex+1);
        for(row=0;row<6;row++){
            for(col=0;col<3;col++){
                printf("%4d \t ",s[class_SectionIndex].studentIndex[row][col]);
            }
            printf("\n");
        }
    }
}
