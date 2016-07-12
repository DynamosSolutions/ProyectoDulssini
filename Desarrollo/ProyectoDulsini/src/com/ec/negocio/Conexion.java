/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ec.negocio;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

/**
 *
 * @author david
 */
public class Conexion {
    public String db="basereservarestaurante";
    public String url="jdbc://127.0.01/"+db;
    public String user="root";
    public String pass="";

    public Conexion() {
    }
    
    public Connection conectar(){
        Connection link=null;
        try {
            Class.forName("org.gjt.mm.mysql.Driver");
            link= DriverManager.getConnection(this.url,this.user,this.pass);
        } catch (ClassNotFoundException | SQLException e) {
            System.err.println("error de conecion"+e);
        }
        return link;
                
    }
   
    
}
