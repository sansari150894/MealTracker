cout<<"enter range";
cin>>a>>b;
c=b-a;
cout<<"total no: "<<c;
cout<<"prime no: ";
for(c=a;c<=b-a-1;c++)
{
for(j=2;j<=b-a-1;j++)
{
if(c%j!=0)
{ cout<<"\t"<<a;
a++;
}
}
}
}