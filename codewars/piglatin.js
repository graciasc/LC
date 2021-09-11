function pigIt(str){
  
  
  const words = str.split(' ')
  
  
   const finalWords = words.map((word, i) => {
    const length = word.length
    
    //skip symbols regex
    const symbols = /[^\p{L}\d\s@#]/ugm
    
    //skip symbols in loop
    if(word.match(symbols)) {
      return word
    }
     
    const  finalWord = word.substring(1,length) + word[0] + 'ay'
    return finalWord
  })
  
   console.log(finalWords)
  return finalWords.toString().replace(/,/gm, ' ')
}
