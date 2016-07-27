class box{
double width;
double height;
double depth;
}
class boxdemo{
public static void main(String args[]){
box mybox=new box();
double vol;
mybox.width=10;
mybox.depth=20;
mybox.height=30;
vol=mybox.width*mybox.depth*mybox.height;
System.out.println("Volume is "+vol);
}
}   