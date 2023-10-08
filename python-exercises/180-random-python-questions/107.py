class QuizBrain():
    def __init__(self, questionList):
        self.questionNumber = 0,
        self.questionList = questionList

    def nextQuestion(self):
        currentQuestion = self.questionList[self.questionNumber]
        self.questionNumber += 1
        input(f"{self.questionNumber}: {currentQuestion.text} (True/False)? :")
