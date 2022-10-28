#include<iostream>
#include<fstream>
#include<string.h>
//#include <opencv2/opencv.hpp>
//#include<cstdio>
#include<stack>
using namespace std;

struct node
{
    int data;
    node *next;
};
int id_1;
class details
{
	private:
		char name[40],problem[100],process[20];
		int house_id;
    public:
    	void get()
    	{
    		cout<<"enter your name:\n";
    		cin>>name;
    		cout<<"enter your house id:\n";
    		cin>>house_id;
    		cout<<"enter your house problem:\n";
    		cin>>problem;
    		strcpy(process,"on process");
    		cout<<"sorry for incovience your problem will be resolved soon :)";
		}
		void put()
		{
			cout<<"\n"<<name<<"\t"<<house_id<<"\t"<<problem<<"\t";
	}
		

};

class linked_list:public details
{
    private:
    	 node *head,*tail;
    public:
   
     linked_list()
    {
        head=NULL;
        tail=NULL;
    }
   void add_data(int x)
    {
        node *tmp=new node;
        tmp->data=x;
        tmp->next=NULL;
        if(head==NULL)
        {
            head=tmp;
            tail=tmp;
        }
        else
        {
            tail->next=tmp;
            tail=tail->next;
            
        }
    }
    void insert_front(int x)
    {
    	
        node *tmp=new node;
        tmp->data=x;
        tmp->next=head;
        head=tmp;
    }
    void insert_end(int x)
    {
        node *tmp=new node;
        tmp->data=x;
        tmp->next=NULL;
        tail->next=tmp;
        tail=tail->next;
    }
   void insert_middle(int x,int y)
    {
        node *tmp=new node;
        tmp->data=y;
        node *tmp1=head;
        while(1)
        {
            if(tmp1->data==x)
            {
                tmp->next=tmp1->next;
                tmp1->next=tmp;
                break;
            }
            else
            {
                tmp1=tmp1->next;
            }
        }
        
    }
     void form()
    {
    	if(head==NULL){
	
    	add_data(101);
    	add_data(103);
    	add_data(105);
    	add_data(109);
    	add_data(111);
    }
    	
	}
    
    
   void display()
    {
        node *tmp=new node;
        tmp=head;
        
        while(tmp!=NULL)
        {
            cout<<tmp->data;
                tmp=tmp->next;
                cout<<"\n";
            
        }
    }
    int compare(int x)
		{
			node *tmp=new node;
            tmp=head;
        
        while(tmp!=NULL)
        {
            if(tmp->data==x)
            {
            	return 1;
			}
			else
			{
			
                tmp=tmp->next;
               
            }
		}
	}
    void check(int x)
    {
    	
    	node *tmp=new node;
       	form();
        tmp=head;
    	
    	while(1)
    	{
		
    	if(x==tmp->data)
    	{
    		cout<<"you are the registered user to raise the complaint";
    		break;
		}
		else if(tmp->next!=NULL)
		{
			tmp=tmp->next;
		}
		else
		{
			cout<<"sorry you are not the registered user to complaint";
			return;
		}
	}
	}
};

class complaints:public linked_list
{
    private:
     int key,id,loggers,complaints,login_1,id_1,choice,registration_number,home_id,options,house_id,house_position;
     float ph;
     string uname1,admin_name,uname,password1,password,department,ans,date,user_home_id;
     char user_complaints[100],response[10],choice_1[20];;
    
