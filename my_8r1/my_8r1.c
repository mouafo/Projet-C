int my_8r1 ()
{
  int i,j,k,l,m,n,o,p,q,r,s,t,u;
  /* boucle pour compter le nombre de possiblite */
  for (i = 0 ; i < 8 ; i++)
    {
      /*boucle pour placer la premier reine */
      for (j = 0 ; j < 8 ; j++)
	{
	  for (k = 0 ; k < 8 ; k++)
	    {
	      for (l = 0 ; l < 8 ; l++)
		{
		  for (m = 0 ; m < 8 ; m++)
		    {
		      for (n = 0 ; n < 8 ; n++)
			{
			  for (o = 0 ; o < 8 ; o++)
			    {
			      for (p = 0 ; p < 8 ; p++)
				{
				  for (q = 0 ; q < 8 ; q++)
				    {
				      for (r = 0 ; r < 8 ; r++)
					{
					  for (s = 0 ; s < 8 ; s++)
					    {
					      for (t = 0 ; t < 8 ; t++)
						{
						  /* initialisation du tableau vide */
						  tab[s][t] = 2;
						}
					    }
					  if (tab[q][s] == 2)
					    {
					      tab[q][s] = 1;
					      if (tab[q][s]== 1)
						{
						  for (u = 0 ; u < 8 ; u++)
						    {
						      tab[u][s] = 0;
						      tab[q][u] = 0;
						      tab[q+u+1][s+u+s]
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
}
