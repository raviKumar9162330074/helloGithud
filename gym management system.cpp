 #include<iostream>

#include<conio.h>

using namespace std;

int main()

 {    

      // Subscribe to MH Computer Academyhttps://www.youtube.com/watch?v=TEggQhBiBVo&t=255s

      // Muhammad Hashmi

 while(true)

 {

      

 int choice , month, bill;

     cout<<"\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

	cout<<"\t\t\t\t\t GYM Management System"<<endl;

	cout<<"\t\t\t\t1. For the Students"<<endl;

	cout<<"\t\t\t\t2. For the Business Man"<<endl;

	cout<<"\t\t\t\t3. For the Employee "<<endl;

	cout<<"\t\t\t\t14. To Exit the Program"<<endl;

	cout<<"\t\t\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

	cin>>choice;

	if(choice==1 || choice==2 || choice==3)

	{

		switch(choice)

		{

			case 1:

				cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

				cout<<"Enter No of Month:";

				cin>>month;

				bill=month*300;// 300 for Student

				cout<<"Your Bill Is:"<<bill<<endl;

				cout<<"Thanks For Joining"<<endl;

				cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

				break;

			case 2:

				

				cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

				cout<<"Enter No of Month:";

				cin>>month;

				bill=month*500; //500 for the employees

				cout<<"Your Bill Is:"<<bill<<endl;

				cout<<"Thanks For Joining"<<endl;

				cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

				break;

				

			case 3:

			

			cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

				cout<<"Enter No of Month:";

				cin>>month;

				bill=month*700;// 700 for business man

				cout<<"Your Bill Is:"<<bill<<endl;

				cout<<"Thanks For Joining"<<endl;

			cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

				break;

		}

	}

	if(choice==4)

	{

		exit(0);

	}

	if(choice>4)

	{

		cout<<"YOu Entered a wrong Value So Please Run the Program Again"<<endl;

	}

}

	getch();

}
