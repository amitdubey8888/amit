import java.util.Random;
enum answers
{
no,yes,maybe,never,later,soon;
}
class question
{
Random rand=new Random();
answers ask(){
int prob=(int) (100*rand.nextDouble());
if(prob<15) 
return answers.maybe;
else if(prob<30) 
return answers.no;
else if(prob<60) 
return answers.yes;
else if(prob<75) 
return answers.later;
else if(prob<98) 
return answers.soon;
else return answers.never;
}
}
class askme{
static void answer(answers result){
switch(result)
{
case no:System.out.println("No");
        break;
case yes:System.out.println("Yes");
        break;
case maybe:System.out.println("maybe");
        break;
case later:System.out.println("Later");
        break;
case soon:System.out.println("Soon");
        break;
case never:System.out.println("Never");
        break;
}
}
public static void main(String args[])
{
question q=new question();
answer(q.ask());

answer(q.ask());

answer(q.ask());

answer(q.ask());
}}