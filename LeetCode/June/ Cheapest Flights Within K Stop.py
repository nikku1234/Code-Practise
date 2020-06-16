class Solution:
    def findCheapestPrice(self, n: int, flights: List[List[int]], src: int, dst: int, K: int) -> int:
        graph = defaultdict(list)

        for source,destination,price in flights:
            graph[source].append([destination,price]);

        low_price = -1
        flight_queue=[]

        if src in graph:
            for destination,price in graph[src]:
                if destination==dst:
                    if K==0:
                        return price
                    low_price = price
                flight_queue.append([price,destination,0])
        else:
            return -1
        while flight_queue:
            f_price,f_dst,f_stops = flight_queue.pop(0)
            if f_dst in graph:
                for g_dst,g_price in graph[f_dst]:
                    new_price = f_price+g_price
                    new_stops = f_stops+1
                    if g_dst == dst:
                        if new_stops<=K:
                            if low_price == -1 or new_price<low_price:
                                low_price = new_price
                    else:
                        if new_stops<K:
                            if low_price == -1 or new_price<low_price:
                                flight_queue.append([new_price,g_dst,new_stops])
        return low_price




        
