CONVERT ( VARCHAR ( MAX ) , 
	DATEDIFF ( month , [Participant - Birthday] , [Event - Event Date] ) ) + ' months and ' 
	+ CONVERT ( VARCHAR ( MAX ) , DATEDIFF ( day , DATEADD ( day , DATEDIFF ( day , [Participant - Birthday] , [Event - Event Date] ) , [Participant - Birthday] ) , [Event - Event Date] ) ) + ' days'




CONVERT ( VARCHAR ( 24 ) case when DATEPART(day,[Event - Event Date]) >= DATEPART(day,[Participant - Birthday]) 
  THEN ( 
	case when DATEPART(month,[Event - Event Date]) = DATEPART(month,[Participant - Birthday]) AND DATEPART(year,[Event - Event Date]) = DATEPART(year,[Participant - Birthday]) 
        THEN 0 ELSE DATEDIFF(month, [Participant - Birthday],[Participant - Birthday])END)
ELSE DATEDIFF(month,[Participant - Birthday],[Event - Event Date])-1 END) + ' months and '

+ CONVERT ( VARCHAR ( 24 ) , DATEDIFF ( day , DATEADD ( month , ase when DATEPART(day,[Event - Event Date]) >= DATEPART(day,[Participant - Birthday]) 
  THEN ( 
	case when DATEPART(month,[Event - Event Date]) = DATEPART(month,[Participant - Birthday]) AND DATEPART(year,[Event - Event Date]) = DATEPART(year,[Participant - Birthday]) 
        THEN 0 ELSE DATEDIFF(month, [Participant - Birthday],[Participant - Birthday])END)
ELSE DATEDIFF(month,[Participant - Birthday],[Event - Event Date])-1 END , [Participant - Birthday] ) , [Event - Event Date] ) ) + ' days'


CASE WHEN
case when DATEPART(day,[Event - Event Date]) >= DATEPART(day,[Participant - Birthday]) 
  THEN ( 
	case when DATEPART(month,[Event - Event Date]) = DATEPART(month,[Participant - Birthday]) AND DATEPART(year,[Event - Event Date]) = DATEPART(year,[Participant - Birthday]) 
        THEN 0 ELSE DATEDIFF(month, [Participant - Birthday],[Participant - Birthday])END)
ELSE DATEDIFF(month,[Participant - Birthday],[Event - Event Date])-1 END) > 24 then "NA"

ELSE

CONVERT ( VARCHAR ( 24 ), case when DATEPART(day,[Event - Event Date]) >= DATEPART(day,DATEADD(week, [Participant - Birthday],[Weeks Premature])) 
  THEN ( 
	case when DATEPART(month,[Event - Event Date]) = DATEPART(month,DATEADD(week, [Participant - Birthday],[Weeks Premature])) AND DATEPART(year,[Event - Event Date]) = DATEPART(year,DATEADD(week, [Participant - Birthday],[Weeks Premature])) 
        THEN 0 ELSE DATEDIFF(month, DATEADD(week, [Participant - Birthday],[Weeks Premature]),DATEADD(week, [Participant - Birthday],[Weeks Premature]))END)
ELSE DATEDIFF(month,DATEADD(week, [Participant - Birthday],[Weeks Premature]),[Event - Event Date])-1 END) + ' months and '


+ CONVERT ( VARCHAR ( 24 ) , DATEDIFF ( day , DATEADD ( month , case when DATEPART(day,[Event - Event Date]) >= DATEPART(day,DATEADD(week, [Participant - Birthday],[Weeks Premature])) 
  THEN ( 
	case when DATEPART(month,[Event - Event Date]) = DATEPART(month,DATEADD(week, [Participant - Birthday],[Weeks Premature])) AND DATEPART(year,[Event - Event Date]) = DATEPART(year,DATEADD(week, [Participant - Birthday],[Weeks Premature])) 
        THEN 0 ELSE DATEDIFF(month, DATEADD(week, [Participant - Birthday],[Weeks Premature]),DATEADD(week, [Participant - Birthday],[Weeks Premature]))END)
ELSE DATEDIFF(month,DATEADD(week, [Participant - Birthday],[Weeks Premature]),[Event - Event Date])-1 END) , DATEADD(week, [Participant - Birthday],[Weeks Premature]) ) , [Event - Event Date] ) + ' days'

END

	Works 6/5/17 - 6/6/19
	Does not 6/5/17 6/4/19



	DNW:
		23 months 
		6/4
