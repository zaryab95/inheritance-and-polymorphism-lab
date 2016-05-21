#include<iostream>
using namespace std;

class music
{
	protected:
		int counter;
		virtual int getTotalCount()=0;
};
class metalband:public music
{
	private:
		int pyro;
		int member;
		int Total;
	
	public:
    	void addPyro();
    	void removePyro();
		void addmember();
		void removemember();
	
		int getpyroCounter();
		int getmemberCounter();
		int gettotalCounter();
		int getCounter()
		{return 1;}

	metalband()
	{
		counter=0;
		pyro=0;
		member=0;
		Total=0;
	}
	
	
	};		
		
	void metalband::addPyro()
	{
	
		pyro++;
		Total++;
		counter=Total;
	}
	void metalband::removePyro()
	{
			pyro--;
			Total--;		
			counter=Total;
	}
	void metalband::addmember()
	{
		
		member++;
		Total++;
		counter=Total;
	}
	void metalband::removemember()
	
	{
		
		member--;
		Total--;
		counter=Total;
	}
	
	int metalband::getpyroCounter()
	
	{
		return pyro;
	}
	int metalband::getmemberCounter()
	
	{
		return member;
	}
	
	int metalband::gettotalCounter()
	
	{
		return Total;
	}
	
class symphony : public music
{
	private:
	
		int conductor;
		int member;
		int total;
		
	public:

	void addConductor();
	void removeconductor();
	void addmember();
	void removemember();
 
	int getConductorcounter();
	int getMemberscounter();
	int getTotalcounter();
	symphony()
{
		counter=0;
		conductor=0;
		member=0;
		total=0;
}

};

void symphony::addConductor()
{
	
	this->conductor+=1;
	this->total+=1;
	counter=total;
}
void symphony::removeconductor()
{
	
	this->conductor-=1;
	this->total-=1;
	counter--;
}
void symphony::addmember()
{
	
	this->member+=1;
	this->total+=1;
	counter=total;
}
void symphony::removemember()
{

	this->member-=1;
	this->total-=1;
	counter--;
}

int symphony::getConductorcounter()
{
	return this->conductor;
}
int symphony::getMemberscounter()
{
	return this->member;
}
int symphony::getTotalcounter()

{
	return counter;
}

int main()
{
	
	metalband m;
	symphony s;
	
	m.addPyro();
	cout<<"\npayro man"<<getm.getpyroCounter()<<endl;
	m.member();
	cout<<"\nmember added"getm.getmembercount()<<end1;
	m.total();
	cout<<"\ntotal members".getm.Totalcounter()<<end1;
	s.addConductor();
	cout<<"\nCnductor added"<<s.getm.conductorcounter()<<end1;
	s.addmember();
	cout<<"\nConductor added"<<s.getm.membercounter()<<end1;
	s.total();
	cout<<"\nTotal Count MetalBand"<<m.getTotalCount()<<endl;

	int z;
	cin >>z;
	return 0;
}

