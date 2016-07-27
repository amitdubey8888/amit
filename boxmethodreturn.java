class box{
double width;
double height;
double depth;
double volume(){
return (width*depth*height);
}
}
class boxmethodreturn{
public static void main(String args[]){
box mybox=new box();
double vol;
mybox.width=10;
mybox.depth=20;
mybox.height=30;
vol=mybox.volume();
System.out.println("Volume is "+vol);
}
}   