    public:
   void status()
    {
    	fstream obj2,obj3,obj4,obj5;
                		obj2.open("drainage_problem.txt");
            while(obj2)
            {
            if (!obj2) {
		cout << "No such file";
		break;
	             }
				else
				{
					
				   details j;
				    obj2.read((char *)&j,sizeof(j));;
					while(!obj2.eof())
					{
					//obj2>>complaints_1;
				
				    j.put();
				    obj2.read((char *)&j,sizeof(j));;
				}
				 } 
                	
						
					}
                obj3.open("drinking_water_problem.txt");
            while(obj3)
            {
            if (!obj3) {
		cout << "No such file";
		break;
	             }
				else
				{
					
				   details j;
				    obj3.read((char *)&j,sizeof(j));;
					while(!obj3.eof())
					{
					//obj2>>complaints_1;
				
				    j.put();
				    obj3.read((char *)&j,sizeof(j));;
				}
				 } 
                	
						
					}
					obj4.open("dustbin_problem.txt");
            while(obj4)
            {
            if (!obj4) {
		cout << "No such file";
		break;
	             }
				else
				{
					
				   details j;
				    obj4.read((char *)&j,sizeof(j));;
					while(!obj4.eof())
					{
					//obj2>>complaints_1;
				
				    j.put();
				    obj4.read((char *)&j,sizeof(j));;
				}
				 } 
                	
						
					}
					obj5.open("electricity_problem.txt");
            while(obj5)
            {
            if (!obj5) {
		cout << "No such file";
		break;
	             }
				else
				{
					
				   details j;
				    obj5.read((char *)&j,sizeof(j));;
					while(!obj5.eof())
					{
					//obj2>>complaints_1;
				
				    j.put();
				    obj5.read((char *)&j,sizeof(j));;
				}
				 } 
                	
						
					}
                	return ;
	} 
	
