#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <map>
#include <iterator>
#include "tinyxml.h"
#include "sale_xml_request.h"

using namespace std;


void saleXmlRequest()  {
    TiXmlDocument doc;
    TiXmlDeclaration* decl = new TiXmlDeclaration("1.0", "UTF-8", "");			// Fot the declaration at the top of xml
    doc.LinkEndChild(decl);

    TiXmlElement* TransactionRequest = new TiXmlElement("TransactionRequest");  // creating root node with name "TransactionRequest"
    doc.LinkEndChild(TransactionRequest);
    TransactionRequest->SetAttribute("RequestID", "01");

    TiXmlElement* PrivateData= new TiXmlElement("PrivateData");
    TransactionRequest->LinkEndChild(PrivateData);								// child node of TransactionRequest i.e PrivateData
    PrivateData->LinkEndChild(new TiXmlText("functionCode=01"));				// printing message(values) in-between

    PrivateData= new TiXmlElement("PrivateData");
    TransactionRequest->LinkEndChild(PrivateData);
    PrivateData->LinkEndChild(new TiXmlText("source=3"));

    PrivateData= new TiXmlElement("TotalAmount");
    TransactionRequest->LinkEndChild(PrivateData);
    PrivateData->LinkEndChild(new TiXmlText("5"));

    PrivateData = new TiXmlElement("PrivateData");
    TransactionRequest->LinkEndChild(PrivateData);
    PrivateData->LinkEndChild(new TiXmlText("merchantReference=6"));

    PrivateData = new TiXmlElement("PrivateData");
    TransactionRequest->LinkEndChild(PrivateData);
    PrivateData->LinkEndChild(new TiXmlText("customerMobile=6"));

    PrivateData = new TiXmlElement("PrivateData");
    TransactionRequest->LinkEndChild(PrivateData);
    PrivateData->LinkEndChild(new TiXmlText("userDefinedField=3"));

    PrivateData = new TiXmlElement("PrivateData");
    TransactionRequest->LinkEndChild(PrivateData);
    PrivateData->LinkEndChild(new TiXmlText("emailId=5"));

    PrivateData = new TiXmlElement("PrivateData");
    TransactionRequest->LinkEndChild(PrivateData);
    PrivateData->LinkEndChild(new TiXmlText("PAN=9"));

    PrivateData = new TiXmlElement("PrivateData");
    TransactionRequest->LinkEndChild(PrivateData);
    PrivateData->LinkEndChild(new TiXmlText("CRN=6"));

    PrivateData = new TiXmlElement("PrivateData");
    TransactionRequest->LinkEndChild(PrivateData);
    PrivateData->LinkEndChild(new TiXmlText("billerID=9"));

    PrivateData = new TiXmlElement("PrivateData");
    TransactionRequest->LinkEndChild(PrivateData);
    PrivateData->LinkEndChild(new TiXmlText("RFN1=9"));

    PrivateData = new TiXmlElement("PrivateData");
    TransactionRequest->LinkEndChild(PrivateData);
    PrivateData->LinkEndChild(new TiXmlText("RFN2=6"));

    PrivateData = new TiXmlElement("PrivateData");
    TransactionRequest->LinkEndChild(PrivateData);
    PrivateData->LinkEndChild(new TiXmlText("emiReferenceNumber=6"));

    PrivateData = new TiXmlElement("PrivateData");
    TransactionRequest->LinkEndChild(PrivateData);
    PrivateData->LinkEndChild(new TiXmlText("currencySelection=3"));

    /*if(user_name()!=null){
      PrivateData = new TiXmlElement("PrivateData");
      TransactionRequest->LinkEndChild(PrivateData);
      PrivateData->LinkEndChild(new TiXmlText(user_name()));
      }*/

    TiXmlPrinter printer;
    doc.Accept(&printer);
    string saleXml = printer.CStr(); // saving xml in string
    cout<<saleXml; // to print on console
    //doc.SaveFile("sendingRequest.xml");  // creating xml document
}
