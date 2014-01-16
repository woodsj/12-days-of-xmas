// weird song is weird
#include <iostream>

int main(){
  std::string day[] = { "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth" };
  std::string gift[] = { "A partridge in a pear tree!", "Two turtle doves, and", "Three French hens", "Four calling birds", "Five gold rings", "Six pipers piping",
  					  "Seven swans a-swimming", "Eight maids a-milking", "Nine lords a-leaping", "Ten ladies dancing", "Eleven burgers burging", "Twelve drummers drumming" };
  int d=0, g=0;
  
  for(d=0; d<12; d++){
  	std::cout << "On the " << day[d] << " day of Christmas my true love gave to me:" << std::endl;
  	for(g=d; g>=0; g--){
  		std::cout << gift[g] << std::endl;
  	}
  }  					  
}
