

// Write your Student class here
class Student {
  private:
    int scores[5];
    int sum;
  public:
    Student() : sum(0) {} //constructer
    int calculateTotalScore() 
    {
        return sum;
    }
    void input() 
    {
        for(int i=0; i<5; i++) 
        {
            cin >> scores[i];
            sum+=scores[i];
        }
    }
};

