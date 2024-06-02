#pragma once
#include "OrderBookEntry.h"
#include "CSVReader.h"
#include <string>
#include <vector>

class OrderBook
{
    public:
    /** construct, reading a csv file */
        OrderBook(std::string filename);

    /** return vector of all known products in the dataset */
        std::vector<std::string> getKnownProducts();

    /** return vector of orders according to the sent filters */
        std::vector<OrderBookEntry> getOrders(std::string date);
    
        /** returns the earliest time in the order book */
        std::string getEarliestTime();
    
        /** returns the next time after the sent time in the order book 
         * if there is no next timestamp,
         * wraps arount to the start*/
        std::string getNextTime(std::string timestamp);

        static double getHighPrice(std::vector<OrderBookEntry>& orders);
        static double getLowPrice(std::vector<OrderBookEntry>& orders);

    private:
        std::vector<OrderBookEntry> orders;
};