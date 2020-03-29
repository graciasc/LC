let sumValue = 10;
let arrayVal = [5, 5, 1, 9, 11, -1, 2];


const handleSum = (total, array) => {
  let map = new Map;

  for (let i = 0; i < array.length; i++) {

    // substracting the total from the current value in the array
    let complementary = total - array[i];

//if the complement is in the map then return in array format the complement and its position in the array
    if (map.has(complementary)) {

      return [map.get(complementary), i]
    }
    // if not then set the array value in the map
    map.set(array[i], i);
  }
}


console.log(handleSum(sumValue, arrayVal));


