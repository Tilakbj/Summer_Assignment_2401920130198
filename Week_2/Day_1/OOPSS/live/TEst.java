import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;
 public class Main{
 public static void main(String args[]){
    Veena v=new Veena();
    Sxophone s=new Saxophone();
    v.play();
    s.play();
    Playable p;
    p=s;
    p.play();
    p=v;
    v.play();
 }