import java.awt.event.*;
import java.awt.*;
public class CloseFrame1 extends Frame{
       public void paint(Graphics g){
            Font f = new Font("Helvetica",Font.BOLD.20);
            g.setFont(f);
            g.drawString("Smile Please!!!", 50, 50);
            //  drawOval(int x, int y, int width ,int height)
            //Draws the outline of an oval
            g.drawOval(60, 60, 200);
            g.setColor (Color.yellow);
            g.fillOvel(65, 65, 190, 190);
            //sets color
            g.setColor (Color.blue);
            //  fillOval(int x, int y, int width, int height)
            //Fills an oval bounded by the specified rectangle with the current color
            g.fillOval(90, 120, 50, 20);
            g.fillOval(190, 120, 50, 20);
            g.setColor(Color.black);
            //drawLine(int x1, int y1, int x2, int y2)
            //Draws a line, using the current color between the points (x1, y1) and (x2, y2) in this graphics cont
            //g.drawline(165, 125, 175);
            g.setColor (Color,red);
            //drawArc(int x, int y, int width, int height,int startAngle)
            //Draws the outline of a circular or elliptical arc covering the specified rectangle
            g.drawArc(110, 130, 95, 95, 0, -180);
            g.drawArc(110, 130, 95, 85, 0, -180);
                 }
                 
        public static void main(String []args){
        //create the frame
        closeframe1 d = new CloseFrame1();
//set the size and title
         d.setSize(400,400);
        d.setTitle("My Drawing");
         //dispaly the frame
