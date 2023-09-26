#include <iostream>
#include <string>

using namespace std;

float addition(float x , float y  )
{
    float num_add = 0 ;
    num_add = x + y ;
    return num_add ;
}
float subtraction(float x , float y  )
{
    float num_sub = 0 ;
    num_sub = x - y ;
    return num_sub ;
}
float multiplication(float x , float y  )
{
    float num_multi = 0 ;
    num_multi = x * y ;
    return num_multi ;
}
float division(float x , float y  )
{
    float num_div = 0 ;
    num_div = x / y ;
    return num_div ;
}



int main()
{
   string numstr_1 = "0" , numstr_2 = "0" , operion_type = "0" ;
    float  num_1 = 0 , num_2 = 0 , result1 = 0 ;
    bool complete_op = true , correct_enter1 = true , correct_enter2 = true , error_detect1 = false , error_detect2 = false;
    bool correct_enter_oper = true , selectentering = true  , correct_finish_enter ;

    char ch , ch_select ,selectorfinich = '0';
    int dec_asc_num = 0 ;
   while(complete_op)
   {
       correct_finish_enter = true ;
   // initial correct_finish_enter when you do another operation
       if(selectentering)
        {

   cout<<" Enter the two number to do the operation "<<endl;
   //enter the first number
   cout<<" Enter the first number "<<endl;


   while(correct_enter1)
   {
       cin >> numstr_1;
     for (int i = 0 ; i < numstr_1.length() ; i++)
   {
       ch = numstr_1[i];
       dec_asc_num = static_cast<int>(ch);
       if ( dec_asc_num < 48 || dec_asc_num > 57 )
       {
          error_detect1 = true ;
          break ;
       }
   }
       if(error_detect1)
   {
       cout<<" error in entering number \n please enter the correct number again "<<endl;
       error_detect1 = false ;
   }
   else
       {
           correct_enter1 = false ;
       }

   }
    //end the loop of entering of first number
    num_1 = stof(numstr_1) ;
        }
        else
        {
          num_1 = result1 ;
        }

    //enter the second number
    cout<<" Enter the second number "<<endl;


   while(correct_enter2)
   {
       cin >> numstr_2;
     for (int i = 0 ; i < numstr_2.length() ; i++)
   {
       ch = numstr_2[i];
       dec_asc_num = static_cast<int>(ch);
       if ( dec_asc_num < 48 || dec_asc_num > 57 )
       {
          error_detect2 = true ;
          break ;
       }
       }
       if(error_detect2)
   {
       cout<<" error in entering number \n please enter the correct number again "<<endl;
       error_detect2 = false ;
   }
   else
       {
           correct_enter2 = false ;
       }

   }
    //end the loop of entering of second number
   num_2 = stof(numstr_2) ;

   //the start of entering the type of operation
   cout<<" Enter the type of operation "<<endl;
   cout<<" +  for addition "<<endl;
   cout<<" -  for subtraction "<<endl;
   cout<<" *  for multiplication "<<endl;
   cout<<" /  for division "<<endl;


   while(correct_enter_oper)
   {
       cin >> ch_select;
       dec_asc_num = static_cast<int>(ch_select);
       if( dec_asc_num == 42 || dec_asc_num == 43 || dec_asc_num == 45 || dec_asc_num == 47 )
       {
           correct_enter_oper = false ;
       }
       else
        {
        cout<<" error in entering operation \n please enter the correct operation again "<<endl;
        }
   }
   //the end of entering the type of operation




         if (ch_select=='+')
       {result1 = addition(num_1,num_2);}
         else if (ch_select=='-')
       {result1 = subtraction(num_1,num_2);}
         else if (ch_select=='*')
       {result1 = multiplication(num_1,num_2);}
         else if (ch_select=='/')
        {result1 = division(num_1,num_2);}

       cout<<" the result of operation = "<<result1<<endl;
       cout<<" if you want to do another operation "<<endl;
       cout<<" enter \"1\" to complete another operation "<<endl;
       cout<<" enter \"0\" to end program "<<endl;

       while(correct_finish_enter)
       {
       cin >> selectorfinich ;
       if(selectorfinich == '1')
       {
           complete_op = true ;
           selectentering = false;
           correct_enter2 = true ;
           correct_enter_oper = true ;
           correct_finish_enter = false ;
       }
       else  if(selectorfinich == '0')
       {
           cout <<"The program finishes"<<endl;
           complete_op = false ;
           correct_finish_enter = false ;
       }
       else
       {
         cout<< " error in entering \n please make sure that you enter 1 or 0" <<endl;
       }
       }

   }


    return 0;
}
