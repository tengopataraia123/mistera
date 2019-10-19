document.body.addEventListener("click", fill());

function fill(){
	var textQuestions = document.getElementsByClassName("question-set-question short-answer-question ember-view")
	var radioQuestions = document.getElementsByClassName("question-set-question multiple-choice-question ember-view")
	var selected = 0

	MutationObserver = window.MutationObserver;

	var observer = new MutationObserver(function(mutations, observer) {
	    // fired when a mutation occurs
	    var parent = mutations[0].target.parentNode
	    var ans = mutations[0].target.className
	    var q = parent.getElementsByClassName("question")[0]
		var answers = q.getElementsByTagName("input")
	    if(ans == "explanation has-explanation incorrect"){
	    	for(i in mutations){
	    		setTimeout(clickNext(mutations[i].target.parentNode),3000)
	    	}
	    }
	});

	function clickNext(question){
		var q = question.getElementsByClassName("question")[0]

		var answers = q.getElementsByTagName("input")
		for(elem in answers){
			if(0 <= elem && elem<= 10){
				if(answers[elem].checked){
					var temp = parseInt(elem,10)+1
					answers[temp].click()
					return
				}
			}
		}
	}


	function doTextQuestion(question){
		var show = question.children[0].children[1].children[0].children[1].children[1]
		show.click();show.click();
		var answer = question.children[1].children[1].children[0].innerText
		var input = question.children[0].getElementsByClassName("question-container flex-row")[0].children[0].children[0].getElementsByTagName("textarea")[0]
		input.focus()
		input.value = answer
		var submit = question.children[0].children[1].children[0].children[1].children[0]
		//setTimeout(function(){submit.click();},500)
	}

	for(i in radioQuestions){

		if(0<=i && i<= 50){
			observer.observe(radioQuestions[i], {
		  subtree: true,
		  attributes: true
		  //...
		});

		var q = radioQuestions[i].getElementsByClassName("question")[0]

		var answers = q.getElementsByTagName("input")
		setTimeout(answers[0].click(),8000)

		}
	}

	for(i in textQuestions){
		if(0<=i && i<= 20){
			doTextQuestion(textQuestions[i])
			// var input = questions[i].children[0].getElementsByClassName("question-container flex-row")[0].children[0].children[0].getElementsByTagName("textarea")[0]
			// input.focus()
		}

	}
}