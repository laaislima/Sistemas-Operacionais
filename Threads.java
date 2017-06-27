

package threads;
public class Threads {
    public static void main(String[] args) {
        
       Coont contador = new Coont();
        contador.run();
        
        Armazem novoArmazem = new Armazem();
        novoArmazem.run();
        
      
        
        Impressora novaImpressora = new Impressora();
         novaImpressora.run();
        
        
    
    }
    
}

