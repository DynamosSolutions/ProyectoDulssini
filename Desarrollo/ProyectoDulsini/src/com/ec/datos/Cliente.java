/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ec.datos;

/**
 *
 * @author david
 */
public class Cliente {
    private String nombre;
    private String apellido;
    private String cedula;
    private String email;
    //metodos getter

    public String getNombre() {
        return nombre;
    }

    public String getApellido() {
        return apellido;
    }

    public String getCedula() {
        return cedula;
    }

    public String getEmail() {
        return email;
    }
    
    //metodos setter

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public void setApellido(String apellido) {
        this.apellido = apellido;
    }

    public void setCedula(String cedula) {
        this.cedula = cedula;
    }

    public void setEmail(String email) {
        this.email = email;
    }
    //metodo constructor

    public Cliente(String nombre, String apellido, String cedula, String email) {
        this.nombre = nombre;
        this.apellido = apellido;
        this.cedula = cedula;
        this.email = email;
    }

    @Override
    public String toString() {
        System.out.println( "Nombre:  "+nombre+ "  Apellido:  "+ apellido+ "  ci: " + cedula+"   correo:"+ email); //To change body of generated methods, choose Tools | Templates.
        return "Nombre"+nombre+ "  Apellido"+ apellido+ "  ci: " + cedula+"   correo:"+ email; //To change body of generated methods, choose Tools | Templates.
    }
    
    
}
