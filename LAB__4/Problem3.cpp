#include<iostream>
#include"Problem1.cpp"
#include<string>

using namespace std;
 
bool ArePair(char opening,char closing)
{
	if(opening== '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}
bool AreParanthesesBalanced(string exp)
{
	Stack  main;
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			main.push(exp[i]);
		else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if(main.empty() || !ArePair(main.top(),exp[i]))
				return false;
			else
				main.pop();
		}
	}
	return main.empty() ? true:false;
}

int main()
{
	 
	string expression;
	 
	cin>>expression;
	if(AreParanthesesBalanced(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
}
