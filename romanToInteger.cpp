int romanToInt(string s) 
{
    //map to add value to each roman numeral
    unordered_map<char, int> T = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
    //sum = the value of the last roman numeral in the string                               
   int sum = T[s.back()];
    //loop backwards through string 
   for (int i = s.length() - 2; i >= 0; --i) 
   {
       //if the value of previous roman numeral is less than the one in front
       if (T[s[i]] < T[s[i + 1]])
       {
           //we subtract from sum
           sum -= T[s[i]];
       }
       else
       {
           //we add to sum
           sum += T[s[i]];
       }
   }
   
   return sum;
}
