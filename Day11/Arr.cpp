
#include <iostream>
#include<stack>
using namespace std;

bool isPalindrome_stack(string s)
{
	int length = s.size();

	stack<char> st;

	int i, mid = length / 2;

	for (i = 0; i < mid; i++) {
		st.push(s[i]);
	}


	if (length % 2 != 0) {
		i++;
	}

	char ele;
	// While not the end of the string
	while (s[i] != '\0')
	{
		ele = st.top();
		st.pop();
	
	if (ele != s[i])
		return false;
		i++;
	}

return true;
}

int main()
{
	string s;
  cout<<"Enter a string : ";
  cin>>s;

	if (isPalindrome_stack(s)) {
		cout << "String is Palindrome";
        cout<<endl<<endl;
	}
	else {
		cout << "String is not palindrome";
                cout<<endl<<endl;
        cout<<endl<<endl;

	}

	return 0;
}

