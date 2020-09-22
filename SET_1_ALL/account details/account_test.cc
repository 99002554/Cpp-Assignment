#include "account.h"
#include <gtest/gtest.h>

TEST(Account,DefaultConstructor) {
    Account a1;
    EXPECT_EQ(0.0,a1.getBalance());
    EXPECT_EQ(0.0,a1.getm_number());
    EXPECT_EQ(0,a1.getm_name().length());
}
TEST(Account,ParameterizedConstructor) {
    Account a1(1001,"Lippman",5000.0);
    EXPECT_EQ(1001,a1.getm_number());
    EXPECT_STREQ("Lippman",a1.getm_name().c_str());
    EXPECT_EQ(7,a1.getm_name().length());
    EXPECT_EQ(5000.0,a1.getBalance());

}
TEST(Account,CopyConstructor) {
    Account a1(1001,"Lippman",5000.0);
    Account a2(a1);
    EXPECT_EQ(1001,a2.getm_number());
    EXPECT_STREQ("Lippman",a2.getm_name().c_str());
    EXPECT_EQ(7,a2.getm_name().length());
    EXPECT_EQ(5000.0,a2.getBalance());

}
TEST(Account,CreditTest) {
    Account a1(1001,"Lippman",5000.0);
    a1.credit(3000);
    EXPECT_EQ(8000.0,a1.getBalance());

}
TEST(Account,DebitTest) {
    Account a1(1001,"Lippman",5000.0);
    a1.debit(1200);
    EXPECT_EQ(3800.0,a1.getBalance());
}
TEST(Account,TransactionTest) {
    Account a1(1001,"Lippman",5000.0);
    a1.debit(1200);
    a1.credit(3400);
    a1.debit(2000);
    a1.credit(3000);
    EXPECT_EQ(8200.0,a1.getBalance()) << "Invalid Balance";
}
TEST(Account,DisplayTest) {
    Account a1(1001,"Lippman",5000.0);
    std::string ExpectedOut="1001,Lippman,5000\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

