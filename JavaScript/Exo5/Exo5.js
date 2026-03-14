let secret = Math.floor(Math.random() * 100) + 1;

let nombre = parseInt(prompt("Proposer un nombre au hazard !"));

let counter = 5;

while(counter && nombre != secret) {
    if(nombre < secret){
        alert(`Mauvaise reponse ! votre proposition est plus petite`);
    }
    else{
        alert(`Mauvaise reponse ! votre proposition est plus grande`);
    }
    counter--;
    nombre = parseInt(prompt("Proposer un nombre au hazard !"));
}
if(!counter){
    alert(`Vos 5 tentatives ont echoué`);
    alert(`La bonne proposition etait ${secret}`);
}
else if(nombre == secret){
    alert(`Felicitations ! votre proposition est correcte`);
    alert(`Nombre de tentatives echoué : ${5 - counter}`);
}