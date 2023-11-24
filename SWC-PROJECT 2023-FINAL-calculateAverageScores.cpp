/*
   Program purpose: STUDENT RECORD MANAGEMENT SYSTEM FOR STARLIGHT HIGH SCHOOL
   Programmer	: MUHAMMAD ARIF FARHAN BIN MOHD SAIDINAR (JAI)
   ID			: AM2307014042
   Date			: 21 NOV 2023
   Subprogram	: function calculateAverageScores
   Programmed by: MUHAMMAD ARIF FARHAN
*/

//function to compute average scores
double calculateAverageScores(int ttlStd, double scores[])
{
  	double ttlScores = 0;
  	
	for (int i=0; i<ttlStd; i++)
  	{
	  	ttlScores = ttlScores + scores[i];
  	}
	
	//compute avg for variable ttlScores
  	ttlScores = ttlScores/ttlStd;
  	
  	return ttlScores;
}//end of calculateAverageScores