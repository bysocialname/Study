const formulaire = document.createElement("form");

const inputLogin = document.createElement("input");
inputLogin.id = "login";
inputLogin.placeholder = "Login";
inputLogin.type = "text";

const inputPassword = document.createElement("input");
inputPassword.id = "passwors";
inputPassword.placeholder = "Mot de passe";
inputPassword.type = "password";

const bouton = document.createElement("button");
bouton.type = "submit";
bouton.textContent = "Envoyer";

formulaire.appendChild(inputLogin);
formulaire.appendChild(inputPassword);
formulaire.appendChild(bouton);

document.body.appendChild(formulaire);

formulaire.addEventListener('submit', function(e) {
    e.preventDefault();

    const login = inputLogin.value;
    const mdp = inputPassword.value;

    let user = { login, mdp };
    localStorage.setItem("user", JSON.stringify(user));
    window.location.href = "users.html";
});