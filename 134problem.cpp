class solution{
	public int cancompleteCircuit(int[] gas, int[] cost){
		
		int sumGas = 0;
		int sumCost = 0;	
		for (int i = 0; i < gas.length; i++){
			sumGas += gas[i];
			sumCost += cost[i];
		}
		if(sumCost > sumGas){
			return -1;
		}

		int currentTank = 0;
		int totalCost = 0;
		int startingStation = 0;

		for(int i = 0; i < gas.length; i++){
			currentTank += gas[i] - cost[i]; 

			totalCost += gas[i] - cost[i]; 

			if(currentTank < 0) {
				startingStation = i + 1;	
				currentTank = 0;
			}
		}
		return startingStation;

	}
}
