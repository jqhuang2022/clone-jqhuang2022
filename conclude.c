int conclude(int result1,int result2,int result3,int result4,int result5)
{
    if(result1==1)
    {
        if(result2==1)
        {
            if(result3==1)
            {
                if(result4==1)
                {
                    if(result5==1)
                    return 1;
                }
                else return 0;
            }
            else return 0;
        }
        else return 0;
    }
    else return 0;
}
