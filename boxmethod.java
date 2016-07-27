class box{
double width;
double height;
double depth;
void volume(){
System.out.print("Volume is ");
System.out.println(width*depth*height);
}
}
class boxmethod{
public static void main(String args[]){
box mybox=new box();
double vol;
mybox.width=10;
mybox.depth=20;
mybox.height=30;
mybox.volume();
}
}   