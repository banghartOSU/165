CONVERT ( VARCHAR ( 24 ) , 
case 
    when DATEPART ( day , [Event - Event Date] ) > = DATEPART ( day , [Participant - Birthday] ) THEN ( 
        case 
            when DATEPART ( month , [Event - Event Date] ) = DATEPART ( month , [Participant - Birthday] ) AND DATEPART ( year , [Event - Event Date] ) = DATEPART ( year , [Participant - Birthday] ) THEN 0 
            ELSE DATEDIFF ( month , [Participant - Birthday] , [Event - Event Date] ) 
        END ) 
    ELSE DATEDIFF ( month , [Participant - Birthday] , [Event - Event Date] ) - 1 
END ) + ' months and ' + CONVERT ( VARCHAR ( 24 ) , DATEDIFF ( day , DATEADD ( month , 
case 
    when DATEPART ( day , [Event - Event Date] ) > = DATEPART ( day , [Participant - Birthday] ) THEN ( 
        case 
            when DATEPART ( month , [Event - Event Date] ) = DATEPART ( month , [Participant - Birthday] ) AND DATEPART ( year , [Event - Event Date] ) = DATEPART ( year , [Participant - Birthday] ) THEN 0 
            ELSE DATEDIFF ( month , [Participant - Birthday] , [Event - Event Date] ) 
        END ) 
    ELSE DATEDIFF ( month , [Participant - Birthday] , [Event - Event Date] ) - 1 
END , [Participant - Birthday] ) , [Event - Event Date] ) ) + ' days'