public class DAOcliente {

  public DAOcliente() {
    System.out.println("conectando ao cliente");
  }

  public void setcliente(cliente c) {
    System.out.println("vou cadastrar");
    // insert into cliente values(1,"Miguel", rua A);
    String sql = "insert into clientes values(" + c.getCod() + ", \"" + c.getNome() + "\",\"" + c.getEnd() + "\")";
    System.out.println(sql);
    System.out.println("executando: " + sql);
    System.out.println("desconectando...");
  }

  public cliente getcliente(int cod) {
    // conectar ao banco
    System.out.println("conectando...");
    // consultar o cliente cujo codigo foi passado para o parametro
    // select * from cliente where cod =1
    String sql = "select * from cliente where cod =" + cod;
    System.out.println("executando banco: " + sql);
    // atribuir os valores recebidos para um objeto cliente
    cliente c = new cliente();
    c.setCod(cod);
    c.setNome("yoda");
    c.setEnd("dagobah");
    return c;
  }
}
