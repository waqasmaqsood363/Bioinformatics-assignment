#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
//Waqas Maqsood
//2016531

int main () {
  string line;
  int n;
  string subseq;
  string sequence_name;
  int k = 5;
  ifstream myfile ("seq2.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    	
    	n=line.length();
    	if (line[0] == '>')
    	{
    		 sequence_name = line.substr(1, n-1);
    		 cout<<sequence_name<<endl;
		}
    	else
    	{
    		cout<<"length of seq:"<<n<<endl;
	    	for (int i=0; i<n-k+1; i++)
	    	{
	    	subseq = line.substr(i, k);
	    	
	    	std::ofstream myfilein;
	    	myfilein.open("test.txt", std::ios_base::app);
	    	
	
	  		if (myfilein.is_open())
	  		{
	    	myfilein <<sequence_name<<": "<<subseq<<endl;
	  		}
	  		else cout << "Unable to open file";
	  
	  
			cout <<subseq<<endl;	
		}
		}
      	
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}}
