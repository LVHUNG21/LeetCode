class RandomizedSet{

	private ArrayList<Integer> list;
	private HashMap<Integer, Integer> map;


	public RandomizedSet(){
		list = new ArrayList<>();
		map  = new HashMap<>();
	}
	public boolean insert(int val){
		if( map.constainsKey(val)){
			return false;
		}
		list.add(val);
		map.put(val, list.size()-1);
		return true;
	}
	public boolean remove(int val){
		if(!map.constainsKey(val)){
			return false;
		}
		int index = map.get(val);
		
		map.remove(val);

		int lastElement = list.get(list.size() - 1);

		list.set(index, lastElement);
		map.put(lastElement, intdex);

		list.remove(list.size()-1);
		return true;
	}
	public int getRandom(){
		Random rand = new Random();
		return list.get(rand.nextInt(list.size()));
	}
}
