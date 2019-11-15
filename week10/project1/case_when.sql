CASE WHEN 
    [Communication 1] <> 'Y' AND [Communication 1] <> 'S' AND [Communication 1] <> 'N' AND [Communication 1] <> 'X' OR 
    [Communication 2] <> 'Y' AND [Communication 2] <> 'S' AND [Communication 2] <> 'N' AND [Communication 2] <> 'X' OR 
    [Communication 3] <> 'Y' AND [Communication 3] <> 'S' AND [Communication 3] <> 'N' AND [Communication 3] <> 'X' OR
    [Communication 4] <> 'Y' AND [Communication 4] <> 'S' AND [Communication 4] <> 'N' AND [Communication 4] <> 'X' OR
    [Communication 5] <> 'Y' AND [Communication 5] <> 'S' AND [Communication 5] <> 'N' AND [Communication 5] <> 'X' OR
    [Communication 6] <> 'Y' AND [Communication 6] <> 'S' AND [Communication 6] <> 'N' AND [Communication 6] <> 'X' THEN 'ERROR'
ELSE
 CONVERT( varchar(24), 
    ((CASE 
        WHEN [Communication 1] = 'Y' THEN + 10 
        WHEN [Communication 1] = 'S' THEN + 5 
        WHEN [Communication 1] = 'N' THEN + 0 
        WHEN [Communication 1] = 'X' THEN + 0 
    END ) + ( 
    CASE 
        WHEN [Communication 2] = 'Y' THEN + 10 
        WHEN [Communication 2] = 'S' THEN + 5 
        WHEN [Communication 2] = 'N' THEN + 0 
        WHEN [Communication 2] = 'X' THEN + 0 
    END ) + ( 
    CASE 
        WHEN [Communication 3] = 'Y' THEN + 10 
        WHEN [Communication 3] = 'S' THEN + 5 
        WHEN [Communication 3] = 'N' THEN + 0 
        WHEN [Communication 3] = 'X' THEN + 0 
    END ) + ( 
    CASE 
        WHEN [Communication 4] = 'Y' THEN + 10 
        WHEN [Communication 4] = 'S' THEN + 5 
        WHEN [Communication 4] = 'N' THEN + 0 
        WHEN [Communication 4] = 'X' THEN + 0 
    END ) + ( 
    CASE 
        WHEN [Communication 5] = 'Y' THEN + 10 
        WHEN [Communication 5] = 'S' THEN + 5 
        WHEN [Communication 5] = 'N' THEN + 0 
        WHEN [Communication 5] = 'X' THEN + 0 
    END ) + ( 
    CASE 
        WHEN [Communication 6] = 'Y' THEN + 10 
        WHEN [Communication 6] = 'S' THEN + 5 
        WHEN [Communication 6] = 'N' THEN + 0 
        WHEN [Communication 6] = 'X' THEN + 0 
    END )))

END