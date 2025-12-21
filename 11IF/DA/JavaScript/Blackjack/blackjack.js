//Nome e começo
// noinspection EqualityComparisonWithCoercionJS

function verifica_nome(){
	if (this.value!=""){
		document.getElementById("close_nome").setAttribute("data-bs-dismiss","modal");
	}
	else{
		document.getElementById("close_nome").removeAttribute("data-bs-dismiss");
	}
}
function comecar(){
	let nome = document.getElementById("Nome").value;
	document.getElementById("começar").hidden = true;
	document.getElementById("valor_bet").hidden = false;
	document.getElementById("bet").hidden = false;
	document.getElementById("info_user").hidden = false;
	document.getElementById("nome_display").innerHTML=nome;
}
//Dinheiro inicial

let money=0;
let aposta=0;
while (money < 10) {
	money = Math.floor(Math.random() * 101)
}
document.getElementById("valor_bet").max=money;
document.getElementById("money_display").innerHTML = money;
//Cartas
const C_back="images/0_back_card.png";
const deck=[
	//source, valor, localização(0=baralho,1=player,2=dealer)
	["images/ace_of_clubs.png","images/ace_of_diamonds.png","images/ace_of_hearts.png","images/ace_of_spades.png","images/2_of_clubs.png","images/2_of_diamonds.png","images/2_of_hearts.png","images/2_of_spades.png","images/3_of_clubs.png","images/3_of_diamonds.png","images/3_of_hearts.png","images/3_of_spades.png","images/4_of_clubs.png","images/4_of_diamonds.png","images/4_of_hearts.png","images/4_of_spades.png","images/5_of_clubs.png","images/5_of_diamonds.png","images/5_of_hearts.png","images/5_of_spades.png","images/6_of_clubs.png","images/6_of_diamonds.png","images/6_of_hearts.png","images/6_of_spades.png","images/7_of_clubs.png","images/7_of_diamonds.png","images/7_of_hearts.png","images/7_of_spades.png","images/8_of_clubs.png","images/8_of_diamonds.png","images/8_of_hearts.png","images/8_of_spades.png","images/9_of_clubs.png","images/9_of_diamonds.png","images/9_of_hearts.png","images/9_of_spades.png","images/10_of_clubs.png","images/10_of_diamonds.png","images/10_of_hearts.png","images/10_of_spades.png","images/jack_of_clubs.png","images/jack_of_diamonds.png","images/jack_of_hearts.png","images/jack_of_spades.png","images/queen_of_clubs.png","images/queen_of_diamonds.png","images/queen_of_hearts.png","images/queen_of_spades.png","images/king_of_clubs.png","images/king_of_diamonds.png","images/king_of_hearts.png","images/king_of_spades.png"],
	[11,11,11,11,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10],
	[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
];
const c_dealer=document.getElementById("c_dealer");
const c_player=document.getElementById("c_player");
let c_dealer_id=0;
let c_player_id=0;
function aposta_realizada(){
	if (document.getElementById("valor_bet").value<=money && document.getElementById("valor_bet").value>0){
		document.getElementById("valor_bet").hidden = true;
		document.getElementById("bet").hidden = true;
		aposta=document.getElementById("valor_bet").value;
		money-=aposta;
		document.getElementById("money_display").innerHTML = money;
		document.getElementById("play").hidden = false;
		document.getElementById("jogadas").hidden = false;
		document.getElementById("jogadas").classList.add("d-flex","justify-content-center");
		document.getElementById("div_comeco").classList.remove("d-flex","justify-content-center");
		document.getElementById("div_comeco").style.display="none";
		random_carta("PLAYER")
		random_carta("PLAYER")
		random_carta("DEALER")
		random_carta("DEALER")
		document.getElementById("c_dealer1").src=C_back;
		document.getElementById("c_dealer1").setAttribute("alt","carta para baixo")
		if (aposta>money){
			document.getElementById("double").disabled=true;
		}
	}
}
//ações
function random_carta(quem){
	let carta_selecionada=Math.floor(Math.random()*52)
	while (deck[2][carta_selecionada]!=0){
		carta_selecionada=Math.floor(Math.random()*52)
	}
	if (quem=="DEALER"){
		c_dealer.innerHTML+="<img src='"+deck[0][carta_selecionada]+"' data-card-id='"+carta_selecionada+"' alt='carta para cima' id='c_dealer"+c_dealer_id+"'>";
		c_dealer_id++;
		deck[2][carta_selecionada]=2;
		if (contar("DEALER")>21){
			console.log("dealer ultrapassou")
		}
	}
	else if (quem=="PLAYER"){
		c_player.innerHTML+="<img src='"+deck[0][carta_selecionada]+"' alt='carta para cima' id='c_player"+c_player_id+"'>";
		c_player_id++;
		deck[2][carta_selecionada]=1;
		if (contar("PLAYER")>21){
			console.log("player ultrapassou")
			document.getElementById("hit").disabled=true;
			document.getElementById("stand").disabled=true;
			document.getElementById("split").disabled=true;
			document.getElementById("double").disabled=true;
		}
	}
}
function contar(quem){
	let soma=0;
	if (quem=="PLAYER"){
		for (let i=0; i<52; i++){
			if (deck[2][i]==1){
				soma+=deck[1][i];
			}
		}
	}
	else if (quem=="DEALER"){
		for (let i=0; i<52; i++){
			if (deck[2][i]==2){
				soma+=deck[1][i];
			}
		}
	}
	return soma;
}
function stand(){
	document.getElementById("hit").disabled=true;
	document.getElementById("stand").disabled=true;
	document.getElementById("split").disabled=true;
	document.getElementById("double").disabled=true;
	setTimeout(dealer,1000)
}//incompleto
function split(){

}//incompleto alta dificuldade
function double_down(){
	money-=aposta;
	aposta+=aposta;
	document.getElementById("money_display").innerHTML = money;
	random_carta("PLAYER");
	stand();
}
function dealer(){
	document.getElementById("c_dealer1").setAttribute("alt","carta para cima");
	for (let i=0; i<52; i++){
		if (deck[2][i]==2){
			if (document.getElementById("c_dealer0").dataset.cardId!=i){
				document.getElementById("c_dealer1").src=deck[0][i];
				break;
			}
		}
	}
}

function reset(){
	//para testar apenas
	c_dealer.innerHTML="";
	c_player.innerHTML="";
	c_dealer_id=0;
	c_player_id=0;
	for (let i=0;i<52;i++){
		deck[2][i]=0;
	}
	random_carta("PLAYER")
	random_carta("PLAYER")
	random_carta("DEALER")
	random_carta("DEALER")
	document.getElementById("c_dealer1").src=C_back;
	document.getElementById("hit").disabled=false;
	document.getElementById("stand").disabled=false;
	document.getElementById("split").disabled=false;
	document.getElementById("double").disabled=false;
}