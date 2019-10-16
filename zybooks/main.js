var questions = document.getElementsByClassName("question-set-question short-answer-question ember-view")

function doQuestion(question){
	var show = question.children[0].children[1].children[0].children[1].children[1]
	show.click();show.click();
	var answer = question.children[1].children[1].children[0].innerText
	var input = question.children[0].getElementsByClassName("question-container flex-row")[0].children[0].children[0].getElementsByTagName("textarea")[0]
	input.focus()
	//input.value = answer
	//var submit = question.children[0].children[1].children[0].children[1].children[0]
	//setTimeout(function(){submit.click();},500)
}

for(i in questions){
	if(0<=i && i<= 0){
		var input = questions[i].children[0].getElementsByClassName("question-container flex-row")[0].children[0].children[0].getElementsByTagName("textarea")[0]
		console.log(input)
		input.focus()
		//doQuestion(questions[i])
	}
	
}
