CONVERT ( VARCHAR ( 24 ) , 
case 
    when DATEPART ( day , [Event - Event Date] ) > = DATEPART ( day , DATEADD(day, [Weeks Premature]*7, [Participant - Birthday]) ) THEN ( 
        case 
            when DATEPART ( month , [Event - Event Date] ) = DATEPART ( month , DATEADD(week, [Weeks Premature], [Participant - Birthday]) ) AND DATEPART ( year , [Event - Event Date] ) = DATEPART ( year , DATEADD(week, [Weeks Premature], [Participant - Birthday]) ) THEN 0 
            ELSE DATEDIFF ( month , DATEADD ( week , [Weeks Premature] , [Participant - Birthday] ) , [Event - Event Date] ) 
        END ) 
    ELSE DATEDIFF ( month , DATEADD ( week , [Weeks Premature] , [Participant - Birthday] ) , [Event - Event Date] ) - 1 
END ) + ' months and ' + CONVERT ( VARCHAR ( 24 ) , DATEDIFF ( day , DATEADD ( month , 
case 
    when DATEPART ( day , [Event - Event Date] ) > = DATEPART ( day , DATEADD(day, [Weeks Premature]*7, [Participant - Birthday]) ) THEN ( 
        case 
            when DATEPART ( month , [Event - Event Date] ) = DATEPART ( month , DATEADD(week, [Weeks Premature], [Participant - Birthday]) ) AND DATEPART ( year , [Event - Event Date] ) = DATEPART ( year , DATEADD(week, [Weeks Premature], [Participant - Birthday]) ) THEN 0 
            ELSE DATEDIFF ( month , DATEADD ( week , [Weeks Premature] , [Participant - Birthday] ) , [Event - Event Date] ) 
        END ) 
    ELSE DATEDIFF ( month , DATEADD ( week , [Weeks Premature] , [Participant - Birthday] ) , [Event - Event Date] ) - 1 
END , DATEADD ( week , [Weeks Premature] , [Participant - Birthday] ) ) , [Event - Event Date] ) ) + ' days'


