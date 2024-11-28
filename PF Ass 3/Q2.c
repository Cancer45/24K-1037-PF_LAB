#include <stdio.h>

struct Player
{
  int ballScores[12];
  char playerName[50];
  int totalScore;
};

int validateScore (int score)
{
    if (score < 0 || score > 6)
    return 0;
    
    return 1;
}

void playGame (struct Player* player)
{
  int tmp;
  for (int i = 0; i < 12; i++)
  {
    printf("Score %d: ", i + 1);
    scanf("%d", &tmp);
    
    //check
    if (!validateScore(tmp))
    player->ballScores[i] = 0;
    else
    player->ballScores[i] = tmp;
  }
}

int findWinner (struct Player* player1, struct Player* player2) //0 is draw, -1 is first player (parameter), 1 is second player (parameter)
{
    player1->totalScore = 0;
    player2->totalScore = 0;
    
    for (int i = 0; i < 12; i++)
    {
        if (validateScore(player1->ballScores[i]))
        player1->totalScore +=  player1->ballScores[i];
        if (validateScore(player2->ballScores[i]))
        player2->totalScore +=player2->ballScores[i];
    }
    
    if (player1->totalScore > player2->totalScore)
    {
        return -1; //firstplayer wins
    }
    
    else if (player1->totalScore < player2->totalScore)
    {
        return 1; //firstplayer wins
    }
    
    else
    {
        return 0; //draw
    }
}

void displayMatchScoreboard (struct Player player1, struct Player player2)
{
  int total = player1.totalScore + player2.totalScore;

  for (int i = 0; i < 12; i++)
  {
    printf("\nBall %d\nPlayer 1: %d\nPlayer 2: %d\n", i + 1, player1.ballScores[i], player2.ballScores[i]);
  }

  printf("\nAverage Score: %.2f\nTotal Score: %d\n", (float)total / 24, total);
}

int main()
{
  int winner;
  struct Player player1;
  struct Player player2; 
  
  playGame(&player1);
  playGame(&player2);

  winner = findWinner(&player1, &player2);
  
  displayMatchScoreboard(player1, player2);

  if(!winner)
  {
    printf("\nDraw\n");
  }

  else if (winner == 1)
  {
    printf("\nPlayer 2 wins\n");
  }

  else
  {
    printf("\nPlayer 1 wins\n");
  }
}