#include <iostream>
#include <map>

struct node {
  std::map<char,std::string> trans;
  bool is_accept=false;
};

std::map<std::string,node> all;
int main() {
  char input;
  std::string current_stat;
  int n;
  std::cin>>n;
  for(int i=0;i<n;i++) {
    std::string temp;
    std::cin>>temp;
    node zero;
    all.insert({temp,zero});
  }
  std::string temp;
  std::cin>>temp;
  current_stat=temp;
  int k;
  std::cin>>k;
  for(int i=0;i<k;i++) {
    std::cin>>temp;
    all[temp].is_accept=true;
  }
  int m;
  std::cin>>m;
  for(int i=0;i<m;i++) {
    std::string temp1;
    std::string temp2;
    char temp3;
    std::cin>>temp1>>temp2>>temp3;
    all[temp1].trans.insert({temp3,temp2});
  }
  while(std::cin>>input) {

    if(all[current_stat].trans.count(input)!=0) {
      std::cout<<current_stat<<"->";
      current_stat=all[current_stat].trans[input];
      std::cout<<current_stat<<' '<<input<<std::endl;
    } else {
      current_stat="-1";
      std::cout<<"Dead state"<<std::endl;
      break;
    }
  }
  if(all[current_stat].is_accept) {
    std::cout<<"Accepted"<<std::endl;
  } else {
    std::cout<<"Not Accepted"<<std::endl;
  }
}
