 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        
        int gap=(m+n)/2;
        
        if((m+n)%2)
            gap++;
        

        
        while(gap>=1)
        {
            
            if(gap>m-1)
            {
                int l=0,r=gap-m;
                bool j=0;
                
                while(r<n)
                {
                    if(j==0)
                    {
                        if(nums1[l]>nums2[r])
                            {
                              // cout<<"one\n";
                              swap(nums1[l],nums2[r]);
                           }
                        
                        l++;
                        r++;
                        
                        if(l>m-1)
                        {
                            j=1;
                            l=0;
                        }
                    }
                    
                    else
                    {
                        if(nums2[l]>nums2[r])
                           {  
                              // cout<<"two\n";
                            swap(nums2[l],nums2[r]);
                         }
                        
                        l++;
                        r++;
                        
                    }
                }
            }
            
            else
            {
            
                int l=0,r=gap;
                
                while(r<m)
                {
                    if(nums1[l]>nums1[r])
                        {
                           // cout<<"three\n";
                           swap(nums1[l],nums1[r]);
                        }
                    l++;
                    r++;
                }
                
                bool j=0;
               
                 r=0;
                while(r<n)
                {
                    if(j==0)
                    {
                        if(nums1[l]>nums2[r])
                            {
                              // cout<<"four\n";
                              swap(nums1[l],nums2[r]);
                           }
                        
                        l++;
                        r++;
                        
                        if(l>m-1)
                        {
                            l=0;
                            j=1;
                        }
            
                    }
                    else
                    {
                        if(nums2[l]>nums2[r])
                            {
  
                              swap(nums2[l],nums2[r]);
                           }
                        
                        l++;
                        r++;
                    }
                }
                
            }
            
            
            gap/=2;
        }
        
        int j=0;
        for(int i=m;j<n;j++,i++)
            nums1[i]=nums2[j];
        
        
        
    }
