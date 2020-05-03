#include<stdio.h>
int main(){
int i;int grade_point[10];int marks_obtained[10];int credit_points[10];int sum_of_all_credits=0;
double sum_of_cpxgp=0;int total_marks_individual_subject[10];
scanf("%d",&i);//no of subjects
for(int j=0;j<i;++j)
{scanf("%d%d",&marks_obtained[j],&total_marks_individual_subject[j]);}
for(int a=0;a<i;++a)
{
credit_points[a]=(total_marks_individual_subject[a])/50;	 
double cigp=(1.0*marks_obtained[a]/total_marks_individual_subject[a])*100;
if(cigp<=100 && cigp>=80){grade_point[a]=10;}
if(cigp<80 && cigp>=70){grade_point[a]=9;}
if(cigp<70 && cigp>=60){grade_point[a]=8;}
if(cigp<60 && cigp>=55){grade_point[a]=7;}
if(cigp<55 && cigp>=50){grade_point[a]=6;}
if(cigp<50 && cigp>=45){grade_point[a]=5;}
if(cigp<45 && cigp>=40){grade_point[a]=4;}
if(cigp<40 && cigp>=0){grade_point[a]=0;}
sum_of_all_credits=sum_of_all_credits+credit_points[a];
sum_of_cpxgp=sum_of_cpxgp+(1.0*credit_points[a]*grade_point[a]);
}

double cgpa=sum_of_cpxgp/sum_of_all_credits;
printf("%lf",cgpa);
return 0;
}
