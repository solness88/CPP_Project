#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"



int main()
{
    MerkelMain app{};
    app.init();
//
//    std::vector<OrderBookEntry> orders;
//
//    orders.push_back(
//                     OrderBookEntry {1000,
//                                     0.02,
//                                    "2020/03/17 17:01:24.884492",
//                                    "BTC/USDT",
//                                    OrderBookType::bid
//                     });
//
//    orders.push_back(
//                     OrderBookEntry{800,
//                         0.982,
//                         "1981/09/17 7:01:24.884492",
//                         "BTC/USDT",
//                         OrderBookType::ask
//                     });
//
//    for(OrderBookEntry order : orders){
//        std::cout << "The price is: " << order.price << std::endl;
//    }
//
//    for (unsigned int i = 0; i < orders.size(); ++i){
//        std::cout << "The price is: " << orders[i].price << std::endl;
//    }
//
//    for (unsigned int i = 0; i < orders.size(); ++i){
//        std::cout << "The price is: " << orders.at(i).price << std::endl;
//    }
}


