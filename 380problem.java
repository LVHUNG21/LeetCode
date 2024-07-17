class RandomizedSet {
    private ArrayList<Integer> list;
	private HashMap<Integer, Integer> map;
	private Random rand;

    public RandomizedSet() {
       list = new ArrayList<>();
	   map  = new HashMap<>(); 
	   rand = new Random();
    }
	public boolean insert(int val){
		if(map.containsKey(val)){
			return false;
		}
		list.add(val);
		map.put(val, list.size()-1);
        return true;
	}
    
    public boolean remove(int val) {
       if(!map.containsKey(val)){
		   return false;
	   } 
	   /* get index of element need to delete */
		int index = map.get(val);
		
		/* Remove from map */
		map.remove(val);

		int lastElement = list.get(list.size()-1);
		
		/* Fill last element into index of the element deleted */
		list.set(index, lastElement);	
		/* Update in Map*/
		map.put(lastElement, index);

		/* delete the last of element */
		list.remove(list.size() - 1);
        return true;
	}
    
    public int getRandom() {
    	return list.get(rand.nextInt(list.size()));    
    }
}

