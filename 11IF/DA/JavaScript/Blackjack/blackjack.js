//Nome e começo

function verifica_nome(x){
	if (x.value!="" && x.value[0]!=" "){
		document.getElementById("close_nome").setAttribute("onclick","comecar()");
		document.getElementById("label_nome").innerHTML="Insira o seu nome";

	}
	else{
		document.getElementById("close_nome").removeAttribute("onclick");
		document.getElementById("label_nome").innerHTML="O seu nome não é válido escolha outro.";
	}
}
function comecar(){
	document.getElementById("sidebar").hidden=false;
	let nome = document.getElementById("Nome").value;
	document.getElementById("nome_display").innerHTML=nome;
	document.getElementById("play").hidden = false;
	document.getElementById("jogadas").hidden = false;
	document.getElementById("jogadas").classList.add("d-flex","justify-content-center");
	document.getElementById("escolherNome").style.display="none";
	document.getElementById("bet").disabled=false	;
	document.getElementById("valor_bet").disabled=false;
	document.getElementById("valor_bet").focus();
	document.getElementById("hit").disabled=true;
	document.getElementById("stand").disabled=true;
	document.getElementById("split_btn").disabled=true;
	document.getElementById("double").disabled=true;
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
	//source, valor, localização(0=baralho,1=player,2=dealer,3=split)
	["images/ace_of_clubs.png","images/ace_of_diamonds.png","images/ace_of_hearts.png","images/ace_of_spades.png","images/2_of_clubs.png","images/2_of_diamonds.png","images/2_of_hearts.png","images/2_of_spades.png","images/3_of_clubs.png","images/3_of_diamonds.png","images/3_of_hearts.png","images/3_of_spades.png","images/4_of_clubs.png","images/4_of_diamonds.png","images/4_of_hearts.png","images/4_of_spades.png","images/5_of_clubs.png","images/5_of_diamonds.png","images/5_of_hearts.png","images/5_of_spades.png","images/6_of_clubs.png","images/6_of_diamonds.png","images/6_of_hearts.png","images/6_of_spades.png","images/7_of_clubs.png","images/7_of_diamonds.png","images/7_of_hearts.png","images/7_of_spades.png","images/8_of_clubs.png","images/8_of_diamonds.png","images/8_of_hearts.png","images/8_of_spades.png","images/9_of_clubs.png","images/9_of_diamonds.png","images/9_of_hearts.png","images/9_of_spades.png","images/10_of_clubs.png","images/10_of_diamonds.png","images/10_of_hearts.png","images/10_of_spades.png","images/jack_of_clubs.png","images/jack_of_diamonds.png","images/jack_of_hearts.png","images/jack_of_spades.png","images/queen_of_clubs.png","images/queen_of_diamonds.png","images/queen_of_hearts.png","images/queen_of_spades.png","images/king_of_clubs.png","images/king_of_diamonds.png","images/king_of_hearts.png","images/king_of_spades.png"],
	[11,11,11,11,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10],
	[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
];
const c_dealer=document.getElementById("c_dealer");
const c_player=document.getElementById("c_player");
const c_split=document.getElementById("c_player_split");
let c_dealer_id=0;
let c_player_id=0;
let c_split_id=0;
let split_value=false
let split_2_turn=false;
let aposta_split=0
document.getElementById("Nome").focus();
function verifica_aposta(x){
	if (x.value<=money && x.value>0 && parseInt(x.value) == x.value){
		document.getElementById("bet").setAttribute("onclick","aposta_realizada()");
		document.getElementById("label_bet").innerHTML="Quantidade a apostar";
	}
	else{
		document.getElementById("bet").removeAttribute("onclick");
		document.getElementById("label_bet").innerHTML="Insira uma aposta válida";
	}
}
function aposta_modal(){
	document.getElementById("resultados").hidden=true;
	document.getElementById("win").hidden=true;
	document.getElementById("lose").hidden=true;
	document.getElementById("draw").hidden=true;
	document.getElementById("split").hidden=true;
	document.getElementById("bet").disabled=false	;
	document.getElementById("valor_bet").disabled=false;
	document.getElementById("valor_bet").focus();
}
function aposta_realizada(){
	cont_ani=0;
	intervalo_m=[]
	pos_x=[];
	pos_y=[];
	document.getElementById("bet").disabled=true;
	document.getElementById("valor_bet").disabled=true;
	c_dealer.innerHTML="";
	c_player.innerHTML="";
	c_split.innerHTML="";
	c_dealer_id=0;
	c_player_id=0;
	c_split_id=0;
	for (let i=0;i<52;i++){
		deck[2][i]=0;
	}
	for (let i=0; i<4; i++){
		deck[1][i]=11;
	}
	split_value=false
	aposta_split=0
	document.getElementById("hit").removeAttribute("onclick");
	document.getElementById("hit").setAttribute("onclick","random_carta('PLAYER')");
	aposta=parseInt(document.getElementById("valor_bet").value)	;
	money-=aposta;
	document.getElementById("money_display").innerHTML = money;
	document.getElementById("hit").disabled=false;
	document.getElementById("stand").disabled=false;
	document.getElementById("split_btn").disabled=false;
	document.getElementById("double").disabled=false;
	stop_dealer=false;
	random_carta("PLAYER")
	random_carta("PLAYER")
	random_carta("DEALER")
	random_carta("DEALER")
	document.getElementById("c_dealer1").src=C_back;
	document.getElementById("c_dealer1").setAttribute("alt","carta para baixo")
	if (aposta>money){
		document.getElementById("double").disabled=true;
		document.getElementById("split_btn").disabled=true;
	}
	if (Math.floor(document.getElementById("c_player0").dataset.cardId/4)!=Math.floor(document.getElementById("c_player1").dataset.cardId/4)){
		document.getElementById("split_btn").disabled=false;
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
		move_card("DEALER",document.getElementById("c_dealer"+c_dealer_id));
		c_dealer_id++;
		deck[2][carta_selecionada]=2;
		if (contar("DEALER")>21){
			for(let i=0;i<4; i++){
				if (deck[2][i]==2 && deck[1][i]==11){
					deck[1][i]=1
					return
				}
			}
			stop_dealer=true;
			win_p()
		}
	}
	else if (quem=="PLAYER"){
		if (c_player_id>=2){
			document.getElementById("split_btn").disabled=true;
		}
		c_player.innerHTML+="<img src='"+deck[0][carta_selecionada]+"' data-card-id='"+carta_selecionada+"' alt='carta para cima' id='c_player"+c_player_id+"'>";
		move_card("PLAYER",document.getElementById("c_player"+c_player_id));
		c_player_id++;
		deck[2][carta_selecionada]=1;
		if (contar("PLAYER")>21){
			for(let i=0;i<4; i++){
				if (deck[2][i]==1 && deck[1][i]==11){
					deck[1][i]=1
					return
				}
			}
			if (split_value){
				stand()
			}
			else {
				stand()
				win_d()
			}
		}
	}
	else if (quem=="SPLIT"){
		c_split.innerHTML+="<img src='"+deck[0][carta_selecionada]+"' data-card-id='"+carta_selecionada+"' alt='carta para cima' id='c_split"+c_split_id+"'>";
		move_card("SPLIT",document.getElementById("c_split"+c_split_id));
		c_split_id++;
		deck[2][carta_selecionada]=3;
		if (contar("SPLIT")>21){
			for(let i=0;i<4; i++){
				if (deck[2][i]==3 && deck[1][i]==11){
					deck[1][i]=1
					return
				}
			}
			stand()
			win_d()

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
	else if (quem=="SPLIT"){
		for (let i=0; i<52; i++){
			if (deck[2][i]==3){
				soma+=deck[1][i];
			}
		}
	}
	return soma;
}
function stand(){
	if (split_value && !split_2_turn){
		split_2_turn=true;
		document.getElementById("hit").removeAttribute("onclick");
		document.getElementById("hit").setAttribute("onclick","random_carta('SPLIT')");
	}
	else {
		document.getElementById("hit").disabled=true;
		document.getElementById("stand").disabled=true;
		document.getElementById("split_btn").disabled=true;
		document.getElementById("double").disabled=true;
		document.getElementById("c_dealer1").setAttribute("alt","carta para cima")
		for (let i=0; i<52; i++){
			if (deck[2][i]==2){
				if (document.getElementById("c_dealer0").dataset.cardId!=i){
					rotate_card()
					setTimeout(function (){
						document.getElementById("c_dealer1").src=deck[0][i];
					},450)
					break;
				}
			}
		}
	}
}
function stand_btn(){
	if (split_value && !split_2_turn){
		stand()
	}
	else{
		stand();
		setTimeout(dealer,2000)
	}
}
function split(){
	aposta_split=aposta
	money-=aposta_split
	document.getElementById("money_display").innerHTML = money;
	split_value=true;
	split_2_turn=false;
	c_split.innerHTML+="<img src='"+deck[0][document.getElementById("c_player1").dataset.cardId]+"' data-card-id='"+document.getElementById("c_player1").dataset.cardId+"' alt='carta para cima' id='c_split"+c_split_id+"'>";
	c_split_id++
	deck[2][document.getElementById("c_player1").dataset.cardId]=3
	document.getElementById("c_player1").remove()
	split_move();
	setTimeout(function (){random_carta("PLAYER");random_carta("SPLIT");},1000)
	if (aposta>money){
		document.getElementById("double").disabled=true;
	}
}
function double_down(){
	if (split_value && !split_2_turn){
		money-=aposta;
		aposta+=aposta;
		document.getElementById("money_display").innerHTML = money;
		random_carta("PLAYER");
		if (contar("PLAYER")<21){
			stand()
		}
		if (aposta>money){
			document.getElementById("double").disabled=true;
		}
	}
	else if (split_value && split_2_turn){
		money-=aposta_split
		aposta_split+=aposta_split
		document.getElementById("money_display").innerHTML = money;
		random_carta("SPLIT");
		stand_btn()
	}
	else{
		money-=aposta;
		aposta+=aposta;
		document.getElementById("money_display").innerHTML = money;
		random_carta("PLAYER");
		if (contar("PLAYER")<21){
			stand_btn()
		}
	}
}
function dealer(){
	if (stop_dealer){
		return;
	}
	let valor=contar("DEALER");
	if(valor<=16){
		random_carta("DEALER")
		setTimeout(dealer,500)
	}
	else if (valor==17){
		if (contar("PLAYER")>17){
			win_p()
		}
		else if (contar("PLAYER")==17){
			empate()
		}
		else{
			win_d()
		}
	}
	else{
		if (valor>contar("PLAYER")){
			win_d()
		}
		else{
			let valor_need=21-valor;
			let cont=0
			for (let i=0; i<52; i++){
				if (deck[2][i]==0){
					if (deck[1][i]<valor_need){
						cont++;
					}
				}
			}
			let cont_luck=cont+Math.floor(Math.random()*5)
			if (cont_luck>12){
				random_carta("DEALER")
				setTimeout(dealer,500)
			}
			else{
				if (contar("PLAYER")==valor){
					empate()
				}
				else if (contar("PLAYER")>valor){
					win_p()
				}
				else{
					win_d()
				}
			}
		}

	}
}

//fim rodada
let stop_dealer=false;
function win_p(){
	if (split_value){
		resultados_split()
	}
	else{
		stop_dealer=true
		document.getElementById("resultados").hidden=false;
		document.getElementById("win").hidden=false;
		document.getElementById("win_start").innerHTML="Tinhas:"+(money+aposta);
		document.getElementById("win_bet").innerHTML="Apostaste:"+aposta;
		document.getElementById("win_end").innerHTML="Ficaste com:"+(money+2*aposta);
		money+=aposta*2;
		document.getElementById("valor_bet").max=money;
		document.getElementById("money_display").innerHTML = money;
		verifica_aposta(document.getElementById("valor_bet"))
	}
}
function win_d(){
	if (split_value){
		resultados_split()
	}
	else {
		document.getElementById("resultados").hidden=false;
		document.getElementById("lose").hidden=false;
		if (money==0){
			document.getElementById("lose_money").innerHTML="Ficaste sem dinheiro!"
			document.getElementById("btn_continue_l").hidden=true;
			document.getElementById("f5_lose").innerHTML="Sair"
		}
		else {
			document.getElementById("lose_start").innerHTML="Tinhas:"+(money+aposta);
			document.getElementById("lose_bet").innerHTML="Apostaste:"+aposta;
			document.getElementById("lose_end").innerHTML="Ficaste com:"+money;
		}
		document.getElementById("valor_bet").max=money;
		verifica_aposta(document.getElementById("valor_bet"))
	}
}
function empate(){
	if (split_value){
		resultados_split()
	}
	else {
		document.getElementById("resultados").hidden=false;
		document.getElementById("draw").hidden=false;
		document.getElementById("draw_start").innerHTML="Tinhas:"+(money+aposta);
		document.getElementById("draw_bet").innerHTML="Apostaste:"+aposta;
		document.getElementById("draw_end").innerHTML="Ficaste com:"+(money+aposta);
		money+=aposta;
		document.getElementById("money_display").innerHTML = money;
		document.getElementById("valor_bet").max=money;
		verifica_aposta(document.getElementById("valor_bet"))
	}
}
function resultados_split(){
	document.getElementById("resultados").hidden=false;
	document.getElementById("split").hidden=false;
	//1ª jogada
	if (contar("PLAYER")>21){
		document.getElementById("split1").innerHTML="Perdeste a primeira mão<br>Tinhas:"+(money+aposta+aposta_split)+"<br>Apostaste:"+aposta+"<br>Ficaste com:"+(money+aposta_split)+"<br>";
	}
	else if (contar("DEALER")>21){
		document.getElementById("split1").innerHTML="Ganhaste a primeira mão<br>Tinhas:"+(money+aposta+aposta_split)+"<br>Apostaste:"+aposta+"<br>Ficaste com:"+(money+aposta_split+(2*aposta))+"<br>";
		money+=(aposta*2);
	}
	else if (contar("PLAYER")<contar("DEALER")){
		document.getElementById("split1").innerHTML="Perdeste a primeira mão<br>Tinhas:"+(money+aposta+aposta_split)+"<br>Apostaste:"+aposta+"<br>Ficaste com:"+(money+aposta_split)+"<br>";
	}
	else if (contar("PLAYER")==contar("DEALER")){
		document.getElementById("split1").innerHTML="Empataste a primeira mão<br>Tinhas:"+(money+aposta+aposta_split)+"<br>Apostaste:"+aposta+"<br>Ficaste com:"+(money+aposta+aposta_split)+"<br>";
		money+=aposta;
	}
	else if (contar("PLAYER")>contar("DEALER")){
		document.getElementById("split1").innerHTML="Ganhaste a primeira mão<br>Tinhas:"+(money+aposta+aposta_split)+"<br>Apostaste:"+aposta+"<br>Ficaste com:"+(money+aposta_split+(2*aposta))+"<br>";
		money+=(aposta*2);
	}
	//2ª jogada
	if (contar("SPLIT")>21){
		document.getElementById("split2").innerHTML="Perdeste a segunda mão<br>Tinhas:"+(money+aposta_split)+"<br>Apostaste:"+aposta_split+"<br>Ficaste com:"+money+"<br>";
	}
	else if (contar("DEALER")>21){
		document.getElementById("split2").innerHTML="Ganhaste a segunda mão<br>Tinhas:"+(money+aposta_split)+"<br>Apostaste:"+aposta_split+"<br>Ficaste com:"+(money+2*aposta_split)+"<br>";
		money+=(aposta_split*2);
	}
	else if (contar("SPLIT")<contar("DEALER")){
		document.getElementById("split2").innerHTML="Perdeste a segunda mão<br>Tinhas:"+(money+aposta_split)+"<br>Apostaste:"+aposta_split+"<br>Ficaste com:"+money+"<br>";
	}
	else if (contar("SPLIT")==contar("DEALER")){
		document.getElementById("split2").innerHTML="Empataste a segunda mão<br>Tinhas:"+(money+aposta_split)+"<br>Apostaste:"+aposta_split+"<br>Ficaste com:"+(money+aposta_split)+"<br>";
		money+=aposta_split;
	}
	else if (contar("SPLIT")>contar("DEALER")){
		document.getElementById("split2").innerHTML="Ganhaste a segunda mão<br>Tinhas:"+(money+aposta_split)+"<br>Apostaste:"+aposta_split+"<br>Ficaste com:"+(money+2*aposta_split)+"<br>";
		money+=(aposta_split*2);
	}
	if (money==0){
		document.getElementById("split1").innerHTML="Ficaste sem dinheiro!";
		document.getElementById("split2").innerHTML="";
		document.getElementById("btn_continue_split").hidden=true;
		document.getElementById("f5_split").innerHTML="Sair"
	}
	document.getElementById("valor_bet").max=money;
	document.getElementById("money_display").innerHTML = money;
	verifica_aposta(document.getElementById("valor_bet"))
}
//animações
function rotate_card(){
	let carta=document.getElementById("c_dealer1");
	let angulo=0;
	let change=false;
	let intervalo_r=setInterval(function(){
		if (angulo==90){
			change=true;
		}
		if (change){
			angulo--;
			carta.style.transform="rotateY("+angulo+"deg)";
		}
		else {
			angulo++;
			carta.style.transform="rotateY("+angulo+"deg)";
		}
		if (angulo==0){
			clearInterval(intervalo_r);
		}
	},5)
}
let intervalo_m=new Array(0);
let pos_x=new Array(0);
let pos_y=new Array(0);
let cont_ani=0;
function move_card(quem,carta){
	const ani_index=cont_ani;
	cont_ani++;
	if (quem=="PLAYER"){
		pos_x.push(20+(6.1*c_player_id));
		pos_y.push(0);
		intervalo_m.push(setInterval(function(){
			if (pos_x[ani_index]<=0){
				clearInterval(intervalo_m[ani_index])
				carta.style.transform="translate(0,0)"
			}
			else {
				pos_x[ani_index]-=0.3;
				carta.style.transform="translateX("+(-pos_x[ani_index])+"rem)";
			}
		},1))
	}
	else if (quem=="DEALER"){
		pos_x.push(20+(6.1*c_dealer_id));
		pos_y.push(11.1);
		intervalo_m.push(setInterval(function(){
			if (pos_x[ani_index]<=0 && pos_y[ani_index]<=0){
				clearInterval(intervalo_m[ani_index])
				carta.style.transform="translate(0,0)"
			}
			else {
				if (pos_x[ani_index]>0){
					pos_x[ani_index]-=0.3;
				}
				if (pos_y[ani_index]>0){
					pos_y[ani_index]-=0.15;
				}
				carta.style.transform="translate("+(-pos_x[ani_index])+"rem,"+pos_y[ani_index]+"rem)";
			}
		},1))
	}
	else if (quem=="SPLIT"){
		pos_x.push(20+(6.1*c_split_id));
		pos_y.push(-11.1);
		intervalo_m.push(setInterval(function(){
			if (pos_x[ani_index]<=0 && pos_y[ani_index]>=0){
				clearInterval(intervalo_m[ani_index])
				carta.style.transform="translate(0,0)"
			}
			else {
				if (pos_x[ani_index]>0){
					pos_x[ani_index]-=0.3;
				}
				if (pos_y[ani_index]<0){
					pos_y[ani_index]+=0.15;
				}
				carta.style.transform="translate("+(-pos_x[ani_index])+"rem,"+pos_y[ani_index]+"rem)";
			}
		},1))
	}
}
function split_move(){
	let carta=document.getElementById("c_split0")
	let pos_x=6.1;
	let pos_y=-11.1;
	let intervalo_s=setInterval(function(){
		if (pos_x<=0 && pos_y>=0){
			clearInterval(intervalo_s)
			carta.style.transform="translate(0,0)"
		}
		else{
			if (pos_x>0){
				pos_x-=0.1;
			}
			if (pos_y<0){
				pos_y+=0.2;
			}
			carta.style.transform="translate("+pos_x+"rem,"+pos_y+"rem)"
		}
	},1)
}