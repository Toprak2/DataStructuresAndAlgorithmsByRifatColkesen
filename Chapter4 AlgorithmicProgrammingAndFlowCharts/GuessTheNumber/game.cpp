#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int num[4]={0};
     bool isin=false;
    for(int i=0;i<4;i++)
    {
        do
        {
            num[i]=rand()%10;
            isin=false;
            for (int j = 0; j < i; j++)
            {
                if(num[i]==num[j])
                {
                    isin=true;
                    break;
                }
            }
            
        } while (isin);
    }
    int correctPos=0;
    int incorrectPos=0;
    int guessCount=0;
    int totalCorrect=0;
    int totalInCorrect=0;
    while (correctPos !=4)
    {
        correctPos=0;
        incorrectPos=0;
        int userGuess[4];
        guessCount++;

        for (int i = 0; i < 4; i++)
        {
            cout<<"Enter digit "<< i+1<<endl;
            cin>>userGuess[i];
            for (int j = 0; j < 4; j++)
            {
                if (userGuess[i]==num[j])
                {
                    if(i==j){
                        correctPos++;
                        totalCorrect++;
                    }
                    else{
                        incorrectPos--;
                        totalInCorrect++;
                    }
                }
                
            }
            
        }
        cout<<"your number: "<< userGuess[0]<<userGuess[1]<<userGuess[2]<<userGuess[3]<<"  "<<correctPos<<", "<<incorrectPos<<endl;
        
    }
    float score= 10*totalCorrect+5*totalInCorrect+(1000/guessCount)-
                 totalCorrect*totalInCorrect/(totalCorrect+totalInCorrect);
    
    cout<<"You have guessed in "<<guessCount<<"guesses"<<endl;
    cout<<"Your score is :"<<score<<endl;
    cout<<"Press a enter to end the game";
    string a;
    cin>>a;
}