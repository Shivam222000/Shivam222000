;i++){
   cin>>arr[i];
  }
  if(arr[0]%2==0)ind1=0;
  else ind1=1;
  if(arr[1]%2==0)ind2=0;
  else ind2=1;
  for(int i=2;i<n;i++){
   
   if(i%2==0 && arr[i]%2==ind1){
    continue;
   }
   else if(i%2==1 && arr[i]