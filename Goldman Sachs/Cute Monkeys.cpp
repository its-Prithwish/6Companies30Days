 string main;
   char t_var=src[0];
   int t_count=1;
   
   if(src.length()<=1){
       main=t_var+to_string(t_count);
   }
   else{
       for(int i=1;i<src.length();i++){
           if(src[i]==t_var){
               t_count++;
           }
           else{
               main+=t_var+to_string(t_count);
               t_count=1;
               t_var=src[i];
           }
           if(i==src.length()-1){
               main+=t_var+to_string(t_count);
           }
       }
   }
 return main;
