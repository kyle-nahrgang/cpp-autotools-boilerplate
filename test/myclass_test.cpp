#include <cppunit/extensions/HelperMacros.h>
#include <mylib.hpp>

class knahrgang_myclass_test_fixture : public CppUnit::TestFixture {
    CPPUNIT_TEST_SUITE(knahrgang_myclass_test_fixture);
    CPPUNIT_TEST(testTrue);
    CPPUNIT_TEST_SUITE_END();

  public:
    void setUp();
    void tearDown();

    void testTrue();
};

void knahrgang_myclass_test_fixture::setUp() {}
void knahrgang_myclass_test_fixture::tearDown() {}
void knahrgang_myclass_test_fixture::testTrue() {
    CPPUNIT_ASSERT(true);
}
