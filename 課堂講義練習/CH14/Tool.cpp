#include "Tool.h"
   // default Tool constructor
   Tool::Tool( int pn, const std::string &tn, int is, double up ){
       setPartNumber(pn);
       setToolName(tn);
       setInStock(is);
       setUnitPrice(up);
}

   // accessor functions for partNumber
   void Tool::setPartNumber( int pn){
       partNumber = pn;
}
   int Tool::getPartNumber() const{
       return partNumber;
}

   // accessor functions for toolName
   void Tool::setToolName( const std::string & tn){
       size_t tn_size = tn.size() < LENGTH ? tn.size() : LENGTH;
       tn.copy(toolName, tn_size);
       toolName[ tn_size ] = '\0';
}
   std::string Tool::getToolName() const{
       return toolName;
}

   // accessor functions for inStock
   void Tool::setInStock( int is){
       inStock = is;
}
   int Tool::getInStock() const{
       return inStock;
}

   // accessor functions for unitPrice
   void Tool::setUnitPrice( double up){
       unitPrice = up;
}
   double Tool::getUnitPrice() const{
       return unitPrice;
}