	void new_member1(linked_list *s1)
	{
		cout<<"\t\t\twelcome to the panchayat approval\n";
    	cout<<"enter the ph value of the soil";
    	// the ph value of the soil which shows the acidity of the soil if the ph value of the soil is greater than 6.5 its good for agriculture;
    	cin>>ph;
    	if(ph>6.5)
    	{
    		cout<<"sorry your ph is above 6.5 your soil is good for agriculture we cannot able to give the approval for your house:\n";
    		cout<<"\n  \t\t\t\t save agriculture :)   :";
		}
		else if(ph<6.5)
		{
			cout<<"your ph value of the soil is preety good for bulding\n";
			cout<<"we will send our team withinin two days to test your soil\n";
			cout<<"enter your land registration number:";
			cin>>registration_number;
		//	team();
			cout<<"your document is approved:";
			house_id=house_id+5;
			cout<<"your house id is "<<house_id<<"\n";
		
			cout<<"\t\t\tmenu:\n";
			cout<<"1. current house in the street\n";
            cout<<"2. to insert your house in the front:\n";
			cout<<"3.to insert your house in the last:\n";
			cout<<"4.to insert your house in the middle:\n";
			cin>>options;
		    house_id++;
				if(options==1)
				{
					s1->display();
				}
				else if(options==2)
				{
					s1->insert_front(house_id);
					cout<<"passed";
				}
				else if(options==3)
				{
					s1->insert_end(house_id); 
				}
				else if(options==4)
				{
					cout<<"enter your before house id:";
					cin>>home_id;
					s1->insert_middle(home_id,house_id);
				}
		}
		cout<<"do you want to continue";
		cin>>response;
		if(strcmp(response,"YES")==0)
		{
			new_member1(s1);
		}
	}
	stack<int> report;
	stack<int>report_1;
	void calc_Electricity(int unit){
	
	int id_2;
	cout<<"enter our house id:";
	cin>>id_2;
	
    int amount;
    if(unit<=50)
    {
        amount=unit*1.50;

    }
    else if(unit<=150)
    {//below 150 units
        amount=((50*1.5)+(unit-50)*2.00);
    }
    else if((unit<=250)){
        amount=(50*1.5)+((150-50)*2.00)+(unit-150)*3.00;
    }
    else{
        amount=(50*1.5)+((150-50)*2.00)+((250-150)*3.00)+(unit-250)*4;
     
    }
    cout<<"Electricity bill = Rs."<<amount<<"\n";
    
   report.push(amount);
  report_1.push(id_2);
 
 // cout<<top_1;
    
}
	
	
    void new_member()
    {
    	linked_list s1;
	    s1.form();
    	cout<<"\t\t\twelcome to the panchayat approval\n";
    	cout<<"enter the ph value of the soil";
    	// the ph value of the soil which shows the acidity of the soil if the ph value of the soil is greater than 6.5 its good for agriculture;
    	cin>>ph;
    	if(ph>6.5)
    	{
    		cout<<"sorry your ph is above 6.5 your soil is good for agriculture we cannot able to give the approval for your house:\n";
    		cout<<"\n  \t\t\t\t save agriculture :)   :";
		}
		else if(ph<6.5)
		{
			cout<<"your ph value of the soil is preety good for bulding\n";
			cout<<"we will send our team withinin two days to test your soil\n";
			cout<<"enter your land registration number:";
			cin>>registration_number;
		//	team();
			cout<<"your document is approved:";
			house_id=house_id+5;
			cout<<"your house id is "<<house_id<<"\n";
		
			cout<<"\t\t\tmenu:\n";
			cout<<"1. current house in the street\n";
            cout<<"2. to insert your house in the front:\n";
			cout<<"3.to insert your house in the last:\n";
			cout<<"4.to insert your house in the middle:\n";
			cin>>options;
				if(options==1)
				{
					s1.display();
				}
				else if(options==2)
				{
					s1.insert_front(house_id);
				}
				else if(options==3)
				{
					s1.insert_end(house_id); 
				}
				else if(options==4)
				{
					cout<<"enter your before house id:";
					cin>>home_id;
					s1.insert_middle(home_id,house_id);
				}
		}
		cout<<"do you want to continue";
		cin>>response;
		if(strcmp(response,"YES")==0)
		{
			new_member1(&s1);
		}
	}
	
	
	void functions_1()
    {
        cout<<"\t\t\twelcome to online administration --abdul kalam street\n";
        cout<<"\t\t1.please enter 1 to login\n";
        cout<<"\t\t2.please enter 2 to view the status\n";
        cout<<"\t\t3.please enter 3 to exit\n";
        cout<<"\t\t\t";
        cin>>key;
        switch(key)
        {
            case 1:
               login();
               break;
            case 2:
            	status();
            	break;
            case 3:
            return ;
        }
        
    }
    void login()
    {
        cout<<"please enter 1 for admin\n";
        cout<<"please enter 2 for user\n";
        cin>>loggers;
        if(loggers==1)
        {
        	
            cout<<"enter the username:";
            cin>>admin_name;
            cout<<"enter your password:";
            cin>>password;
            cout<<"enter your department:";
            cin>>department;
            if(department=="drainage")
            {
			
            fstream obj1;
            obj1.open("drainage.txt",ios::in);
            while(obj1)
            {
            if (!obj1) {
		cout << "No such file";
		break;
	}
	
	 else
	 {
		string uname1;

		while (1) {
			obj1 >> uname1;
			obj1>>password1;
			if (obj1.eof())
				break;
            while(uname1==admin_name)
            {
                while(password==password1)
                {
                	cout<<"\t\t\twelcome to the drinking_water department:\n";
                	cout<<"\t\t\tlogin success\n";
                	cout<<"As the admin you can see the user compalints:\n";
                	cout<<"please enter 1 to see the drainage complaints:\n";
                	cout<<"please enter 2 to exit\n";
                	cin>>choice;
                	if(choice==1)
                	{
                		fstream obj2;
                		obj2.open("drainage_problem.txt");
            while(obj2)
            {
            if (!obj2) {
		cout << "No such file";
		break;
	             }
				else
				{
					
				   details j;
				    obj2.read((char *)&j,sizeof(j));;
					while(!obj2.eof())
					{
					//obj2>>complaints_1;
				
				    j.put();
				    obj2.read((char *)&j,sizeof(j));;
				}
				 } 
                	
						
					}
                
                	return ;
			}
				else
				{
					return;
				}
				break;
			}
			
		}   
        }
       
    }
    }
}
            else if(department=="dustbin")
            {
			
            fstream obj1;
            obj1.open("dustbin.txt",ios::in);
            while(obj1)
            {
            if (!obj1) {
		cout << "No such file";
		break;
	}
	 else
	 {
		string uname1;

		while (1) {
			obj1 >> uname1;
			obj1>>password1;
			if (obj1.eof())
				break;
            while(uname1==admin_name)
            {
                while(password==password1)
                {
                	cout<<"\t\t\twelcome to the dustbin department:\n";
                	cout<<"\t\t\tlogin success\n";
                	cout<<"As the admin you can see the user compalints\n";
                	cout<<"please enter 1 to see the dustbin complaints\n";
                	cout<<"please enter 2 to exit\n";
                	cin>>choice;
                	if(choice==1)
                	{
                		
            
                		fstream obj2;
                		obj2.open("dustbin_problem.txt",ios::in);
             while(obj2)
            {
            if (!obj2) {
		cout << "No such file";
		break;
	             }
				else
				{
					
				   details j;
				    obj2.read((char *)&j,sizeof(j));;
					while(!obj2.eof())
					{
					//obj2>>complaints_1;
				
				    j.put();
				    obj2.read((char *)&j,sizeof(j));;
				}
				 } 
                	
						
					}
                	
						
					}
                
                	return ;
				}
	
				break;
			}
			
		}   
        }
       
    }
    }

         else  if(department=="drinking_water")
            {
			
            fstream obj1;
            obj1.open("drinking_water.txt",ios::in);
            while(obj1)
            {
            if (!obj1) {
		cout << "No such file";
		break;
	}
	 else
	 {
		string uname1;

		while (1) {
			obj1 >> uname1;
			obj1>>password1;
			if (obj1.eof())
				break;
            while(uname1==admin_name)
            {
                while(password==password1)
                {
                	cout<<"\t\t\twelcome to the drinking water department:\n";
                	cout<<"\t\t\tlogin success\n";
                	cout<<"As the admin you can see the user compalints\n";
                	cout<<"please enter 1 to see the dustbin complaints\n";
                	cout<<"please enter 2 to exit\n";
                	cin>>choice;
                	if(choice==1)
                	{
                		
            
                		fstream obj2;
                		obj2.open("drinking_water_problem.txt",ios::in);
             while(obj2)
            {
            if (!obj2) {
		cout << "No such file";
		break;
	             }
				else
				{
					
				   details j;
				    obj2.read((char *)&j,sizeof(j));;
					while(!obj2.eof())
					{
					//obj2>>complaints_1;
				
				    j.put();
				    obj2.read((char *)&j,sizeof(j));;
				}
				 } 
                	
						
					}
                	
						
					}
                
                	return ;
				}
	
				break;
			}
			
		} 
       
    }
    }
}
          else  if(department=="electricity")
            {
			
            fstream obj1;
            obj1.open("electricty.txt",ios::in);
            while(obj1)
            {
            if (!obj1) {
		cout << "No such file";
		break;
	}
	 else
	 {
		string uname1;

		while (1) {
			obj1 >> uname1;
			obj1>>password1;
			if (obj1.eof())
				break;
            while(uname1==admin_name)
            {
                while(password==password1)
                {
                	cout<<"\t\t\twelcome to the electricty department:\n";
                	cout<<"\t\t\tlogin success\n";
                	cout<<"As the admin you can see the user compalints\n";
                	cout<<"please enter 1 to see the electricity complaints\n";
                	cout<<"please enter 2 to exit\n";
                	cout<<"please enter 3 to see the electricty bill checkers:\n";
        
                	cin>>choice;
                	if(choice==1)
                	{
                		
            
                		fstream obj2;
                		obj2.open("electricity_problem.txt",ios::in);
             while(obj2)
            {
            if (!obj2) {
		cout << "No such file";
		break;
	             }
				else
				{
					
				   details j;
				    obj2.read((char *)&j,sizeof(j));;
					while(!obj2.eof())
					{
					//obj2>>complaints_1;
				
				    j.put();
				    obj2.read((char *)&j,sizeof(j));;
				}
				 } 
                	
						
					}
                	
						
					}
					else if(choice==3)
					{
					while(!report.empty()) {
    cout << report.top() << ", ";
    cout<<report_1.top() <<"\n";
    report.pop();
    report_1.pop();
	  }
					}
                
                	return ;
				}
	
				break;
			}
			
		} 
       
    }
    }
}
}

else if(loggers==2)
{

	
	linked_list s1;
	s1.form();
	do
	{
	
	cout<<"\t\t\t\t user online complaint center \n";
	cout<<"please enter 1 to view the current houses in the street:\n";
	cout<<"please enter 2 to raise the complaint:\n";
	cout<<"please enter 3 if a new user built the new house:\n";
	cout<<"please enter 5 if a user need to find by his elctricity bill:\n";
	cout<<"please enter 6 if its a emergency:\n";
	cout<<"please enter 7 for exit:\n";
	cin>>login_1;
	if(login_1==1)
	{
		s1.display();
	}
	else if(login_1==2)
	{
		cout<<"\t\t enter your house id:\n";
		cin>>id;
    	check(id);
    
    	cout<<"enter the department you want to complaint:\n";
    	cout<<"please enter 1 for complaing the drainage department:\n";
    	cout<<"please enter 2 for complaining the drinking water problem:\n";
    	cout<<"please enter 3 for complaining the dustbin department:\n";
	    cout<<"please enter 4 for complaining the elctricity problem:\n";
		cin>>complaints;
		if(complaints==1)
		{
			details s;
			s.get();
			fstream sub;
			sub.open("drainage_problem.txt",ios::app|ios::in);
			sub.write((char *)&s,sizeof(details));
			sub.close();
			
		}
		else if(complaints==2)
		{
			details s;
			s.get();
			fstream sub;
			sub.open("drinking_water_problem.txt",ios::app|ios::in);
			sub.write((char *)&s,sizeof(details));
			sub.close();

		}
		else if(complaints==3)
		{
			details s;
			s.get();
			fstream sub;
			sub.open("dustbin_problem.txt",ios::app|ios::in);
			sub.write((char *)&s,sizeof(details));
			sub.close();
			
		}
		else if(complaints==4)
		{
			details s;
			s.get();
			fstream sub;
			sub.open("electricity_problem.txt",ios::app|ios::in);
			sub.write((char *)&s,sizeof(details));
			sub.close();
			
		}
	
}
	else if(login_1==3)
	{
		cout<<"\t\t\twelcome to the new member in the kalam street\n";
		new_member();
	}
	
	else if(login_1==5)
	{
	
    int unit=0;

    cout<<"Enter total number of units consumed: ";
    cin>>unit;
    calc_Electricity(unit);//call the function to produced output
    
}
else if(login_1==6)
{
	cout<<"ambulance "<<"\t"<<108<<"\n";
	cout<<"police "<<"\t"<<100<<"\n";
	cout<<"fire service"<<"\t"<<101<<"\n";
	cout<<"earthquake helpline"<<"\t"<<1092<<"\n";
}
else if(login_1==7)
{
	return ;
}
int x;
   cout<<"do you need to go to main page:(1/0)";
   cin>>x;
   if(x==1)
   {
   	   login();
   }
	
	cout<<"do you want to continue:(YES/NO)"<<"\n";
	cin>>choice_1;
}  while(strcmp(choice_1,"YES")!=1);
	
}
}
   

};
int main()
{
    complaints objects;
    objects.functions_1();
    
}