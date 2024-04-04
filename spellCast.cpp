public class solutionv{
    static int spellCasting(int n , int k , String s){
        int answer=0;
        int health = k;
        for(int i= ;i<n;i++){
            if(s.charAt(i)=='*'){
                health-=2;
            }
            else {
                health +=1;
            }
            if(health<=0){
                return i+1;
            }
        }
    }
}