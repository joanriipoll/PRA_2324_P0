int main(){
    BrazoRobotico br;
    
    br.setX(2.3);
    br.setY(2.2);
    br.setZ(2.5);
    
    cout << br.getX() << "::" << br.getY() << "::" << br.getZ() << endl;

    br.mover(3.3, 3.4, 3.5);

    cout << br.getX() << "::" << br.getY() << "::" << br.getZ() << endl;

    br.setSujetando(true);
    
    if (br.getSujetando()){
        cout << "El robot sujeta un objeto";
    }
    else {
        cout << "El robot NO sujeta un objeto";
    }
   

    return 0;
}

