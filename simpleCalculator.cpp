#include<iostream>
#include<cmath>
   
   typedef double operand_t;
   typedef std::string text_t;
   typedef char charDesicion_t;
   typedef int straightVectors_t;
   
     int main(){
        operand_t firstNum , secondNum , result,carryNum , otherResult,fourthNum;
        text_t userName;
        charDesicion_t optionView, operationType,temperatureUnit;
        straightVectors_t optionNum;
        const operand_t PI=3.14157;
        const operand_t KELVIN=273.15;
        system("cls");
         
          
            
      std::cout<<"Hello User, Enter Your Username:";
            getline(std::cin, userName);
 system("cls");
      std::cout<<"Welcome To Our Calculator "<<userName<<". We Are Pleased To Have You."<<std::endl<<std::endl;
      std::cout<<"We Have A Variety Of Custom Calculating Options For You Based On Your Problem To Solve."<<std::endl;
         std::cout<<"Do You Wish To See The Provided Options?[Y/N]:";
           std::cin>>optionView;
 system("cls");
          if (optionView=='Y' || optionView=='y')
          {
            std::cout<<"Here Are Our Options:"<<std::endl<<std::endl;
            
              std::cout<<"1:Simple Arithmetic Calculator."<<std::endl;
              std::cout<<"2:Area Of Circle Calculator."<<std::endl;
              std::cout<<"3:Temperature Conversion."<<std::endl;
              std::cout<<"4:Quadratic Calculator."<<std::endl;
              std::cout<<"5:Gradient Calculator."<<std::endl;
              std::cout<<"6:Other."<<std::endl;
           std::cout<<"Select One Option:";
            std::cin>>optionNum;
 system("cls");
                switch (optionNum)
                {
                case 1:
                    std::cout<<"Welcome To Our Simple Calculator "<<userName<<".You'll Need Two Numbers For The Operation."<<std::endl;
                       std::cout<<"Specify The Type Of Operation You'd Like To Perform[+ , - , /,*]:";
                                 std::cin>>operationType;
                                
 system("cls");
                             switch (operationType)
                             {
                             case '+':
                                  std::cout<<"We Are Now Adding Two Numbers."<<std::endl;
                                  std::cout<<"Enter First Number:";
                                  std::cin>>firstNum;
 system("cls");
                                  std::cout<<"We Are Now Adding Two Numbers."<<std::endl;
                                  std::cout<<"Enter Second Number:";
                                  std::cin>>secondNum;
 system("cls");
                                       result=firstNum+secondNum;
                                  std::cout<<"We Are Now Adding Two Numbers."<<std::endl;
                                  std::cout<<"     1st Number:"<<firstNum;
                                  std::cout<<"     2st Number:"<<secondNum<<std::endl;
                                  std::cout<<"               Their Sum Is:"<<result;
                                break;
                              case '-':
                                  std::cout<<"We Are Now Subtracting Two Numbers."<<std::endl;
                                  std::cout<<"Enter First Number:";
                                  std::cin>>firstNum;
 system("cls");
                                  std::cout<<"We Are Now Subtracting Two Numbers."<<std::endl;
                                  std::cout<<"Enter Second Number:";
                                  std::cin>>secondNum;
 system("cls");
                                       result=firstNum-secondNum;
                                  std::cout<<"We Are Now Subtracting Two Numbers."<<std::endl;
                                  std::cout<<"     1st Number:"<<firstNum;
                                  std::cout<<"     2st Number:"<<secondNum<<std::endl;
                                  std::cout<<"               Their Difference Is:"<<result;
                                break;
                                 case '*':
                                  std::cout<<"We Are Now Multiplying Two Numbers."<<std::endl;
                                  std::cout<<"Enter First Number:";
                                  std::cin>>firstNum;
 system("cls");
                                  std::cout<<"We Are Now Multiplying Two Numbers."<<std::endl;
                                  std::cout<<"Enter Second Number:";
                                  std::cin>>secondNum;
 system("cls");
                                       result=firstNum*secondNum;
                                  std::cout<<"We Are Now Multiplying Two Numbers."<<std::endl;
                                  std::cout<<"     1st Number:"<<firstNum;
                                  std::cout<<"     2st Number:"<<secondNum<<std::endl;
                                  std::cout<<"               Their Product Is:"<<result;
                                break;
                                 case '/':
                                  std::cout<<"We Are Now Diving Two Numbers."<<std::endl;
                                  std::cout<<"Enter Numerator:";
                                  std::cin>>firstNum;
 system("cls");
                                  std::cout<<"We Are Now Dividing Two Numbers."<<std::endl;
                                  std::cout<<"Enter Denominator:";
                                  std::cin>>secondNum;
 system("cls");
                                       result=firstNum/secondNum;
                                  std::cout<<"We Are Now Dividing Two Numbers."<<std::endl;
                                  std::cout<<"     1st Number:"<<firstNum;
                                  std::cout<<"     2st Number:"<<secondNum<<std::endl;
                                  std::cout<<"               Their Ratio is:"<<result;
                                break;
                             default:
                             std::cout<<"ERROR!!"<<std::endl;
                                break;
                             }
                    break;
                case 2:
                       std::cout<<"Interesting Option "<<userName<<"!. Let's Assess Your Circle."<<std::endl; 
                       std::cout<<"Enter The Radius Value Of Your Circle:";
                               std::cin>>firstNum;
 system("cls");
                           
                            result= PI*pow(firstNum,2); 
                                std::cout<<"The Area Of Your Circle Is "<<result<<"m^2"<<std::endl;         
                    break;
                case 3:
                       std::cout<<"Highs And Lows "<<userName<<"!!. Let's Get Started."<<std::endl;
                       std::cout<<"Enter The Unit Of Conversion:[Kelvins(K) Or Degree Celcius(C)]";
                            std::cin>>temperatureUnit;
 system("cls");
                        switch (temperatureUnit)
                        {
                        case 'K' || 'k':
                            std::cout<<"We Are Converting To Kelvins."<<std::endl;
                                std::cout<<"Enter Your Temperature Value In Degree Celcius(C):";
                                      std::cin>>firstNum;
                                        result=firstNum+KELVIN;
 system("cls");
                                 std::cout<<"We Are Converting To Kelvins."<<std::endl;
                                 std::cout<<"Your Value Is:"<<firstNum<<"C."<<std::endl;
                                    std::cout<<"Your Converted Value Is:"<<result<<"K."<<std::endl;
                            break;
                         case 'C' :
                            std::cout<<"We Are Converting To Celcius."<<std::endl;
                                std::cout<<"Enter Your Temperature Value In Kelvins(K):";
                                      std::cin>>firstNum;
                                        result=firstNum-KELVIN;
 system("cls");
                                 std::cout<<"We Are Converting To Celcius."<<std::endl;
                                 std::cout<<"Your Value Is:"<<firstNum<<"C."<<std::endl;
                                    std::cout<<"Your Converted Value Is:"<<result<<"C."<<std::endl;
                            break;
                         case 'c' :
                            std::cout<<"We Are Converting To Celcius."<<std::endl;
                                std::cout<<"Enter Your Temperature Value In Kelvins(K):";
                                      std::cin>>firstNum;
                                        result=firstNum-KELVIN;
 system("cls");
                                 std::cout<<"We Are Converting To Celcius."<<std::endl;
                                 std::cout<<"Your Value Is:"<<firstNum<<"C."<<std::endl;
                                    std::cout<<"Your Converted Value Is:"<<result<<"C."<<std::endl;
                            break;
                        default:
                            break;
                        } 
                    break;
                case 4:
                       std::cout<<"Hey "<<userName<<". We Also Love Quadratic Equations."<<std::endl;
                       std::cout<<"You Will Need Three Values For The Operation(Value Of:a,b and c)."<<std::endl;
                            std::cout<<"................."<<std::endl<<std::endl; 
                              std::cout<<"Let's Get Started."<<std::endl;
                                 std::cout<<"Enter The Value Of a:";
                                   std::cin>>firstNum;
 system("cls");
                              std::cout<<"Let's Get Started."<<std::endl;
                                 std::cout<<"Enter The Value Of b:";
                                   std::cin>>secondNum;
 system("cls");
                              std::cout<<"Let's Get Started."<<std::endl;
                                 std::cout<<"Enter The Value Of c:";
                                   std::cin>>carryNum;
 system("cls");
                      result=((-1*secondNum+sqrt(pow(secondNum,2)-(4*firstNum*carryNum))/(2*firstNum)));
                      otherResult=((-1*secondNum-sqrt(pow(secondNum,2)-(4*firstNum*carryNum))/(2*firstNum)));
                         std::cout<<"......DATA:......"<<std::endl<<std::endl;
                                  std::cout<<"   Value Of a:"<<firstNum<<std::endl;
                                  std::cout<<"   Value Of b:"<<secondNum<<std::endl;
                                  std::cout<<"   Value Of c:"<<carryNum<<std::endl<<std::endl;
                          std::cout<<"......DATA:......"<<std::endl<<std::endl;       
                                  std::cout<<"The Quadratic Terms Are "<<result<<" And "<<otherResult<<"."<<std::endl;
                                  std::cout<<"Indicating The High And Low Terms Of The Equation."<<std::endl;
                          std::cout<<"................."<<std::endl<<std::endl;       
                                break;  
                    break;
                 case 5:
                       std::cout<<"Great "<<userName<<"!!. Let's Measure Your Slope"<<std::endl;                            
                             std::cout<<"............................................"<<std::endl;
                            std::cout<<"Anyway, We Love Planes This Side, And Pizza!!"<<std::endl;
                             std::cout<<"............................................"<<std::endl;
        std::cout<<"We Are Going To Need Four Values For Your Slope Operation[A(x,y),B(x,y)]"<<std::endl; 
                                std::cout<<"Enter Values Of your First Point[A(x,y)]:";
                                     std::cin>>firstNum>>secondNum;
 system("cls");
        std::cout<<"We Are Going To Need Four Values For Your Slope Operation[A(x,y),B(x,y)]"<<std::endl; 
                                std::cout<<"Enter Values Of your Second Point[B(x,y)]:";
                                     std::cin>>carryNum>>fourthNum; 
 system("cls");
                           result=((fourthNum-secondNum)-(carryNum-firstNum));
                        std::cout<<"......DATA:......"<<std::endl<<std::endl;
                           std::cout<<"A("<<firstNum<<","<<secondNum<<")."<<std::endl;
                           std::cout<<"B("<<carryNum<<","<<fourthNum<<")."<<std::endl;
                           std::cout<<"Are The Points Used To Calculate The Slope."<<std::endl;
                          std::cout<<"................."<<std::endl<<std::endl;
                             std::cout<<"The Gradient(m) Of Between A("<<firstNum<<","<<secondNum<<")"<<" And B("<<carryNum<<","<<fourthNum<<") Is:"<<result<<std::endl;
                             std::cout<<"................."<<std::endl<<std::endl;
                    break;
                case 6:
                    std::cout<<"Sorry Let's Wait For BelmireDub To Come Up With More Updates About Our Calculator."<<std::endl;
                      std::cout<<"We Will Keep In Touch, Have A Nice One."<<std::endl;
                    break;    
                default:
                    std::cout<<"Error!!!!!!, Retry Process.";
                    break;
                }
          }
            else if(optionView=='N' || optionView=='n')
            {
                std::cout<<"Let's Hope We WorK Together Next Time"<<std::endl;
                    std::cout<<"Have A Nice One";
            }
          
          
 
           
        system("pause>0");
     }